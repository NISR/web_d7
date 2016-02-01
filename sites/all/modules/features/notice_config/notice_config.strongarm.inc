<?php
/**
 * @file
 * notice_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function notice_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_notice';
  $strongarm->value = 1;
  $export['comment_default_mode_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_notice';
  $strongarm->value = 2;
  $export['comment_preview_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__notice';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'body' => array(
          'weight' => '1',
        ),
        'revision_information' => array(
          'weight' => '2',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'options' => array(
          'weight' => '4',
        ),
        'menu' => array(
          'weight' => '-3',
        ),
        'taxonomy' => array(
          'weight' => '-2',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'print' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_notice';
  $strongarm->value = '0';
  $export['language_content_type_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_notice';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_notice';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_notice';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_notice';
  $strongarm->value = '1';
  $export['node_preview_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_notice';
  $strongarm->value = 0;
  $export['node_submitted_notice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_notice_pattern';
  $strongarm->value = '';
  $export['pathauto_node_notice_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_notices_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_notices_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_notice_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_notice_types_pattern'] = $strongarm;

  return $export;
}
