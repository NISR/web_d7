<?php
/**
 * @file
 * service_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function service_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-services_apply-for-a-visa:application/add/visa.
  $menu_links['menu-services_apply-for-a-visa:application/add/visa'] = array(
    'menu_name' => 'menu-services',
    'link_path' => 'application/add/visa',
    'router_path' => 'application/add/visa',
    'link_title' => 'Apply for a Visa',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-services_apply-for-a-visa:application/add/visa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-services_request-an-internship:application/add/internship.
  $menu_links['menu-services_request-an-internship:application/add/internship'] = array(
    'menu_name' => 'menu-services',
    'link_path' => 'application/add/internship',
    'router_path' => 'application/add/internship',
    'link_title' => 'Request an Internship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-services_request-an-internship:application/add/internship',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-services_subscribe-to-receive-email-notification-alerts:profile.
  $menu_links['menu-services_subscribe-to-receive-email-notification-alerts:profile'] = array(
    'menu_name' => 'menu-services',
    'link_path' => 'profile',
    'router_path' => 'profile',
    'link_title' => 'Subscribe to receive email notification alerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-services_subscribe-to-receive-email-notification-alerts:profile',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Apply for a Visa');
  t('Request an Internship');
  t('Subscribe to receive email notification alerts');

  return $menu_links;
}
