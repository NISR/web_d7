<?php
/**
 * @file
 * notice_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function notice_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jobs';
  $context->description = '';
  $context->tag = 'Notices';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'jobs' => 'jobs',
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
        'views-notices_search-jobs' => array(
          'module' => 'views',
          'delta' => 'notices_search-jobs',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Notices');
  $export['jobs'] = $context;

  return $export;
}
