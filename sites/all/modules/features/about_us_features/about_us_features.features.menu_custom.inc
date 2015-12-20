<?php
/**
 * @file
 * about_us_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function about_us_features_menu_default_menu_custom() {
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
