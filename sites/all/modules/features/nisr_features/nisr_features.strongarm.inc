<?php
/**
 * @file
 * nisr_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nisr_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'charts_settings';
  $strongarm->value = array(
    '#plugin' => 'gd_image_chart',
    '#type' => 'line2D',
    '#width' => '400',
    '#height' => '200',
    '#label' => 0,
    '#legend' => 0,
    '#color' => array(
      'background' => '#ffffff',
      'text' => '#000000',
      0 => '#ff0000',
      1 => '#00cc00',
      2 => '#0066b3',
      3 => '#ff8000',
      4 => '#ffcc00',
      5 => '#330099',
      6 => '#990099',
      7 => '#ccff00',
    ),
  );
  $export['charts_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = '.chosen-enable';
  $export['chosen_jquery_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'none';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = 'default';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_articles_subjects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_articles_subjects_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_countries_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_countries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_profile_occupation_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_profile_occupation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocabulary_3_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocabulary_3_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'porto_sub';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_porto_sub_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/images/logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumbs' => 1,
    'sticky_header' => 1,
    'logo_height' => '150',
    'sticky_logo_height' => '100',
    'blog_image' => 'full',
    'blog_image_slider' => 1,
    'blog_share' => 1,
    'skin_color' => '0088cc',
    'secondary_color' => 'E36159',
    'tertiary_color' => '2BAAB1',
    'quaternary_color' => '383f48',
    'background_color' => 'light',
    'site_layout' => 'wide',
    'body_background' => 'porto_backgrounds',
    'background_select' => 'blizzard',
    'body_background_color' => 'CCCCCC',
    'portfolio_columns' => 'col-md-3',
    'user_css' => '',
    'ribbon' => 0,
    'ribbon_text' => 'Get In Touch',
    'options__active_tab' => 'edit-general',
  );
  $export['theme_porto_sub_settings'] = $strongarm;

  return $export;
}
