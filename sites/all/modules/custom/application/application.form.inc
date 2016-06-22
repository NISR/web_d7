<?php


/*
 * The message form
 */
function application_visa_comment_form($form,&$form_state,$visa_id){
   $form = array();	
	
	$form['comment'] = array(
		'#type' => 'textarea',
		'#title' => t('Message'),
		'#description' => t('Write your message here'),
		'#rows' => '10',
		'#cols' => '40',	
		'#required' => TRUE,
		'#resizable' => FALSE,
	); 
		
	$form['visa_id'] = array(
		'#type' => 'hidden',	
		'#value' => $visa_id,
	);
	
	$form['actions']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Send'),
	
	);
	
	return $form;
}

/*
 * Message form submit handler
 */
function application_visa_comment_form_submit($form,&$form_state){
	global $user;
	$options['mail'] = '';
	
	$message = message_create('visa_new_comment', array('uid' => $user->uid));
	$msg = entity_metadata_wrapper('message',$message);
	
	$msg->field_message_visa->set($form_state['values']['visa_id']);
	$msg->field_message_comment->set($form_state['values']['comment']);
		
	// Notify people ...
	$visa = application_load($form_state['values']['visa_id']);
	// Check if Comment author is Visa author
	if($visa->uid == $user->uid){
		// Send notification to Visa crew
		foreach(get_users_by_role('Visa manager') as $visa_manager){
			$options['mail'] .= $visa_manager->mail . ',' ;
		}	
		$options['mail'] = substr($options['mail'], 0, -1);
		
	}else{
		// Send notification to Visa request's author
		$author = user_load($visa->uid);
		$options['mail'] = $author->mail;
	}
	
	message_notify_send_message($message,$options);
}

/**
 * Implementation of hook_form_alter()
 */
function application_form_alter(&$form, &$form_state, $form_id){

}

/**
 * Implements hook_form_FORM_ID_alter
 * 
 * Desactivate fields on the visa edit form
 */
function application_form_visa_application_form_alter(&$form,&$form_state,$form_id){	
	global $user;	

	// Hide visa field
	form_hide_field($form,'field_visa_file');
	
	// On a new visa application
	if(isset($form['#entity']->is_new) && ($form['#entity']->is_new)){
			// Hide Status field
			form_hide_field($form,'field_visa_status');		
			// Hide visa field
			form_hide_field($form,'field_visa_file');
			// Hide reports field
			form_hide_field($form,'field_visa_reports');
			// Show terms of use when submitting request
			$form['tos'] = array(
				'#type' => 'checkbox',
				'#title' => t('I agree to comply with the requirements specified in the ') . l('visa instruction manual','/publication/visa-instruction-manual',array('attributes'=>array('target' => '_blank'))),
				'#name' => 'tos',			
				'#weight' => 99,
				'#required' => TRUE,
			);
			// Preload Contact information with User profile info
			$profile = profile2_load_by_user($user,'main');
			$wrapper = entity_metadata_wrapper('profile2',$profile);
			
			// Make sure data is present
			if(count($profile->field_profile_pi)){
				$fc = &$form['field_visa_contact'][LANGUAGE_NONE][0];
				$fc['field_visa_contact_firstname'][LANGUAGE_NONE][0]['value']['#default_value'] = $wrapper->field_profile_pi->field_pi_firstname->value();
				$fc['field_visa_contact_lastname'][LANGUAGE_NONE][0]['value']['#default_value'] = $wrapper->field_profile_pi->field_pi_lastname->value();
				$fc['field_visa_contact_email'][LANGUAGE_NONE][0]['email']['#default_value'] = $user->mail;	
			}	
	}else{
		// Hide visa status field if user is neither manager nor administrator
		if(!nisr_service_user_has_role(array('Visa manager','administrator')) && $user->uid != 1){
			form_hide_field($form,'field_visa_status');
		}
		
		//form_hide_field($form,'field_visa_file');

		// Disable all info fields
		$form['field_visa_organization']['#disabled'] = TRUE;	
		$form['field_visa_contact']['#disabled'] = TRUE;	
		$form['field_visa_documents']['#disabled'] = TRUE;
		// Allow Visa managers and administrators to edit the report submission date
		if(!nisr_service_user_has_role(array('Visa manager','administrator'))) $form['field_visa_survey']['#disabled'] = TRUE;	
		// Change submit button label 
		$form['actions']['submit']['#value'] = t('Edit');
	}
		
	return $form;
}

/*
 * Routine to hide a field on a form with css to preserve its data if any
 *
 * @param
 *		array  form : the form
 *		string field : the field
 *		 
 */
function form_hide_field(&$form,$field){
	$form[$field]['#prefix'] = "<div class='element-invisible'>";
	$form[$field]['#suffix'] = "</div>";
}