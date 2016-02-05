<?php
/**
 * @file
 * nisr_about_us_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nisr_about_us_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-us.
  $menus['menu-about-us'] = array(
    'menu_name' => 'menu-about-us',
    'title' => 'About us',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');

  return $menus;
}
