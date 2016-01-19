<?php
/**
 * @file
 * press_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function press_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about-us_press:press/news.
  $menu_links['menu-about-us_press:press/news'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'press/news',
    'router_path' => 'press/news',
    'link_title' => 'Press',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-us_press:press/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Press');

  return $menu_links;
}
