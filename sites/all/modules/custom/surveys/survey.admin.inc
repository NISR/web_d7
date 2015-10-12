<?php

/**
 * Generates the survey type editing form.
 */
function survey_type_form($form, &$form_state, $survey_type, $op = 'edit') {

  if ($op == 'clone') {
    $survey_type->label .= ' (cloned)';
    $survey_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $survey_type->label,
    '#description' => t('The human-readable name of this survey type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($survey_type->type) ? $survey_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $survey_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'survey_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this survey type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($survey_type->description) ? $survey_type->description : '',
    '#description' => t('Description about the survey type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save survey type'),
    '#weight' => 40,
  );

  if (!$survey_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete survey type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('survey_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing survey_type.
 */
function survey_type_form_submit(&$form, &$form_state) {
  $survey_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  survey_type_save($survey_type);

  // Redirect user back to list of survey types.
  $form_state['redirect'] = 'admin/structure/survey-types';
}

function survey_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/survey-types/' . $form_state['survey_type']->type . '/delete';
}

/**
 * Survey type delete form.
 */
function survey_type_form_delete_confirm($form, &$form_state, $survey_type) {
  $form_state['survey_type'] = $survey_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['survey_type_id'] = array('#type' => 'value', '#value' => entity_id('survey_type' ,$survey_type));
  return confirm_form($form,
    t('Are you sure you want to delete survey type %title?', array('%title' => entity_label('survey_type', $survey_type))),
    'survey/' . entity_id('survey_type' ,$survey_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Survey type delete form submit handler.
 */
function survey_type_form_delete_confirm_submit($form, &$form_state) {
  $survey_type = $form_state['survey_type'];
  survey_type_delete($survey_type);

  watchdog('survey_type', '@type: deleted %title.', array('@type' => $survey_type->type, '%title' => $survey_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $survey_type->type, '%title' => $survey_type->label)));

  $form_state['redirect'] = 'admin/structure/survey-types';
}

/**
 * Page to select survey Type to add new survey.
 */
function survey_admin_add_page() {
  $items = array();
  foreach (survey_types() as $survey_type_key => $survey_type) {
    $items[] = l(entity_label('survey_type', $survey_type), 'survey/add/' . $survey_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of survey to create : ')));
}

/**
 * Add new survey page callback.
 */
function survey_add($type) {
  $survey_type = survey_types($type);

  $survey = entity_create('survey', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('survey_type', $survey_type))));

  $output = drupal_get_form('survey_form', $survey);
  
  return $output;
}

/**
 * Survey Form.
 */
function survey_form($form, &$form_state, $survey) {
  $form_state['survey'] = $survey;
  
  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Title'),
    '#default_value' => $survey->title,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $survey->uid,
  );

  field_attach_form('survey', $survey, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save survey'),
    '#submit' => $submit + array('survey_form_submit'),
  );

  // Show Delete button if we edit survey.
  $survey_id = entity_id('survey' ,$survey);
  if (!empty($survey_id) && survey_access('edit', $survey)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('survey_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'survey_form_validate';
  
  return $form;
}

function survey_form_validate($form, &$form_state) {

}

/**
 * survey submit handler.
 */
function survey_form_submit($form, &$form_state) {
  $survey = $form_state['survey'];

  entity_form_submit_build_entity('survey', $survey, $form, $form_state);

  survey_save($survey);

  $survey_uri = entity_uri('survey', $survey);

  $form_state['redirect'] = $survey_uri['path'];

  drupal_set_message(t('Survey %title saved.', array('%title' => entity_label('survey', $survey))));
}

function survey_form_submit_delete($form, &$form_state) {
  $survey = $form_state['survey'];
  $survey_uri = entity_uri('survey', $survey);
  $form_state['redirect'] = $survey_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function survey_delete_form($form, &$form_state, $survey) {
  $form_state['survey'] = $survey;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['survey_type_id'] = array('#type' => 'value', '#value' => entity_id('survey' ,$survey));
  $survey_uri = entity_uri('survey', $survey);
  return confirm_form($form,
    t('Are you sure you want to delete survey %title?', array('%title' => entity_label('survey', $survey))),
    $survey_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function survey_delete_form_submit($form, &$form_state) {
  $survey = $form_state['survey'];
  survey_delete($survey);

  drupal_set_message(t('survey %title deleted.', array('%title' => entity_label('survey', $survey))));

  $form_state['redirect'] = '<front>';
}
