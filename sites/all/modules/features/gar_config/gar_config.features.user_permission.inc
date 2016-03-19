<?php
/**
 * @file
 * gar_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gar_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access google analytics reports'.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      'Content manager' => 'Content manager',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: 'administer google analytics reports api'.
  $permissions['administer google analytics reports api'] = array(
    'name' => 'administer google analytics reports api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_analytics_reports_api',
  );

  return $permissions;
}
