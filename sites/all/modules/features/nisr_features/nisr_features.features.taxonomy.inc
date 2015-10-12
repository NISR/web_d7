<?php
/**
 * @file
 * nisr_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nisr_features_taxonomy_default_vocabularies() {
  return array(
    'countries' => array(
      'name' => 'Countries',
      'machine_name' => 'countries',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_3' => array(
      'name' => 'Ad groups',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'ad',
      'weight' => 0,
    ),
  );
}
