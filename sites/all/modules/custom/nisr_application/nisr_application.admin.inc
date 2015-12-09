<?php

/**
 * Generates the nisr_application type editing form.
 */
function nisr_application_type_form($form, &$form_state, $nisr_application_type, $op = 'edit') {

  if ($op == 'clone') {
    $nisr_application_type->label .= ' (cloned)';
    $nisr_application_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $nisr_application_type->label,
    '#description' => t('The human-readable name of this NISR application type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($nisr_application_type->type) ? $nisr_application_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $nisr_application_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'nisr_application_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this NISR application type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($nisr_application_type->description) ? $nisr_application_type->description : '',
    '#description' => t('Description about the NISR application type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save NISR application type'),
    '#weight' => 40,
  );

  if (!$nisr_application_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete NISR application type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('nisr_application_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing nisr_application_type.
 */
function nisr_application_type_form_submit(&$form, &$form_state) {
  $nisr_application_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  nisr_application_type_save($nisr_application_type);

  // Redirect user back to list of nisr_application types.
  $form_state['redirect'] = 'admin/structure/nisr_application-types';
}

function nisr_application_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/nisr_application-types/' . $form_state['nisr_application_type']->type . '/delete';
}

/**
 * Application type delete form.
 */
function nisr_application_type_form_delete_confirm($form, &$form_state, $nisr_application_type) {
  $form_state['nisr_application_type'] = $nisr_application_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['nisr_application_type_id'] = array('#type' => 'value', '#value' => entity_id('nisr_application_type' ,$nisr_application_type));
  return confirm_form($form,
    t('Are you sure you want to delete NISR application type %title?', array('%title' => entity_label('nisr_application_type', $nisr_application_type))),
    'nisr_application/' . entity_id('nisr_application_type' ,$nisr_application_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Application type delete form submit handler.
 */
function nisr_application_type_form_delete_confirm_submit($form, &$form_state) {
  $nisr_application_type = $form_state['nisr_application_type'];
  nisr_application_type_delete($nisr_application_type);

  watchdog('nisr_application_type', '@type: deleted %title.', array('@type' => $nisr_application_type->type, '%title' => $nisr_application_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $nisr_application_type->type, '%title' => $nisr_application_type->label)));

  $form_state['redirect'] = 'admin/structure/nisr_application-types';
}

/**
 * Page to select nisr_application Type to add new nisr_application.
 */
function nisr_application_admin_add_page() {
  $items = array();
  foreach (nisr_application_types() as $nisr_application_type_key => $nisr_application_type) {
    $items[] = l(entity_label('nisr_application_type', $nisr_application_type), 'nisr_application/add/' . $nisr_application_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of NISR application to create : ')));
}

/**
 * Add new nisr_application page callback.
 */
function nisr_application_add($type) {
  $nisr_application_type = nisr_application_types($type);

  $nisr_application = entity_create('nisr_application', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('nisr_application_type', $nisr_application_type))));

  $output = drupal_get_form('nisr_application_form', $nisr_application);
  
  return $output;
}

/**
 * Application Form.
 */
function nisr_application_form($form, &$form_state, $nisr_application) {
  $form_state['nisr_application'] = $nisr_application;
  
  $form['title'] = array(
  	'#type' => 'textfield',
 	'#required' => TRUE,
 	'#title' => t('Title'),
 	'#default_value' => $nisr_application->title,
  );
  
  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $nisr_application->uid,
  );

  field_attach_form('nisr_application', $nisr_application, $form, $form_state);

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
    '#submit' => $submit + array('nisr_application_form_submit'),
  );

  // Show Delete button if we edit nisr_application.
  $nisr_application_id = entity_id('nisr_application' ,$nisr_application);
  if (!empty($nisr_application_id) && nisr_application_access('edit', $nisr_application)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('nisr_application_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'nisr_application_form_validate';
  
  return $form;
}

function nisr_application_form_validate($form, &$form_state) {

}

/**
 * nisr_application submit handler.
 */
function nisr_application_form_submit($form, &$form_state) {
  $nisr_application = $form_state['nisr_application'];

  entity_form_submit_build_entity('nisr_application', $nisr_application, $form, $form_state);

  nisr_application_save($nisr_application);

  $nisr_application_uri = entity_uri('nisr_application', $nisr_application);

  $form_state['redirect'] = $nisr_application_uri['path'];

  drupal_set_message(t('Application saved.'));
}

function nisr_application_form_submit_delete($form, &$form_state) {
  $nisr_application = $form_state['nisr_application'];
  $nisr_application_uri = entity_uri('nisr_application', $nisr_application);
  $form_state['redirect'] = $nisr_application_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function nisr_application_delete_form($form, &$form_state, $nisr_application) {
  $form_state['nisr_application'] = $nisr_application;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['nisr_application_type_id'] = array('#type' => 'value', '#value' => entity_id('nisr_application' ,$nisr_application));
  $nisr_application_uri = entity_uri('nisr_application', $nisr_application);
  return confirm_form($form,
    t('Are you sure you want to delete NISR application %title?', array('%title' => entity_label('nisr_application', $nisr_application))),
    $nisr_application_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function nisr_application_delete_form_submit($form, &$form_state) {
  $nisr_application = $form_state['nisr_application'];
  nisr_application_delete($nisr_application);

  drupal_set_message(t('NISR application %title deleted.', array('%title' => entity_label('nisr_application', $nisr_application))));

  $form_state['redirect'] = 'profile';
}
