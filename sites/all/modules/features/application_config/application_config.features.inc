<?php
/**
 * @file
 * application_config.features.inc
 */

/**
 * Implements hook_default_application_type().
 */
function application_config_default_application_type() {
  $items = array();
  $items['internship'] = entity_import('application_type', '{
    "type" : "internship",
    "label" : "Internship",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  $items['visa'] = entity_import('application_type', '{
    "type" : "visa",
    "label" : "Visa",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function application_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
