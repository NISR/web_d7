<?php
/**
 * @file
 * notice_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function notice_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-notices_jobs:node/1396.
  $menu_links['menu-notices_jobs:node/1396'] = array(
    'menu_name' => 'menu-notices',
    'link_path' => 'node/1396',
    'router_path' => 'node/%',
    'link_title' => 'Jobs',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-notices_jobs:node/1396',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-notices_tenders:node/1397.
  $menu_links['menu-notices_tenders:node/1397'] = array(
    'menu_name' => 'menu-notices',
    'link_path' => 'node/1397',
    'router_path' => 'node/%',
    'link_title' => 'Tenders',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-notices_tenders:node/1397',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-topmenu_jobs:node/1396.
  $menu_links['menu-topmenu_jobs:node/1396'] = array(
    'menu_name' => 'menu-topmenu',
    'link_path' => 'node/1396',
    'router_path' => 'node/%',
    'link_title' => 'Jobs',
    'options' => array(
      'identifier' => 'menu-topmenu_jobs:node/1396',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-item-hide-mobile',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-topmenu_tenders:node/1397.
  $menu_links['menu-topmenu_tenders:node/1397'] = array(
    'menu_name' => 'menu-topmenu',
    'link_path' => 'node/1397',
    'router_path' => 'node/%',
    'link_title' => 'Tenders',
    'options' => array(
      'identifier' => 'menu-topmenu_tenders:node/1397',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'menu-item-hide-mobile',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Jobs');
  t('Tenders');

  return $menu_links;
}
