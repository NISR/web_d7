<?php
/**
 * @file
 * datasource_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datasource_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datasource_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_datasource_type().
 */
function datasource_features_default_datasource_type() {
  $items = array();
  $items['datasource_incidence'] = entity_import('datasource_type', '{
    "type" : "datasource_incidence",
    "label" : "Datasource Incidence",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  $items['datasource_metadata'] = entity_import('datasource_type', '{
    "type" : "datasource_metadata",
    "label" : "Datasource Metadata",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  return $items;
}
