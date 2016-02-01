<?php
/**
 * @file
 * advertisement_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function advertisement_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__advertisement';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_advertisement';
  $strongarm->value = '0';
  $export['language_content_type_advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_advertisement';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_advertisement';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_advertisement_block';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
  );
  $export['nodesinblock_advertisement_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_advertisement_collapsed';
  $strongarm->value = 1;
  $export['nodesinblock_advertisement_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_advertisement_collapsible';
  $strongarm->value = 1;
  $export['nodesinblock_advertisement_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_advertisement_label';
  $strongarm->value = 'Nodes in block';
  $export['nodesinblock_advertisement_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_advertisement_render';
  $strongarm->value = '0';
  $export['nodesinblock_advertisement_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_contenttypes';
  $strongarm->value = array(
    'advertisement' => 'advertisement',
    'article' => 0,
    'attached_notice' => 0,
    'geodata' => 0,
    'geospatialdata' => 0,
    'manuals' => 0,
    'simplenews' => 0,
    'notice' => 0,
    'page' => 0,
    'book' => 0,
    'story' => 0,
    'survey_period' => 0,
    'survey' => 0,
    'webform' => 0,
    'ddblock_image_field_example_item' => 0,
  );
  $export['nodesinblock_contenttypes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_friendlyname_0';
  $strongarm->value = 'Ad primary';
  $export['nodesinblock_friendlyname_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_friendlyname_1';
  $strongarm->value = 'Ad secondary';
  $export['nodesinblock_friendlyname_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_nrofblocks';
  $strongarm->value = '2';
  $export['nodesinblock_nrofblocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_referer';
  $strongarm->value = 0;
  $export['nodesinblock_referer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_visibility_0';
  $strongarm->value = '1';
  $export['nodesinblock_visibility_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodesinblock_visibility_1';
  $strongarm->value = '1';
  $export['nodesinblock_visibility_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_advertisement';
  $strongarm->value = array();
  $export['node_options_advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_advertisement';
  $strongarm->value = '1';
  $export['node_preview_advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_advertisement';
  $strongarm->value = 0;
  $export['node_submitted_advertisement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_advertisement_pattern';
  $strongarm->value = '';
  $export['pathauto_node_advertisement_pattern'] = $strongarm;

  return $export;
}
