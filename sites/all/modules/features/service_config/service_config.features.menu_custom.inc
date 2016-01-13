<?php
/**
 * @file
 * service_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function service_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-services.
  $menus['menu-services'] = array(
    'menu_name' => 'menu-services',
    'title' => 'Services',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Services');

  return $menus;
}
