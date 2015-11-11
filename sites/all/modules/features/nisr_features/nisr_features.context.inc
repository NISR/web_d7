<?php
/**
 * @file
 * nisr_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nisr_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-profile-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-profile-menu',
          'region' => 'header_top',
          'weight' => '-41',
        ),
        'menu-menu-topmenu' => array(
          'module' => 'menu',
          'delta' => 'menu-topmenu',
          'region' => 'header_top',
          'weight' => '-40',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'header_icons',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header_menu',
          'weight' => '-10',
        ),
        'menu-menu-about-us' => array(
          'module' => 'menu',
          'delta' => 'menu-about-us',
          'region' => 'footer_1',
          'weight' => '-10',
        ),
        'menu-menu-services' => array(
          'module' => 'menu',
          'delta' => 'menu-services',
          'region' => 'footer_2',
          'weight' => '-10',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'footer_3',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
