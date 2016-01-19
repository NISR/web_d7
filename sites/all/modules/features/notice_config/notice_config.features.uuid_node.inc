<?php
/**
 * @file
 * notice_config.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function notice_config_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Jobs',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1453148774,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0ec2a8b0-7bf0-44f8-a3f4-8c52d3b40dea',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>If you would like to apply for positions in NISR, please fill out and sign the following form (available in English and French in the links below) and submit it along with supporting document to the NISR – Central Secretariat, by post or in-person, before the indicated deadline.</p><p>[[{"fid":"4213","view_mode":"default","fields":{"format":"default"},"type":"media","link_text":"Application form - English","attributes":{"class":"file media-element file-default"}}]]</p><p>[[{"fid":"4214","view_mode":"default","fields":{"format":"default"},"type":"media","attributes":{"class":"file media-element file-default"},"link_text":"Application form - Français"}]]</p>',
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
  'date' => '2016-01-18 22:26:14 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Tenders',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1453149527,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6ed3ff70-1c84-484d-8117-45822c27e05d',
  'body' => array(),
  'path' => array(
    'pathauto' => 0,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-01-18 22:38:47 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
