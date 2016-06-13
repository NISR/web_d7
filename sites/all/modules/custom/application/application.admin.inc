<?php

/**
 * Generates the application type editing form.
 */
function application_type_form($form, &$form_state, $application_type, $op = 'edit') {

  if ($op == 'clone') {
    $application_type->label .= ' (cloned)';
    $application_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $application_type->label,
    '#description' => t('The human-readable name of this  application type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($application_type->type) ? $application_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $application_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'application_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this application type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($application_type->description) ? $application_type->description : '',
    '#description' => t('Description about the  application type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save  application type'),
    '#weight' => 40,
  );

  if (!$application_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete  application type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('application_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing application_type.
 */
function application_type_form_submit(&$form, &$form_state) {
  $application_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  application_type_save($application_type);

  // Redirect user back to list of application types.
  $form_state['redirect'] = 'admin/structure/application-types';
}

function application_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/application-types/' . $form_state['application_type']->type . '/delete';
}

/**
 * Application type delete form.
 */
function application_type_form_delete_confirm($form, &$form_state, $application_type) {
  $form_state['application_type'] = $application_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['application_type_id'] = array('#type' => 'value', '#value' => entity_id('application_type' ,$application_type));
  return confirm_form($form,
    t('Are you sure you want to delete  application type %title?', array('%title' => entity_label('application_type', $application_type))),
    'application/' . entity_id('application_type' ,$application_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Application type delete form submit handler.
 */
function application_type_form_delete_confirm_submit($form, &$form_state) {
  $application_type = $form_state['application_type'];
  application_type_delete($application_type);

  watchdog('application_type', '@type: deleted %title.', array('@type' => $application_type->type, '%title' => $application_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $application_type->type, '%title' => $application_type->label)));

  $form_state['redirect'] = 'admin/structure/application-types';
}

/**
 * Page to select application Type to add new application.
 */
function application_admin_add_page() {
	
	if(!user_is_logged_in()){
  		module_load_include('inc','nisr','nisr.authentication');
		return drupal_get_form('service_login_form');
	}
  
	$items = array();
	foreach (application_types() as $application_type_key => $application_type) {
		$items[] = l(entity_label('application_type', $application_type), 'application/add/' . $application_type_key);
	}
	return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of  application to create : ')));
	
}


/**
 * Add new application page callback.
 */
function application_add($type) {
  if(!user_is_logged_in()){
		module_load_include('inc','nisr_service','nisr_service.authentication');
		return drupal_get_form('nisr_service_login_form',$type);	
  }
  
  $application_type = application_types($type);

  $application = entity_create('application', array('type' => $type));
  drupal_set_title(t('Apply for a @name', array('@name' => entity_label('application_type', $application_type))));

  $output = drupal_get_form($type . '_application_form', $application);
  
  return $output;
}

/**
 * Application Form.
 */
function application_form($form, &$form_state, $application) {
  $form_state['application'] = $application;
    
  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $application->uid,
  );
  
  $form['#attributes']['class'][] = 'application-form';
  if (!empty($application->type)) {
    $form['#attributes']['class'][] = 'application-' . $application->type . '-form';
  }
  
  field_attach_form('application', $application, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
    '#submit' => $submit + array('application_form_submit'),
  );


  $application_id = entity_id('application' ,$application);
  
  // Show Cancel button if new application
  if (empty($application_id) ) {
    $form['actions']['cancel'] = array(
    	'#markup' => l(t('Cancel'), '<front>'),
    );
  }
  
  // Show Delete button if we edit application.
  if (!empty($application_id) && application_access('edit', $application)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('application_form_submit_delete'),
    );
  }
  
  $form['#validate'][] = 'application_form_validate';
    
  return $form;

}

function application_form_validate($form, &$form_state){

}

/**
 * application submit handler.
 */
function application_form_submit($form, &$form_state) {
  $application = &$form_state['application'];
  $options = array('mail');

  if($application->type == 'visa'){
  		_visa_file_field_check_update($form_state,'field_visa_reports','visa_report_submitted','Visa manager');
  }
  
  entity_form_submit_build_entity('application', $application, $form, $form_state);
  
  application_save($application);

  $application_uri = entity_uri('application', $application);

  $form_state['redirect'] = $application_uri['path'];

  drupal_set_message(t('%bundle_label application saved.',array('%bundle_label' => get_bundle_label('application',$application->type))));
}

function application_form_submit_delete($form, &$form_state) {
  $application = $form_state['application'];
  $application_uri = entity_uri('application', $application);
  $form_state['redirect'] = $application_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function application_delete_form($form, &$form_state, $application) {
  $is_deletable = TRUE;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['application_type_id'] = array('#type' => 'value', '#value' => entity_id('application' ,$application));
  $application_uri = entity_uri('application', $application);

  if($application->type == 'visa'){
		// Do not allow deleting a visa item by the author after visa has been granted
		if($application->field_visa_file['und'][0]['fid']){
			$is_deletable = FALSE;
			drupal_set_message(t('You cannot delete an approved visa application'),'error');
			drupal_goto($application_uri['path']);
		}	
  }
  if($is_deletable){
	  $form_state['application'] = $application;

	  return confirm_form($form,
	    t('Are you sure you want to delete %bundle_label application id : %id ?', array('%bundle_label' => get_bundle_label('application',$application->type),'%id' => entity_id('application', $application))),
	    $application_uri['path'],
	    t('This action cannot be undone.'),
	    t('Delete'),
	    t('Cancel')
	  );
  }
}

/**
 * Delete form submit handler.
 */
function application_delete_form_submit($form, &$form_state) {
  $application = $form_state['application'];
  application_delete($application);
  
  drupal_set_message(t('%bundle_label application %id deleted.', array('%bundle_label' => get_bundle_label('application',$application->type),'%id' => entity_id('application', $application))));

  $form_state['redirect'] = 'service/' . $application->type;
}

/*
 * Check for a given visa file presence and notify if found
 *	@param
 *		array $form_state : 
 *		string $field_name
 *		string $message_type : 
 *		integer $message_recipient : 1 for author, 2 for the visa crew
 *		
 */
function _visa_file_field_check_update(&$form_state,$field_name,$message_type,$message_recipient){

  $new_state = (int)$form_state['values'][$field_name]['und'][0]['fid']; 
  $current_state = $form_state['application']->{$field_name}['und'][0]['fid'];
  
  if($new_state != $current_state){	
		if($current_state == 0){
			// 1. Notify
			$message = message_create($message_type, array('uid' => $user->uid));
			$msg = entity_metadata_wrapper('message',$message);
			$msg->field_message_visa->set($form_state['application']);
			if($message_recipient == 'author'){
				// Send notification to Visa application's author
				$author = user_load($form_state['application']->uid);
				$options['mail'] = $author->mail;					
			}else{
				// Send notification to Visa crew
				foreach(get_users_by_role($message_recipient) as $recpt){
					$options['mail'] .= $recpt->mail . ',' ;
				}	
				$options['mail'] = substr($options['mail'], 0, -1);
			}

			message_notify_send_message($message,$options);
			
			// 2. Update status
			//		Promote Field visa status
			//		@see get_visa_request_statuses()
			++$form_state['values']['field_visa_status']['und'][0]['value'];
		}else{
			// File removed for some reason
			//	Demote Field visa status
			--$form_state['values']['field_visa_status']['und'][0]['value'];	
		}
  }
}

