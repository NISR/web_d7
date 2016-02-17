<?php
/**
 * @file
 * gar_config.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function gar_config_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Web analytics',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1450914522,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eba1142a-5299-42b9-a25e-f46d6fad0701',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
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
  'date' => '2015-12-24 01:48:42 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
