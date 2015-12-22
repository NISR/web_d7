<?php
/**
 * @file
 * datasource_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datasource_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-datasource_widgets-fsi'] = array(
    'cache' => -1,
    'css_class' => 'col-md-3 box-outline texture',
    'custom' => 0,
    'delta' => 'datasource_widgets-fsi',
    'module' => 'views',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
