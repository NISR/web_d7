<?php
/**
 * @file
 * nisr_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nisr_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us_first_level';
  $context->description = '';
  $context->tag = 'About us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
        'about-us/*' => 'about-us/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  $export['about_us_first_level'] = $context;

  return $export;
}
