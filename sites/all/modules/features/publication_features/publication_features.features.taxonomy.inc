<?php
/**
 * @file
 * publication_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function publication_features_taxonomy_default_vocabularies() {
  return array(
    'publication_elapsed_period' => array(
      'name' => 'Publication elapsed period',
      'machine_name' => 'publication_elapsed_period',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'regions' => array(
      'name' => 'Regions',
      'machine_name' => 'regions',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'statistical_publication_subjects' => array(
      'name' => 'Statistical publication subjects',
      'machine_name' => 'statistical_publication_subjects',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
