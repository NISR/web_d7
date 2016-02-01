<?php
/**
 * @file
 * nisr_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nisr_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-follow-us_flickr-photo-galleries:https://www.flickr.com/photos/statisticsrw.
  $menu_links['menu-follow-us_flickr-photo-galleries:https://www.flickr.com/photos/statisticsrw'] = array(
    'menu_name' => 'menu-follow-us',
    'link_path' => 'https://www.flickr.com/photos/statisticsrw',
    'router_path' => '',
    'link_title' => 'Flickr photo galleries',
    'options' => array(
      'identifier' => 'menu-follow-us_flickr-photo-galleries:https://www.flickr.com/photos/statisticsrw',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-follow-us_twitter:https://twitter.com/statisticsRW.
  $menu_links['menu-follow-us_twitter:https://twitter.com/statisticsRW'] = array(
    'menu_name' => 'menu-follow-us',
    'link_path' => 'https://twitter.com/statisticsRW',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'identifier' => 'menu-follow-us_twitter:https://twitter.com/statisticsRW',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-profile-menu_login:login.
  $menu_links['menu-profile-menu_login:login'] = array(
    'menu_name' => 'menu-profile-menu',
    'link_path' => 'login',
    'router_path' => 'login',
    'link_title' => 'Login',
    'options' => array(
      'identifier' => 'menu-profile-menu_login:login',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
  );
  // Exported menu link: menu-profile-menu_logout:logout.
  $menu_links['menu-profile-menu_logout:logout'] = array(
    'menu_name' => 'menu-profile-menu',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Logout',
    'options' => array(
      'identifier' => 'menu-profile-menu_logout:logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Exported menu link: menu-profile-menu_my-profile:profile.
  $menu_links['menu-profile-menu_my-profile:profile'] = array(
    'menu_name' => 'menu-profile-menu',
    'link_path' => 'profile',
    'router_path' => 'profile',
    'link_title' => 'My profile',
    'options' => array(
      'identifier' => 'menu-profile-menu_my-profile:profile',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
  );
  // Exported menu link: menu-profile-menu_register:register.
  $menu_links['menu-profile-menu_register:register'] = array(
    'menu_name' => 'menu-profile-menu',
    'link_path' => 'register',
    'router_path' => 'register',
    'link_title' => 'Register',
    'options' => array(
      'identifier' => 'menu-profile-menu_register:register',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
  );
  // Exported menu link: menu-useful-links_ministry-of-finance-and-economic-planning:http://www.mineconfin.gov.rw.
  $menu_links['menu-useful-links_ministry-of-finance-and-economic-planning:http://www.mineconfin.gov.rw'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'http://www.mineconfin.gov.rw',
    'router_path' => '',
    'link_title' => 'Ministry of Finance and Economic Planning',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_ministry-of-finance-and-economic-planning:http://www.mineconfin.gov.rw',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_national-bank-of-rwanda:http://www.bnr.rw.
  $menu_links['menu-useful-links_national-bank-of-rwanda:http://www.bnr.rw'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'http://www.bnr.rw',
    'router_path' => '',
    'link_title' => 'National Bank of Rwanda',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_national-bank-of-rwanda:http://www.bnr.rw',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Flickr photo galleries');
  t('Login');
  t('Logout');
  t('Ministry of Finance and Economic Planning');
  t('My profile');
  t('National Bank of Rwanda');
  t('Register');
  t('Twitter');

  return $menu_links;
}
