<?php

/**
 * Generates the publication type editing form.
 */
function publication_type_form($form, &$form_state, $publication_type, $op = 'edit') {

  if ($op == 'clone') {
    $publication_type->label .= ' (cloned)';
    $publication_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $publication_type->label,
    '#description' => t('The human-readable name of this publication type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($publication_type->type) ? $publication_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $publication_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'publication_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this publication type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($publication_type->description) ? $publication_type->description : '',
    '#description' => t('Description about the publication type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save publication type'),
    '#weight' => 40,
  );

  if (!$publication_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete publication type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('publication_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing publication_type.
 */
function publication_type_form_submit(&$form, &$form_state) {
  $publication_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  publication_type_save($publication_type);

  // Redirect user back to list of publication types.
  $form_state['redirect'] = 'admin/structure/publication-types';
}

function publication_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/publication-types/' . $form_state['publication_type']->type . '/delete';
}

/**
 * Publication type delete form.
 */
function publication_type_form_delete_confirm($form, &$form_state, $publication_type) {
  $form_state['publication_type'] = $publication_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['publication_type_id'] = array('#type' => 'value', '#value' => entity_id('publication_type' ,$publication_type));
  return confirm_form($form,
    t('Are you sure you want to delete publication type %title?', array('%title' => entity_label('publication_type', $publication_type))),
    'publication/' . entity_id('publication_type' ,$publication_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Publication type delete form submit handler.
 */
function publication_type_form_delete_confirm_submit($form, &$form_state) {
  $publication_type = $form_state['publication_type'];
  publication_type_delete($publication_type);

  watchdog('publication_type', '@type: deleted %title.', array('@type' => $publication_type->type, '%title' => $publication_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $publication_type->type, '%title' => $publication_type->label)));

  $form_state['redirect'] = 'admin/structure/publication-types';
}

/**
 * Page to select publication Type to add new publication.
 */
function publication_admin_add_page() {
  $items = array();
  foreach (publication_types() as $publication_type_key => $publication_type) {
    $items[] = l(entity_label('publication_type', $publication_type), 'publication/add/' . $publication_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of publication to create.')));
}

/**
 * Add new publication page callback.
 */
function publication_add($type) {
  $publication_type = publication_types($type);

  $publication = entity_create('publication', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('publication_type', $publication_type))));

  $output = drupal_get_form('publication_form', $publication);

  return $output;
}

/**
 * Publication Form.
 */
function publication_form($form, &$form_state, $publication) {
  $form_state['publication'] = $publication;

  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Name'),
    '#default_value' => $publication->title,
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#default_value' => $publication->description,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $publication->uid,
  );

  field_attach_form('publication', $publication, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save publication'),
    '#submit' => $submit + array('publication_form_submit'),
  );

  // Show Delete button if we edit publication.
  $publication_id = entity_id('publication' ,$publication);
  if (!empty($publication_id) && publication_access('edit', $publication)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('publication_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'publication_form_validate';

  return $form;
}

function publication_form_validate($form, &$form_state) {

}

/**
 * publication submit handler.
 */
function publication_form_submit($form, &$form_state) {
  $publication = $form_state['publication'];

  entity_form_submit_build_entity('publication', $publication, $form, $form_state);

  publication_save($publication);

  $publication_uri = entity_uri('publication', $publication);

  $form_state['redirect'] = $publication_uri['path'];

  drupal_set_message(t('publication %title saved.', array('%title' => entity_label('publication', $publication))));
}

function publication_form_submit_delete($form, &$form_state) {
  $publication = $form_state['publication'];
  $publication_uri = entity_uri('publication', $publication);
  $form_state['redirect'] = $publication_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function publication_delete_form($form, &$form_state, $publication) {
  $form_state['publication'] = $publication;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['publication_type_id'] = array('#type' => 'value', '#value' => entity_id('publication' ,$publication));
  $publication_uri = entity_uri('publication', $publication);
  return confirm_form($form,
    t('Are you sure you want to delete publication %title?', array('%title' => entity_label('publication', $publication))),
    $publication_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function publication_delete_form_submit($form, &$form_state) {
  $publication = $form_state['publication'];
  publication_delete($publication);

  drupal_set_message(t('publication %title deleted.', array('%title' => entity_label('publication', $publication))));

  $form_state['redirect'] = '<front>';
}