<?php
/**
 * @file
 * nisr_data_portals_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nisr_data_portals_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-data-portals'] = array(
    'cache' => -1,
    'css_class' => 'horizontal-menu',
    'custom' => 0,
    'delta' => 'menu-data-portals',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
