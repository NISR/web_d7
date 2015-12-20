<?php
/**
 * @file
 * sm_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sm_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_standards-and-methods:node/1376.
  $menu_links['main-menu_standards-and-methods:node/1376'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1376',
    'router_path' => 'node/%',
    'link_title' => 'Standards and methods',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_standards-and-methods:node/1376',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -30,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Standards and methods');

  return $menu_links;
}
