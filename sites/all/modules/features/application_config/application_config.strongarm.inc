<?php
/**
 * @file
 * application_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function application_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_application_pattern';
  $strongarm->value = '';
  $export['pathauto_file_application_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_visa_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_visa_status_pattern'] = $strongarm;

  return $export;
}
