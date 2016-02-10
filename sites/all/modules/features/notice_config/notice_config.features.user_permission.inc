<?php
/**
 * @file
 * notice_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function notice_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create job_advert content'.
  $permissions['create job_advert content'] = array(
    'name' => 'create job_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create tender_advert content'.
  $permissions['create tender_advert content'] = array(
    'name' => 'create tender_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_advert content'.
  $permissions['delete any job_advert content'] = array(
    'name' => 'delete any job_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any tender_advert content'.
  $permissions['delete any tender_advert content'] = array(
    'name' => 'delete any tender_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_advert content'.
  $permissions['delete own job_advert content'] = array(
    'name' => 'delete own job_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own tender_advert content'.
  $permissions['delete own tender_advert content'] = array(
    'name' => 'delete own tender_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_advert content'.
  $permissions['edit any job_advert content'] = array(
    'name' => 'edit any job_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any tender_advert content'.
  $permissions['edit any tender_advert content'] = array(
    'name' => 'edit any tender_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_advert content'.
  $permissions['edit own job_advert content'] = array(
    'name' => 'edit own job_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own tender_advert content'.
  $permissions['edit own tender_advert content'] = array(
    'name' => 'edit own tender_advert content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
