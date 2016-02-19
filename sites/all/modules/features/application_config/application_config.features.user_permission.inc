<?php
/**
 * @file
 * application_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function application_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer application entities'.
  $permissions['administer application entities'] = array(
    'name' => 'administer application entities',
    'roles' => array(
      'Visa manager' => 'Visa manager',
      'administrator' => 'administrator',
    ),
    'module' => 'application',
  );

  // Exported permission: 'administer application types'.
  $permissions['administer application types'] = array(
    'name' => 'administer application types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'application',
  );

  // Exported permission: 'create application entities'.
  $permissions['create application entities'] = array(
    'name' => 'create application entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'application',
  );

  // Exported permission: 'edit any application entities'.
  $permissions['edit any application entities'] = array(
    'name' => 'edit any application entities',
    'roles' => array(
      'Visa manager' => 'Visa manager',
      'administrator' => 'administrator',
    ),
    'module' => 'application',
  );

  // Exported permission: 'edit own application entities'.
  $permissions['edit own application entities'] = array(
    'name' => 'edit own application entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'application',
  );

  // Exported permission: 'view any application entities'.
  $permissions['view any application entities'] = array(
    'name' => 'view any application entities',
    'roles' => array(
      'Visa manager' => 'Visa manager',
      'administrator' => 'administrator',
    ),
    'module' => 'application',
  );

  // Exported permission: 'view own application entities'.
  $permissions['view own application entities'] = array(
    'name' => 'view own application entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'application',
  );

  return $permissions;
}
