<?php

/**
 * Generates the notice type editing form.
 */
function notice_type_form($form, &$form_state, $notice_type, $op = 'edit') {

  if ($op == 'clone') {
    $notice_type->label .= ' (cloned)';
    $notice_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $notice_type->label,
    '#description' => t('The human-readable name of this notice type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($notice_type->type) ? $notice_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $notice_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'notice_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this notice type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($notice_type->description) ? $notice_type->description : '',
    '#description' => t('Description about the notice type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save notice type'),
    '#weight' => 40,
  );

  if (!$notice_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete notice type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('notice_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing notice_type.
 */
function notice_type_form_submit(&$form, &$form_state) {
  $notice_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  notice_type_save($notice_type);

  // Redirect user back to list of notice types.
  $form_state['redirect'] = 'admin/structure/notice-types';
}

function notice_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/notice-types/' . $form_state['notice_type']->type . '/delete';
}

/**
 * Notice type delete form.
 */
function notice_type_form_delete_confirm($form, &$form_state, $notice_type) {
  $form_state['notice_type'] = $notice_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['notice_type_id'] = array('#type' => 'value', '#value' => entity_id('notice_type' ,$notice_type));
  return confirm_form($form,
    t('Are you sure you want to delete notice type %title?', array('%title' => entity_label('notice_type', $notice_type))),
    'notice/' . entity_id('notice_type' ,$notice_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Notice type delete form submit handler.
 */
function notice_type_form_delete_confirm_submit($form, &$form_state) {
  $notice_type = $form_state['notice_type'];
  notice_type_delete($notice_type);

  watchdog('notice_type', '@type: deleted %title.', array('@type' => $notice_type->type, '%title' => $notice_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $notice_type->type, '%title' => $notice_type->label)));

  $form_state['redirect'] = 'admin/structure/notice-types';
}

/**
 * Page to select notice Type to add new notice.
 */
function notice_admin_add_page() {
  $items = array();
  foreach (notice_types() as $notice_type_key => $notice_type) {
    $items[] = l(entity_label('notice_type', $notice_type), 'notice/add/' . $notice_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of notice to create : ')));
}

/**
 * Add new notice page callback.
 */
function notice_add($type) {
  $notice_type = notice_types($type);

  $notice = entity_create('notice', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('notice_type', $notice_type))));

  $output = drupal_get_form('notice_form', $notice);
  
  return $output;
}

/**
 * Notice Form.
 */
function notice_form($form, &$form_state, $notice) {
  $form_state['notice'] = $notice;
  
  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Title'),
    '#default_value' => $notice->title,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $notice->uid,
  );

  field_attach_form('notice', $notice, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save notice'),
    '#submit' => $submit + array('notice_form_submit'),
  );

  // Show Delete button if we edit notice.
  $notice_id = entity_id('notice' ,$notice);
  if (!empty($notice_id) && notice_access('edit', $notice)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('notice_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'notice_form_validate';
  
  return $form;
}

function notice_form_validate($form, &$form_state) {

}

/**
 * notice submit handler.
 */
function notice_form_submit($form, &$form_state) {
  $notice = $form_state['notice'];

  entity_form_submit_build_entity('notice', $notice, $form, $form_state);

  notice_save($notice);

  $notice_uri = entity_uri('notice', $notice);

  $form_state['redirect'] = $notice_uri['path'];

  drupal_set_message(t('Notice %title saved.', array('%title' => entity_label('notice', $notice))));
}

function notice_form_submit_delete($form, &$form_state) {
  $notice = $form_state['notice'];
  $notice_uri = entity_uri('notice', $notice);
  $form_state['redirect'] = $notice_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function notice_delete_form($form, &$form_state, $notice) {
  $form_state['notice'] = $notice;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['notice_type_id'] = array('#type' => 'value', '#value' => entity_id('notice' ,$notice));
  $notice_uri = entity_uri('notice', $notice);
  return confirm_form($form,
    t('Are you sure you want to delete notice %title?', array('%title' => entity_label('notice', $notice))),
    $notice_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function notice_delete_form_submit($form, &$form_state) {
  $notice = $form_state['notice'];
  notice_delete($notice);

  drupal_set_message(t('notice %title deleted.', array('%title' => entity_label('notice', $notice))));

  $form_state['redirect'] = '<front>';
}
