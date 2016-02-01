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

  // Exported menu: menu-follow-us.
  $menus['menu-follow-us'] = array(
    'menu_name' => 'menu-follow-us',
    'title' => 'Social Media',
    'description' => 'Social network links',
  );
  // Exported menu: menu-profile-menu.
  $menus['menu-profile-menu'] = array(
    'menu_name' => 'menu-profile-menu',
    'title' => 'Profile menu',
    'description' => 'Profile menu',
  );
  // Exported menu: menu-topmenu.
  $menus['menu-topmenu'] = array(
    'menu_name' => 'menu-topmenu',
    'title' => 'Top Menu',
    'description' => '',
  );
  // Exported menu: menu-useful-links.
  $menus['menu-useful-links'] = array(
    'menu_name' => 'menu-useful-links',
    'title' => 'Useful links',
    'description' => 'Links to external websites',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links to external websites');
  t('Profile menu');
  t('Social Media');
  t('Social network links');
  t('Top Menu');
  t('Useful links');

  return $menus;
}
