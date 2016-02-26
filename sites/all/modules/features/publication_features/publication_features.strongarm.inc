<?php
/**
 * @file
 * publication_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function publication_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_document_subjects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_document_subjects_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_publication_elapsed_period_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_publication_elapsed_period_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_regions_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_regions_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_statistical_publication_subjects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_statistical_publication_subjects_pattern'] = $strongarm;

  return $export;
}
