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
  $context->name = 'datasource_types';
  $context->description = '';
  $context->tag = 'Datasources';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'datasources' => 'datasources',
        'data_sources' => 'data_sources',
        'data-sources' => 'data-sources',
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
        'datasource-datasource_types' => array(
          'module' => 'datasource',
          'delta' => 'datasource_types',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Datasources');
  $export['datasource_types'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_indicators';
  $context->description = 'Featured indicators shown on the frontpage';
  $context->tag = 'Data portals';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-32' => array(
          'module' => 'block',
          'delta' => '32',
          'region' => 'before_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Data portals');
  t('Featured indicators shown on the frontpage');
  $export['featured_indicators'] = $context;

  return $export;
}
