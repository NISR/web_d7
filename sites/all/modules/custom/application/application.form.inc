<?php


/*
 * The message form
 */
function application_message_form($form,&$form_state,$application_id){
   $form = array();	
	

	$form['message'] = array(
		'#type' => 'textarea',
		'#title' => t('Message'),
		'#description' => t('Write your message here'),
		'#rows' => '10',
		'#cols' => '40',	
		'#required' => TRUE,
		'#resizable' => FALSE,
	); 
	
	$form['application_id'] = array(
		'#type' => 'hidden',	
		'#value' => $application_id,
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
function application_message_form_submit($form,&$form_state){
	$message = entity_create('application', array('type' => 'message'));
	$wrapper = entity_metadata_wrapper('application',$message);
	
	$wrapper->field_app_message->set($form_state['values']['message']);
	$wrapper->field_app_instance->set($form_state['values']['application_id']);
	
	$wrapper->save();
}

/*
 * Message instance creation
 */
function application_message_create($message,$application_id){
	
}