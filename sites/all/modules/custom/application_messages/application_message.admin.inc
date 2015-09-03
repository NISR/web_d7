<?php

/**
 * Generates the application_message type editing form.
 */
function application_message_type_form($form, &$form_state, $application_message_type, $op = 'edit') {

  if ($op == 'clone') {
    $application_message_type->label .= ' (cloned)';
    $application_message_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $application_message_type->label,
    '#description' => t('The human-readable name of this application_message type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($application_message_type->type) ? $application_message_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $application_message_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'application_message_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this application_message type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($application_message_type->description) ? $application_message_type->description : '',
    '#description' => t('Description about the application_message type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save application_message type'),
    '#weight' => 40,
  );

  if (!$application_message_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete application_message type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('application_message_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing application_message_type.
 */
function application_message_type_form_submit(&$form, &$form_state) {
  $application_message_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  application_message_type_save($application_message_type);

  // Redirect user back to list of application_message types.
  $form_state['redirect'] = 'admin/structure/application_message-types';
}

function application_message_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/application_message-types/' . $form_state['application_message_type']->type . '/delete';
}

/**
 * Application type delete form.
 */
function application_message_type_form_delete_confirm($form, &$form_state, $application_message_type) {
  $form_state['application_message_type'] = $application_message_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['application_message_type_id'] = array('#type' => 'value', '#value' => entity_id('application_message_type' ,$application_message_type));
  return confirm_form($form,
    t('Are you sure you want to delete application_message type %title?', array('%title' => entity_label('application_message_type', $application_message_type))),
    'application_message/' . entity_id('application_message_type' ,$application_message_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Application type delete form submit handler.
 */
function application_message_type_form_delete_confirm_submit($form, &$form_state) {
  $application_message_type = $form_state['application_message_type'];
  application_message_type_delete($application_message_type);

  watchdog('application_message_type', '@type: deleted %title.', array('@type' => $application_message_type->type, '%title' => $application_message_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $application_message_type->type, '%title' => $application_message_type->label)));

  $form_state['redirect'] = 'admin/structure/application_message-types';
}

/**
 * Page to select application_message Type to add new application_message.
 */
function application_message_admin_add_page() {
  $items = array();
  foreach (application_message_types() as $application_message_type_key => $application_message_type) {
    $items[] = l(entity_label('application_message_type', $application_message_type), 'application_message/add/' . $application_message_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of application_message to create : ')));
}

/**
 * Add new application_message page callback.
 */
function application_message_add($type) {
  $application_message_type = application_message_types($type);

  $application_message = entity_create('application_message', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('application_message_type', $application_message_type))));

  $output = drupal_get_form('application_message_form', $application_message);
  
  return $output;
}

/**
 * Application Form.
 */
function application_message_form($form, &$form_state, $application_message) {
  $form_state['application_message'] = $application_message;
  
  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Title'),
    '#default_value' => $application_message->title,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $application_message->uid,
  );

  field_attach_form('application_message', $application_message, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save application_message'),
    '#submit' => $submit + array('application_message_form_submit'),
  );

  // Show Delete button if we edit application_message.
  $application_message_id = entity_id('application_message' ,$application_message);
  if (!empty($application_message_id) && application_message_access('edit', $application_message)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('application_message_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'application_message_form_validate';
  
  return $form;
}

function application_message_form_validate($form, &$form_state) {

}

/**
 * application_message submit handler.
 */
function application_message_form_submit($form, &$form_state) {
  $application_message = $form_state['application_message'];

  entity_form_submit_build_entity('application_message', $application_message, $form, $form_state);

  application_message_save($application_message);

  $application_message_uri = entity_uri('application_message', $application_message);

  $form_state['redirect'] = $application_message_uri['path'];

  drupal_set_message(t('Application %title saved.', array('%title' => entity_label('application_message', $application_message))));
}

function application_message_form_submit_delete($form, &$form_state) {
  $application_message = $form_state['application_message'];
  $application_message_uri = entity_uri('application_message', $application_message);
  $form_state['redirect'] = $application_message_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function application_message_delete_form($form, &$form_state, $application_message) {
  $form_state['application_message'] = $application_message;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['application_message_type_id'] = array('#type' => 'value', '#value' => entity_id('application_message' ,$application_message));
  $application_message_uri = entity_uri('application_message', $application_message);
  return confirm_form($form,
    t('Are you sure you want to delete application_message %title?', array('%title' => entity_label('application_message', $application_message))),
    $application_message_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function application_message_delete_form_submit($form, &$form_state) {
  $application_message = $form_state['application_message'];
  application_message_delete($application_message);

  drupal_set_message(t('application_message %title deleted.', array('%title' => entity_label('application_message', $application_message))));

  $form_state['redirect'] = '<front>';
}
