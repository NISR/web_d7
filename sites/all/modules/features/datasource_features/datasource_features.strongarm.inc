<?php
/**
 * @file
 * datasource_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datasource_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_datasource_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_datasource_types_pattern'] = $strongarm;

  return $export;
}
