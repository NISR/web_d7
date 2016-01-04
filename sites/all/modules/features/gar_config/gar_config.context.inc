<?php
/**
 * @file
 * gar_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gar_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'analytics';
  $context->description = '';
  $context->tag = 'About us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us/analytics' => 'about-us/analytics',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ga_reports-visits' => array(
          'module' => 'views',
          'delta' => 'ga_reports-visits',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-ga_reports-platform' => array(
          'module' => 'views',
          'delta' => 'ga_reports-platform',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-ga_reports-browser' => array(
          'module' => 'views',
          'delta' => 'ga_reports-browser',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  $export['analytics'] = $context;

  return $export;
}
