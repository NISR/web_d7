<?php
/**
 * @file
 * application_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function application_config_taxonomy_default_vocabularies() {
  return array(
    'visa_status' => array(
      'name' => 'Visa status',
      'machine_name' => 'visa_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
