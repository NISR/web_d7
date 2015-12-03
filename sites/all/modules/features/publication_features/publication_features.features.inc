<?php
/**
 * @file
 * publication_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function publication_features_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_entityqueue_api().
 */
function publication_features_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function publication_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function publication_features_image_default_styles() {
  $styles = array();

  // Exported image style: pub_big_225x300_.
  $styles['pub_big_225x300_'] = array(
    'label' => 'Pub Big(225x300)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pub_small_112x150_.
  $styles['pub_small_112x150_'] = array(
    'label' => 'Pub Small(112x150)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 112,
          'height' => 150,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#333333',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '102%',
            'height' => '102%',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_publication_type().
 */
function publication_features_default_publication_type() {
  $items = array();
  $items['dataset'] = entity_import('publication_type', '{
    "type" : "dataset",
    "label" : "Dataset",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  $items['document'] = entity_import('publication_type', '{
    "type" : "document",
    "label" : "Document",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  $items['featured_indicator'] = entity_import('publication_type', '{
    "type" : "featured_indicator",
    "label" : "Featured indicator",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  $items['statistical_article'] = entity_import('publication_type', '{
    "type" : "statistical_article",
    "label" : "Statistical article",
    "weight" : "0",
    "description" : "",
    "locked" : "0",
    "data" : null
  }');
  $items['statistical_report'] = entity_import('publication_type', '{
    "type" : "statistical_report",
    "label" : "Statistical report",
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
function publication_features_default_search_api_index() {
  $items = array();
  $items['publications'] = entity_import('search_api_index', '{
    "name" : "Publications",
    "machine_name" : "publications",
    "description" : null,
    "server" : "db_index_server",
    "item_type" : "publication",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_doc_subject" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_pub_datasource" : { "type" : "integer", "entity_type" : "datasource" },
        "field_pub_elapsed_periods" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_pub_publication_date" : { "type" : "date" },
        "field_pub_pubsource" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "publication" },
        "field_pub_related" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "publication" },
        "field_pub_subject" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_pub_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "old_nid" : { "type" : "integer" },
        "period" : { "type" : "integer" },
        "pub_id" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "string" },
        "type" : { "type" : "string" },
        "uid" : { "type" : "integer", "entity_type" : "user" },
        "url" : { "type" : "uri" },
        "uuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "publication_alter_add_period" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
