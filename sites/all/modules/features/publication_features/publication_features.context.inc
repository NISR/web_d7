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
  $context->name = 'standards_and_methods';
  $context->description = '';
  $context->tag = 'Documents';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'standards_and_methods' => 'standards_and_methods',
        'standards-and-methods' => 'standards-and-methods',
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
        'publication-standards_and_methods' => array(
          'module' => 'publication',
          'delta' => 'standards_and_methods',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  $export['standards_and_methods'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_publication_types';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistical_publications' => 'statistical_publications',
        'statistical-publications' => 'statistical-publications',
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
        'publication-statistical_publication_types' => array(
          'module' => 'publication',
          'delta' => 'statistical_publication_types',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['statistical_publication_types'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_publications_facets';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'publications_search' => 'publications_search',
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
          'weight' => '-9',
        ),
        'facetapi-TI4sFfxRmp2Yty6vEF6QDlCkDIpRNqDJ' => array(
          'module' => 'facetapi',
          'delta' => 'TI4sFfxRmp2Yty6vEF6QDlCkDIpRNqDJ',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['statistical_publications_facets'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_reports';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'publications_search' => 'publications_search',
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
          'weight' => '-9',
        ),
        'facetapi-TI4sFfxRmp2Yty6vEF6QDlCkDIpRNqDJ' => array(
          'module' => 'facetapi',
          'delta' => 'TI4sFfxRmp2Yty6vEF6QDlCkDIpRNqDJ',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'facetapi-XJuBAz0WMx58FOka1GAp3HIT9Ys4VLW3' => array(
          'module' => 'facetapi',
          'delta' => 'XJuBAz0WMx58FOka1GAp3HIT9Ys4VLW3',
          'region' => 'sidebar_left',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['statistical_reports'] = $context;

  return $export;
}
