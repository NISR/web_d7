<?php
/**
 * @file
 * contact_config.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function contact_config_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Contact us',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1310720049,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '711d930e-d477-4c77-a577-09ce503ae721',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong>Location address:</strong><br>KN 2 Av 36,&amp;;<br>Village: INGENZI,&nbsp;Cell: KABEZA,<br>Sector: Muhima,&nbsp;District: Nyarugenge,<br>Kigali City, Rwanda<br><br><strong>Lo</strong><strong>cation on map:</strong><br><a href="https://www.google.com/maps/place/National+Institute+of+Statisctics/@-1.9415328,30.0572212,19z/data=!4m2!3m1!1s0x0:0xcbaa25c73ac6e1fc?hl=en" target="_blank">View on Google map</a><br><strong>P.O Box :&nbsp;</strong>6139 Kigali, Rwanda<br><strong>Telephone No.:&nbsp;</strong>+250 252 571035<br><strong>Fax No.:&nbsp;</strong>+250 252 570705<br><strong>Email :&nbsp;</strong>info@statistics.gov.rw</p><p>[[{"fid":"4275","view_mode":"full","fields":{"format":"full","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_file_image_description[und][0][value]":""},"type":"media","link_text":null,"attributes":{"height":534,"width":800,"style":"width: 300px; height: 200px; float: left;","class":"media-element file-full"}}]]</p><p>&nbsp;</p><p><strong>Working hours ((CAT) Central Africa Time (UTC/GMT+02:00))</strong>:<br>&nbsp;Between 7:00 AM to 5:00 PM Monday to Friday<br>&nbsp;Lunch break: 12:00 Noon to 1:00 PM</p>',
        'summary' => '',
        'format' => 2,
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2011-07-15 10:54:09 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
