<?php
/**
 * @file
 * message_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function message_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer message types'.
  $permissions['administer message types'] = array(
    'name' => 'administer message types',
    'roles' => array(),
    'module' => 'message',
  );

  // Exported permission: 'bypass message access control'.
  $permissions['bypass message access control'] = array(
    'name' => 'bypass message access control',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create any message instance'.
  $permissions['create any message instance'] = array(
    'name' => 'create any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'message',
  );

  // Exported permission: 'delete any message instance'.
  $permissions['delete any message instance'] = array(
    'name' => 'delete any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'edit any message instance'.
  $permissions['edit any message instance'] = array(
    'name' => 'edit any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'send message notify'.
  $permissions['send message notify'] = array(
    'name' => 'send message notify',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'message_notify_ui',
  );

  // Exported permission: 'update tokens'.
  $permissions['update tokens'] = array(
    'name' => 'update tokens',
    'roles' => array(),
    'module' => 'message_ui',
  );

  // Exported permission: 'view any message instance'.
  $permissions['view any message instance'] = array(
    'name' => 'view any message instance',
    'roles' => array(),
    'module' => 'message_ui',
  );

  return $permissions;
}
