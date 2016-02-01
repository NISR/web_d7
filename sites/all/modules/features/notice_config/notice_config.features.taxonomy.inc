<?php
/**
 * @file
 * notice_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function notice_config_taxonomy_default_vocabularies() {
  return array(
    'notice_types' => array(
      'name' => 'Notice types',
      'machine_name' => 'notice_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'notices' => array(
      'name' => 'Notices',
      'machine_name' => 'notices',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
