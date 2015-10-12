<?php
/**
 * @file
 * publication_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function publication_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_reports';
  $context->description = '';
  $context->tag = 'facets';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'statistical_reports_search:page' => 'statistical_reports_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-cRQoQYSu6B187XwTFzii7wBlA06U9qbR' => array(
          'module' => 'facetapi',
          'delta' => 'cRQoQYSu6B187XwTFzii7wBlA06U9qbR',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('facets');
  $export['statistical_reports'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subjects';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/94' => 'node/94',
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
        'publication-subjects' => array(
          'module' => 'publication',
          'delta' => 'subjects',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['subjects'] = $context;

  return $export;
}
