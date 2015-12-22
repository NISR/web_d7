<?php
/**
 * @file
 * publication_features.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function publication_features_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Statistical publications',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1443521625,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b5c1ef45-d080-4be0-a6f8-a37c026d9208',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This section contains a &nbsp;list of important publications in statistics, organized by field and their related subfields. All these official statistical publications are mostly in PDF format and in Excel sheet.</p>',
        'summary' => '',
        'format' => 2,
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-09-29 12:13:45 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
