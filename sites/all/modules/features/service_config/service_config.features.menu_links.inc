<?php
/**
 * @file
 * service_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function service_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-topmenu_services:node/1383.
  $menu_links['menu-topmenu_services:node/1383'] = array(
    'menu_name' => 'menu-topmenu',
    'link_path' => 'node/1383',
    'router_path' => 'node/%',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topmenu_services:node/1383',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Services');

  return $menu_links;
}
