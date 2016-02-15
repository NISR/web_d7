<?php
/**
 * @file
 * press_config.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function press_config_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_notice_files'.
  $field_bases['field_notice_files'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_notice_files',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_references'.
  $field_bases['field_references'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_references',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'ad' => 0,
        'article' => 'article',
        'attached_notice' => 0,
        'book' => 'book',
        'ddblock_image_field_example_item' => 0,
        'geodata' => 'geodata',
        'image' => 0,
        'notice' => 0,
        'page' => 0,
        'panel' => 0,
        'simplenews' => 0,
        'story' => 'story',
        'survey' => 'survey',
        'survey_period' => 'survey_period',
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(
          0 => '',
        ),
        'display_name' => 'default',
        'view_name' => 'referenced_nodes_list',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
    'type_name' => 'story',
  );

  // Exported field_base: 'field_story_media'.
  $field_bases['field_story_media'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_story_media',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
