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
    'subjects' => array(
      'name' => 'Subjects',
      'machine_name' => 'subjects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
