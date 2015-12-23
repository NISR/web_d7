<?php
/**
 * @file
 * nisr_data_portals_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nisr_data_portals_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
