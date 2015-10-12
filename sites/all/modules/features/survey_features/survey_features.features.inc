<?php
/**
 * @file
 * survey_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function survey_features_ctools_plugin_api($module = NULL, $api = NULL) {
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
function survey_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function survey_features_default_search_api_index() {
  $items = array();
  $items['surveys_index'] = entity_import('search_api_index', '{
    "name" : "Surveys index",
    "machine_name" : "surveys_index",
    "description" : null,
    "server" : "db_index_server",
    "item_type" : "survey",
    "options" : {
      "datasource" : { "bundles" : [ "survey_metadata" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_survey_coverage" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_survey_frequency" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_survey_sample_size" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "sid" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "uid" : { "type" : "integer", "entity_type" : "user" },
        "url" : { "type" : "uri" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_survey_type().
 */
function survey_features_default_survey_type() {
  $items = array();
  $items['survey_incidence'] = entity_import('survey_type', '{
    "type" : "survey_incidence",
    "label" : "Survey Incidence",
    "weight" : "0",
    "description" : "Survey instance over a specific period",
    "locked" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['survey_metadata'] = entity_import('survey_type', '{
    "type" : "survey_metadata",
    "label" : "Survey Metadata",
    "weight" : "0",
    "description" : "Survey definition",
    "locked" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
