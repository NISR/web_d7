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

  // Exported menu link: menu-press_news-and-events:press/news.
  $menu_links['menu-press_news-and-events:press/news'] = array(
    'menu_name' => 'menu-press',
    'link_path' => 'press/news',
    'router_path' => 'press/news',
    'link_title' => 'News and events',
    'options' => array(
      'identifier' => 'menu-press_news-and-events:press/news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-press_press-releases:press/press-releases.
  $menu_links['menu-press_press-releases:press/press-releases'] = array(
    'menu_name' => 'menu-press',
    'link_path' => 'press/press-releases',
    'router_path' => 'press/press-releases',
    'link_title' => 'Press releases',
    'options' => array(
      'identifier' => 'menu-press_press-releases:press/press-releases',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-topmenu_press:press/news.
  $menu_links['menu-topmenu_press:press/news'] = array(
    'menu_name' => 'menu-topmenu',
    'link_path' => 'press/news',
    'router_path' => 'press/news',
    'link_title' => 'Press',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-topmenu_press:press/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('News and events');
  t('Press');
  t('Press releases');

  return $menu_links;
}
