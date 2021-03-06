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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function datasource_features_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
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

/**
 * Implements hook_default_search_api_index().
 */
function datasource_features_default_search_api_index() {
  $items = array();
  $items['datasources'] = entity_import('search_api_index', '{
    "name" : "Datasources",
    "machine_name" : "datasources",
    "description" : null,
    "server" : "db_index_server",
    "item_type" : "datasource",
    "options" : {
      "datasource" : { "bundles" : [ "datasource_metadata" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "ds_id" : { "type" : "integer" },
        "field_datasource_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "old_nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "string" },
        "type" : { "type" : "string" },
        "uid" : { "type" : "integer", "entity_type" : "user" },
        "url" : { "type" : "uri" },
        "uuid" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
