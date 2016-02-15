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
    'weight' => 3,
  );

  // Exported role: Visa manager.
  $roles['Visa manager'] = array(
    'name' => 'Visa manager',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  return $roles;
}
