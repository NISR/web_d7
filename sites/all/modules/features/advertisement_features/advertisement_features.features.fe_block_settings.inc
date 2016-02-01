<?php
/**
 * @file
 * advertisement_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function advertisement_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['nodesinblock-0'] = array(
    'cache' => 1,
    'css_class' => 'ad-primary',
    'custom' => 0,
    'delta' => 0,
    'module' => 'nodesinblock',
    'node_types' => array(),
    'pages' => '*',
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
    'visibility' => 1,
  );

  $export['nodesinblock-1'] = array(
    'cache' => 1,
    'css_class' => 'col-md-12 ad-box ad-secondary pull-right',
    'custom' => 0,
    'delta' => 1,
    'module' => 'nodesinblock',
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
    'visibility' => 1,
  );

  return $export;
}
