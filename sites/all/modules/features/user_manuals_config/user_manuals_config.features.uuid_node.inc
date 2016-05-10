<?php
/**
 * @file
 * user_manuals_config.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function user_manuals_config_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Subjects / Topics',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'book',
  'language' => 'en',
  'created' => 1462895752,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '06869337-4ac6-47a3-bca0-0c445351469a',
  'body' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'book' => array(
    'bid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
    'parent_uuid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
    'weight' => 0,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:55:52 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Introduction',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'book',
  'language' => 'en',
  'created' => 1462893095,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e5b996e-7b5d-4db9-a5af-ac4cc9691404',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This website is powered by the award-winning <a href="http://www.drupal.org" target="_blank">Drupal</a><sup>TM</sup> Content Management System (CMS) version 7. It has been designed to present different types of internally produced&nbsp;information&nbsp;in an easy, intuitive, flexible and maintenable&nbsp;navigation&nbsp;structure.</p><p>It is build upon many&nbsp;building blocks named entities. These entities form the backbone of the system,&nbsp;hold and present&nbsp;information in various forms. In this guide we will focus only on the ones a user associated with the Content Manager&nbsp;role is entittled to adminster.</p><p>&nbsp;</p><ul></ul>',
        'summary' => '',
        'format' => 2,
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'book' => array(
    'bid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
    'parent_uuid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
    'weight' => 0,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:11:35 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Publications',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'book',
  'language' => 'en',
  'created' => 1462895228,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bd12e5bc-57ae-4a49-b56c-e35c314340bb',
  'body' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'book' => array(
    'bid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
    'parent_uuid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
    'weight' => 0,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:47:08 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Content Management Guide',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'book',
  'language' => 'en',
  'created' => 1462892771,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c9f6f64c-805b-459b-aa22-4dd1dadf204a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This guide mainly&nbsp;provides instructions on how to add, edit, update content&nbsp;on the National Institute of Statistics of Rwanda.</p><p>Target audience :</p><ul><li>Content Managers</li><li>Administrators</li></ul>',
        'summary' => '',
        'format' => 2,
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'book' => array(
    'bid' => 'new',
    'parent_depth_limit' => 1,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:06:11 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
