<?php
/**
 * @file
 * datasource_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datasource_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'datasources';
  $context->description = '';
  $context->tag = 'facets';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'datasources' => 'datasources',
        'datasources/*' => 'datasources/*',
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
        'facetapi-oHYdYa0xcq7hKHFMnM9Bo515JSU3IgSe' => array(
          'module' => 'facetapi',
          'delta' => 'oHYdYa0xcq7hKHFMnM9Bo515JSU3IgSe',
          'region' => 'ds_idebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('facets');
  $export['datasources'] = $context;

  return $export;
}
