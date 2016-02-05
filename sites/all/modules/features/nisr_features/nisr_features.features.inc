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
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nisr_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nisr_features_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function nisr_features_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true }
  }');
  return $items;
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
            "table" : "search_api_db_statistical_reports_text_1",
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
          "old_nid" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "old_nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "uuid" : {
            "table" : "search_api_db_statistical_reports",
            "type" : "string",
            "boost" : "1.0",
            "column" : "uuid"
          },
          "url" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_pub_subject" : {
            "table" : "search_api_db_statistical_reports_field_pub_subject",
            "column" : "field_pub_subject",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_article_source" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "field_article_source",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_pub_publication_date" : {
            "table" : "search_api_db_statistical_reports",
            "column" : "field_pub_publication_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_pub_related" : {
            "table" : "search_api_db_statistical_reports_field_pub_related",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
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
        },
        "datasources_index" : {
          "type" : {
            "table" : "search_api_db_datasources_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_datasources_index_text_1",
            "type" : "text",
            "boost" : "1.0",
            "column" : "title"
          },
          "uid" : {
            "table" : "search_api_db_datasources_index",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_datasources_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_datasources_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "uuid" : {
            "table" : "search_api_db_datasources_index_text_1",
            "type" : "text",
            "boost" : "1.0",
            "column" : "uuid"
          },
          "url" : {
            "table" : "search_api_db_datasources_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_datasources_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "period" : {
            "table" : "search_api_db_datasources_index",
            "column" : "period",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "publications" : {
          "pub_id" : {
            "table" : "search_api_db_publications",
            "column" : "pub_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_publications",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_publications",
            "type" : "string",
            "boost" : "1.0",
            "column" : "title"
          },
          "uid" : {
            "table" : "search_api_db_publications",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_publications",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_publications",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "old_nid" : {
            "table" : "search_api_db_publications",
            "column" : "old_nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "uuid" : {
            "table" : "search_api_db_publications",
            "column" : "uuid",
            "type" : "string",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_publications",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_pub_subject" : {
            "table" : "search_api_db_publications",
            "column" : "field_pub_subject",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_pub_publication_date" : {
            "table" : "search_api_db_publications",
            "column" : "field_pub_publication_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_pub_related" : {
            "table" : "search_api_db_publications_field_pub_related",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_pub_datasource" : {
            "table" : "search_api_db_publications",
            "column" : "field_pub_datasource",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_publications",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_doc_subject" : {
            "table" : "search_api_db_publications_field_doc_subject",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_pub_pubsource" : {
            "table" : "search_api_db_publications_field_pub_pubsource",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "period" : {
            "table" : "search_api_db_publications",
            "column" : "period",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_pub_elapsed_periods" : {
            "table" : "search_api_db_publications",
            "column" : "field_pub_elapsed_periods",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_pub_tags" : {
            "table" : "search_api_db_publications_field_pub_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        },
        "datasources" : {
          "ds_id" : {
            "table" : "search_api_db_datasources",
            "column" : "ds_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_datasources",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_datasources",
            "column" : "title",
            "type" : "string",
            "boost" : "1.0"
          },
          "uid" : {
            "table" : "search_api_db_datasources",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_datasources",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_datasources",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "old_nid" : {
            "table" : "search_api_db_datasources",
            "column" : "old_nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "uuid" : {
            "table" : "search_api_db_datasources",
            "column" : "uuid",
            "type" : "string",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_datasources",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_datasources",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_datasource_type" : {
            "table" : "search_api_db_datasources",
            "column" : "field_datasource_type",
            "type" : "integer",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
