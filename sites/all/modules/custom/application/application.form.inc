<?php


/*
 * The message form
 */
function application_visa_comment_form($form,&$form_state,$visa_id){
   $form = array();	
	
	$form['comment'] = array(
		'#type' => 'textarea',
		'#title' => t('Message'),
		'#description' => t('Write your comment here'),
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
	$options = array('mail');
	
	$message = message_create('visa_item_comment', array('uid' => $user->uid));
	$msg = entity_metadata_wrapper('message',$message);
	
	$msg->field_message_visa->set($form_state['values']['visa_id']);
	$msg->field_message_comment->set($form_state['values']['comment']);
	$msg->save();
	
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

	// Show terms of use when submitting request
	if($form['#entity']->is_new){
		if(isset($form['#entity'])){
			$form['tos'] = array(
				'#type' => 'checkbox',
				'#title' => t('I agree to comply with the requirements specified in the ') . l('visa instruction manual','/publication/visa-instruction-manual',array('attributes'=>array('target' => '_blank'))),
				'#name' => t('tos'),			
				'#weight' => 99,
				'#required' => TRUE,
			);
		}
	}else{
		// Disable all fields but reports
		$form['field_visa_organization']['#disabled'] = TRUE;	
		$form['field_visa_contact']['#disabled'] = TRUE;	
		$form['field_visa_documents']['#disabled'] = TRUE;	
		$form['field_visa_survey']['#disabled'] = TRUE;	
	}
	//Hide Status field
	$form['field_visa_status']['#prefix'] = "<div class='element-invisible'>";
	$form['field_visa_status']['#suffix'] = "</div>";
	
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
	
	return $form;
}