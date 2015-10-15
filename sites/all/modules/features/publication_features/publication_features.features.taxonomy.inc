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
    'document_subjects' => array(
      'name' => 'Document subjects',
      'machine_name' => 'document_subjects',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'publication_elapsed_period' => array(
      'name' => 'Publication elapsed period',
      'machine_name' => 'publication_elapsed_period',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'subjects' => array(
      'name' => 'Subjects',
      'machine_name' => 'subjects',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}