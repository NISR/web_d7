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
  'title' => 'Publication classification',
  'log' => 'Title changed from <em class="placeholder">Publication classification</em> to <em class="placeholder">Publication classification</em>.',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'book',
  'language' => 'en',
  'created' => 1462895752,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '06869337-4ac6-47a3-bca0-0c445351469a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Publications can be classified following a predefined&nbsp;structure optionally associated with&nbsp;a free dynamic model (tagging). This section shows&nbsp;the two different classification models in use for statistical publications and documents</p><p>Navigate to : <strong>Structure &gt; Taxonomy </strong>from&nbsp;the top administration toolbar<strong>&nbsp;</strong>and choose statistical publication subject vocabulary.</p><p>Fig.</p><p>[[{"fid":"4665","view_mode":"full","fields":{"format":"full","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_file_image_description[und][0][value]":""},"type":"media","link_text":null,"attributes":{"height":557,"width":1315,"class":"media-element file-full"}}]]</p><p>This hierarchical structure&nbsp;controls the subject field on statistical report entity and on dependant entities as well(statistical articles, infographic items etc)&nbsp;.</p><p><strong><u>Add a term</u></strong></p><p>To add a subject, click on the <em>Add a term</em> link on top of the list to bring the add term form adn determine :</p><ul><li>The subject\'s name</li><li>A description text</li><li>A dataset which can render a chart object on the subject page. This option is actually obsolete</li></ul><p>[[{"fid":"4670","view_mode":"full","fields":{"format":"full","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_file_image_description[und][0][value]":""},"type":"media","attributes":{"height":534,"width":1309,"class":"media-element file-full"},"link_text":null}]]</p><p>Once the subject/term is added, use the cross beside it&nbsp;to re-arrange its position in the subject\'s list.</p><p>To manage the document classification structure, choose Document subjects from <strong>Structure &gt; Taxonomy</strong> and apply the same rules as explained above.&nbsp;</p><p>[[{"fid":"4666","view_mode":"full","fields":{"format":"full","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_file_image_description[und][0][value]":""},"type":"media","link_text":null,"attributes":{"height":492,"width":1328,"class":"media-element file-full"}}]]</p>',
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
    'parent_uuid' => 'bd12e5bc-57ae-4a49-b56c-e35c314340bb',
    'weight' => -13,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:55:52 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Introduction',
  'log' => '',
  'status' => 1,
  'comment' => 1,
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
        'value' => '<p>The&nbsp;National Institute of Statistics&nbsp;website is powered by the popular open-source&nbsp;<a href="http://www.drupal.org" target="_blank">Drupal</a><sup>TM</sup> Content Management System (CMS) version 7. It has been designed to present different types of content&nbsp;in an easy, intuitive, flexible and maintainable way.</p><p>It is mainly desgined&nbsp;upon many&nbsp;building blocks named entities. These entities form the backbone of the system,&nbsp;hold and present&nbsp;information in various forms. An entity could be an user, a report, an article, a&nbsp;file etc</p><p>In this guide we will focus only on the ones presented to the general&nbsp;public.</p><p>&nbsp;</p><ul></ul>',
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
    'weight' => -15,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:11:35 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Publications',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'book',
  'language' => 'en',
  'created' => 1462895228,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bd12e5bc-57ae-4a49-b56c-e35c314340bb',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>A publication&nbsp;entity is&nbsp;the principal fabric&nbsp;on this&nbsp;website. They are organized into 2 main&nbsp;groups :&nbsp;Statistical publications and non-statistical publications, also called here&nbsp;Documents.</p>',
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
    'weight' => -14,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:47:08 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  $nodes[] = array(
  'title' => 'Content Management Guide',
  'log' => '',
  'status' => 1,
  'comment' => 1,
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
        'value' => '<p>This guide mainly&nbsp;provides instructions on how to add, edit, update and classify content&nbsp;on the National Institute of Statistics of Rwanda website.</p><p>The target audiences are :</p><ul><li>Content Managers</li><li>Administrators</li></ul>',
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
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-05-10 17:06:11 +0200',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
