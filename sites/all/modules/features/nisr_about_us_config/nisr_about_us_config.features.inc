<?php
/**
 * @file
 * nisr_about_us_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nisr_about_us_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
