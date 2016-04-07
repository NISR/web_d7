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
	
	$comment = message_create('visa_item_comment', array('uid' => $user->uid));
	$wrapper = entity_metadata_wrapper('message',$comment);
	
	$wrapper->field_message_visa->set($form_state['values']['visa_id']);
	$wrapper->field_message_comment->set($form_state['values']['comment']);
	$wrapper->save();
	
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
	
	message_notify_send_message($comment,$options);
}
