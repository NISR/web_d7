<?php
/**
 * @file
 * nisr_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nisr_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function nisr_features_default_search_api_server() {
  $items = array();
  $items['db_index_server'] = entity_import('search_api_server', '{
    "name" : "DB Index Server",
    "machine_name" : "db_index_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "4",
      "partial_matches" : 0,
      "indexes" : {
        "surveys_index" : {
          "sid" : {
            "table" : "search_api_db_surveys_index",
            "column" : "sid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_surveys_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_surveys_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "uid" : {
            "table" : "search_api_db_surveys_index",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_surveys_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_surveys_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_surveys_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_survey_sample_size" : {
            "table" : "search_api_db_surveys_index",
            "type" : "string",
            "boost" : "1.0",
            "column" : "field_survey_sample_size"
          },
          "field_survey_frequency" : {
            "table" : "search_api_db_surveys_index",
            "column" : "field_survey_frequency",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_survey_coverage" : {
            "table" : "search_api_db_surveys_index",
            "column" : "field_survey_coverage",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_surveys_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "statistical_reports" : {
          "pub_id" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "pub_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_statistical_reports_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "uid" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "uuid" : {
            "table" : "search_api_db_statistical_reports_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_pub_subject" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "field_pub_subject",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_pub_publication_date" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "field_pub_publication_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_pub_source" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "field_pub_source",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "period" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "period",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_url" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "search_api_url",
            "type" : "uri",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
