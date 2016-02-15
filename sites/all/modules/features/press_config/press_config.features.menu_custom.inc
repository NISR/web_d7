<?php
/**
 * @file
 * press_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function press_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-press.
  $menus['menu-press'] = array(
    'menu_name' => 'menu-press',
    'title' => 'Press',
    'description' => 'Press contextual menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Press');
  t('Press contextual menu');

  return $menus;
}
