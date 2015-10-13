<?php
/**
 * @file
 * datasource_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datasource_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer datasource entities'.
  $permissions['administer datasource entities'] = array(
    'name' => 'administer datasource entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'datasource',
  );

  // Exported permission: 'administer datasource types'.
  $permissions['administer datasource types'] = array(
    'name' => 'administer datasource types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'datasource',
  );

  // Exported permission: 'create datasource entities'.
  $permissions['create datasource entities'] = array(
    'name' => 'create datasource entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'datasource',
  );

  // Exported permission: 'edit any datasource entities'.
  $permissions['edit any datasource entities'] = array(
    'name' => 'edit any datasource entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'datasource',
  );

  // Exported permission: 'edit own datasource entities'.
  $permissions['edit own datasource entities'] = array(
    'name' => 'edit own datasource entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'datasource',
  );

  // Exported permission: 'view datasource entities'.
  $permissions['view datasource entities'] = array(
    'name' => 'view datasource entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'datasource',
  );

  return $permissions;
}
