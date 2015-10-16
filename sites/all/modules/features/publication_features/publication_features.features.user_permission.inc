<?php
/**
 * @file
 * publication_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function publication_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer publication entities'.
  $permissions['administer publication entities'] = array(
    'name' => 'administer publication entities',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'publication',
  );

  // Exported permission: 'administer publication types'.
  $permissions['administer publication types'] = array(
    'name' => 'administer publication types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publication',
  );

  // Exported permission: 'create publication entities'.
  $permissions['create publication entities'] = array(
    'name' => 'create publication entities',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
    ),
    'module' => 'publication',
  );

  // Exported permission: 'edit any publication entities'.
  $permissions['edit any publication entities'] = array(
    'name' => 'edit any publication entities',
    'roles' => array(
      'Content manager' => 'Content manager',
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'publication',
  );

  // Exported permission: 'edit own publication entities'.
  $permissions['edit own publication entities'] = array(
    'name' => 'edit own publication entities',
    'roles' => array(
      'Data entry clerk' => 'Data entry clerk',
      'administrator' => 'administrator',
    ),
    'module' => 'publication',
  );

  // Exported permission: 'view publication entities'.
  $permissions['view publication entities'] = array(
    'name' => 'view publication entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'publication',
  );

  return $permissions;
}
