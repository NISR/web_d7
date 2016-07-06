<?php
/**
 * @file
 * nisr_data_portals_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nisr_data_portals_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-data-portals.
  $menus['menu-data-portals'] = array(
    'menu_name' => 'menu-data-portals',
    'title' => 'Data portals',
    'description' => 'The data portals menu on top of the site',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Data portals');
  t('The data portals menu on top of the site');

  return $menus;
}
