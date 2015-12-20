<?php
/**
 * @file
 * sm_features.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function sm_features_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Standards and Methods',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1443539254,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b08ef557-1ad2-4b6f-ba7b-c073f0a85550',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat</p>',
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
  'date' => '2015-09-29 18:07:34 +0300',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
