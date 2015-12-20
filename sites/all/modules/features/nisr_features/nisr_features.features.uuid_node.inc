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
  $nodes[] = array(
  'title' => 'Terms of use',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1319792107,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9eff1ac3-49ae-44ef-874d-740435ea5445',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
<!--break-->
<p>
	Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?&quot;</p>
',
        'summary' => NULL,
        'format' => 2,
        'safe_summary' => '',
      ),
    ),
  ),
  'date' => '2011-10-28 11:55:07 +0300',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
