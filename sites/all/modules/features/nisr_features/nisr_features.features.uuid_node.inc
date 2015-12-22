<?php
/**
 * @file
 * nisr_features.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nisr_features_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Error 404',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1348321907,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '44561e68-8586-48ee-9616-15a67bb5b61d',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3 class="rtecenter" style="color:red">
	Sorry!<br />
	<br />
	<br />
	The page you are looking for could not be found.<br />
	Try the search box to find the page you were looking for.</h3>
',
        'summary' => NULL,
        'format' => 2,
        'safe_summary' => '',
      ),
    ),
  ),
  'date' => '2012-09-22 16:51:47 +0300',
  'user_uuid' => '0e79b96d-57f4-407d-b283-c7b9fd2b403f',
);
  return $nodes;
}
