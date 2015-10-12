<?php
/**
 * @file
 * datasource_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datasource_features_taxonomy_default_vocabularies() {
  return array(
    'datasource_frequency' => array(
      'name' => 'Datasource frequency',
      'machine_name' => 'datasource_frequency',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'datasource_status' => array(
      'name' => 'Datasource status',
      'machine_name' => 'datasource_status',
      'description' => 'Status of a particular datasource incidence',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'datasource_territorial_coverage' => array(
      'name' => 'Datasource territorial coverage',
      'machine_name' => 'datasource_territorial_coverage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
