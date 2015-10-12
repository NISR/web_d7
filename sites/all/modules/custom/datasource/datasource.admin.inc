<?php

/**
 * Generates the datasource type editing form.
 */
function datasource_type_form($form, &$form_state, $datasource_type, $op = 'edit') {

  if ($op == 'clone') {
    $datasource_type->label .= ' (cloned)';
    $datasource_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $datasource_type->label,
    '#description' => t('The human-readable name of this datasource type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($datasource_type->type) ? $datasource_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $datasource_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'datasource_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this datasource type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($datasource_type->description) ? $datasource_type->description : '',
    '#description' => t('Description about the datasource type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save datasource type'),
    '#weight' => 40,
  );

  if (!$datasource_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete datasource type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('datasource_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing datasource_type.
 */
function datasource_type_form_submit(&$form, &$form_state) {
  $datasource_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  datasource_type_save($datasource_type);

  // Redirect user back to list of datasource types.
  $form_state['redirect'] = 'admin/structure/datasource-types';
}

function datasource_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/datasource-types/' . $form_state['datasource_type']->type . '/delete';
}

/**
 * Datasource type delete form.
 */
function datasource_type_form_delete_confirm($form, &$form_state, $datasource_type) {
  $form_state['datasource_type'] = $datasource_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['datasource_type_id'] = array('#type' => 'value', '#value' => entity_id('datasource_type' ,$datasource_type));
  return confirm_form($form,
    t('Are you sure you want to delete datasource type %title?', array('%title' => entity_label('datasource_type', $datasource_type))),
    'datasource/' . entity_id('datasource_type' ,$datasource_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Datasource type delete form submit handler.
 */
function datasource_type_form_delete_confirm_submit($form, &$form_state) {
  $datasource_type = $form_state['datasource_type'];
  datasource_type_delete($datasource_type);

  watchdog('datasource_type', '@type: deleted %title.', array('@type' => $datasource_type->type, '%title' => $datasource_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $datasource_type->type, '%title' => $datasource_type->label)));

  $form_state['redirect'] = 'admin/structure/datasource-types';
}

/**
 * Page to select datasource Type to add new datasource.
 */
function datasource_admin_add_page() {
  $items = array();
  foreach (datasource_types() as $datasource_type_key => $datasource_type) {
    $items[] = l(entity_label('datasource_type', $datasource_type), 'datasource/add/' . $datasource_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of datasource to create : ')));
}

/**
 * Add new datasource page callback.
 */
function datasource_add($type) {
  $datasource_type = datasource_types($type);

  $datasource = entity_create('datasource', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('datasource_type', $datasource_type))));

  $output = drupal_get_form('datasource_form', $datasource);
  
  return $output;
}

/**
 * Datasource Form.
 */
function datasource_form($form, &$form_state, $datasource) {
  $form_state['datasource'] = $datasource;
  
  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Title'),
    '#default_value' => $datasource->title,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $datasource->uid,
  );

  field_attach_form('datasource', $datasource, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save datasource'),
    '#submit' => $submit + array('datasource_form_submit'),
  );

  // Show Delete button if we edit datasource.
  $datasource_id = entity_id('datasource' ,$datasource);
  if (!empty($datasource_id) && datasource_access('edit', $datasource)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('datasource_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'datasource_form_validate';
  
  return $form;
}

function datasource_form_validate($form, &$form_state) {

}

/**
 * datasource submit handler.
 */
function datasource_form_submit($form, &$form_state) {
  $datasource = $form_state['datasource'];

  entity_form_submit_build_entity('datasource', $datasource, $form, $form_state);

  datasource_save($datasource);

  $datasource_uri = entity_uri('datasource', $datasource);

  $form_state['redirect'] = $datasource_uri['path'];

  drupal_set_message(t('Datasource %title saved.', array('%title' => entity_label('datasource', $datasource))));
}

function datasource_form_submit_delete($form, &$form_state) {
  $datasource = $form_state['datasource'];
  $datasource_uri = entity_uri('datasource', $datasource);
  $form_state['redirect'] = $datasource_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function datasource_delete_form($form, &$form_state, $datasource) {
  $form_state['datasource'] = $datasource;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['datasource_type_id'] = array('#type' => 'value', '#value' => entity_id('datasource' ,$datasource));
  $datasource_uri = entity_uri('datasource', $datasource);
  return confirm_form($form,
    t('Are you sure you want to delete datasource %title?', array('%title' => entity_label('datasource', $datasource))),
    $datasource_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function datasource_delete_form_submit($form, &$form_state) {
  $datasource = $form_state['datasource'];
  datasource_delete($datasource);

  drupal_set_message(t('datasource %title deleted.', array('%title' => entity_label('datasource', $datasource))));

  $form_state['redirect'] = '<front>';
}
