<?php
/**
 * @file
 * notice_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function notice_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-notices.
  $menus['menu-notices'] = array(
    'menu_name' => 'menu-notices',
    'title' => 'Notices',
    'description' => 'Notices contextual menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Notices');
  t('Notices contextual menu');

  return $menus;
}
