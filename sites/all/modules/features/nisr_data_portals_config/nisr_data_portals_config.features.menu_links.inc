<?php
/**
 * @file
 * nisr_data_portals_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nisr_data_portals_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-data-portals_-go-to-the-civil-registration-and-vital-statistics-platform:http://crvs.statistics.gov.rw.
  $menu_links['menu-data-portals_-go-to-the-civil-registration-and-vital-statistics-platform:http://crvs.statistics.gov.rw'] = array(
    'menu_name' => 'menu-data-portals',
    'link_path' => 'http://crvs.statistics.gov.rw',
    'router_path' => '',
    'link_title' => '>> Go to the Civil Registration and Vital Statistics platform',
    'options' => array(
      'identifier' => 'menu-data-portals_-go-to-the-civil-registration-and-vital-statistics-platform:http://crvs.statistics.gov.rw',
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
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-data-portals_devinfo:http://www.devinfo.statistics.gov.rw/di7web/libraries/aspx/Home.aspx.
  $menu_links['menu-data-portals_devinfo:http://www.devinfo.statistics.gov.rw/di7web/libraries/aspx/Home.aspx'] = array(
    'menu_name' => 'menu-data-portals',
    'link_path' => 'http://www.devinfo.statistics.gov.rw/di7web/libraries/aspx/Home.aspx',
    'router_path' => '',
    'link_title' => 'DevInfo',
    'options' => array(
      'attributes' => array(
        'title' => 'The indicators database',
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-data-portals_devinfo:http://www.devinfo.statistics.gov.rw/di7web/libraries/aspx/Home.aspx',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-data-portals_geodata:http://geodata.nisr.opendata.arcgis.com/.
  $menu_links['menu-data-portals_geodata:http://geodata.nisr.opendata.arcgis.com/'] = array(
    'menu_name' => 'menu-data-portals',
    'link_path' => 'http://geodata.nisr.opendata.arcgis.com/',
    'router_path' => '',
    'link_title' => 'GeoData',
    'options' => array(
      'attributes' => array(
        'title' => 'The Geospatial database',
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-data-portals_geodata:http://geodata.nisr.opendata.arcgis.com/',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-data-portals_microdata:http://microdata.statistics.gov.rw.
  $menu_links['menu-data-portals_microdata:http://microdata.statistics.gov.rw'] = array(
    'menu_name' => 'menu-data-portals',
    'link_path' => 'http://microdata.statistics.gov.rw',
    'router_path' => '',
    'link_title' => 'Microdata',
    'options' => array(
      'attributes' => array(
        'title' => 'The NAtional Data Archive database',
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-data-portals_microdata:http://microdata.statistics.gov.rw',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('>> Go to the Civil Registration and Vital Statistics platform');
  t('DevInfo');
  t('GeoData');
  t('Microdata');

  return $menu_links;
}
