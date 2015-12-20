<?php
/**
 * @file
 * nisr_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nisr_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-topmenu.
  $menus['menu-topmenu'] = array(
    'menu_name' => 'menu-topmenu',
    'title' => 'Top Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Top Menu');

  return $menus;
}
