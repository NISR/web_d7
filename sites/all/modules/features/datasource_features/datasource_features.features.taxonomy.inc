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
    'datasource_types' => array(
      'name' => 'Datasource types',
      'machine_name' => 'datasource_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
