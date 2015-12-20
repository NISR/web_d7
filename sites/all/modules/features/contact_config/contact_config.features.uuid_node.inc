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
        'value' => '<p><strong>Location address:</strong><br>KN 2 Av 36,&nbsp;Avenue de la Justice,<br>Village: INGENZI,&nbsp;Cell: KABEZA,<br>Sector: Muhima,&nbsp;District: Nyarugenge,<br>Kigali City, Rwanda<br><br><strong>Location on map:</strong></p><p><a href="https://www.google.com/maps/place/National+Institute+of+Statisctics/@-1.9415328,30.0572212,19z/data=!4m2!3m1!1s0x0:0xcbaa25c73ac6e1fc?hl=en" target="_blank">View on Google map</a></p><p><strong>P.O Box :</strong><br>6139 Kigali, Rwanda<br><br><strong>Telephone No.:</strong><br>+250 252 571035</p><p><strong>Fax No.:</strong><br>+250 252 570705</p><p><strong>Email :</strong><br>info@statistics.gov.rw<br><br><strong>Working hours ((CAT) Central Africa Time (UTC/GMT+02:00))</strong>:</p><p>&nbsp;Between 7:00 AM to 5:00 PM Monday to Friday<br>&nbsp;Lunch break: 12:00 Noon to 1:00 PM</p>',
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
  'date' => '2011-07-15 11:54:09 +0300',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
