<?php
/**
 * @file
 * notice_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function notice_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function notice_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function notice_config_node_info() {
  $items = array(
    'job_advert' => array(
      'name' => t('Job advertisement'),
      'base' => 'node_content',
      'description' => t('A job advertisement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tender_advert' => array(
      'name' => t('Tender advertisement'),
      'base' => 'node_content',
      'description' => t('A tender advertisement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
