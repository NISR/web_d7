<?php
/**
 * @file
 * nisr_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nisr_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ad_banner'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'ad_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 10,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-copyright'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-creative_commons_credits'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'creative_commons_credits',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-google_calendar_widget'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'google_calendar_widget',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-gov_logo'] = array(
    'cache' => -1,
    'css_class' => 'pull-left',
    'custom' => 0,
    'machine_name' => 'gov_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-nsds_button'] = array(
    'cache' => -1,
    'css_class' => 'col-md-3 box-mini',
    'custom' => 0,
    'machine_name' => 'nsds_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-visa_button'] = array(
    'cache' => -1,
    'css_class' => 'col-md-3',
    'custom' => 0,
    'machine_name' => 'visa_button',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['calendar-calendar_legend'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar_legend',
    'module' => 'calendar',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-about-us'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-about-us',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-extra'] = array(
    'cache' => -1,
    'css_class' => 'horizontal-menu col-md-12',
    'custom' => 0,
    'delta' => 'menu-footer-extra',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-profile-menu'] = array(
    'cache' => -1,
    'css_class' => 'horizontal-menu pull-right profile-menu',
    'custom' => 0,
    'delta' => 'menu-profile-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-twitter_messages-tweets_block'] = array(
    'cache' => -1,
    'css_class' => 'col-md-12',
    'custom' => 0,
    'delta' => 'twitter_messages-tweets_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'porto_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'porto_sub',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
