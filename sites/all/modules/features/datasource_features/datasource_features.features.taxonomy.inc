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
    'datasource_type' => array(
      'name' => 'Datasource type',
      'machine_name' => 'datasource_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
