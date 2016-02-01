<?php
/**
 * @file
 * nisr_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nisr_features_user_default_roles() {
  $roles = array();

  // Exported role: Content manager.
  $roles['Content manager'] = array(
    'name' => 'Content manager',
    'weight' => 4,
  );

  // Exported role: Data entry clerk.
  $roles['Data entry clerk'] = array(
    'name' => 'Data entry clerk',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 6,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 5,
  );

  return $roles;
}
