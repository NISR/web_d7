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
  $context->tag = 'Documentation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'documentation/standards-and-methods' => 'documentation/standards-and-methods',
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
  t('Documentation');
  $export['standards_and_methods'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_publication_subjects';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
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
        'publication-statistical_publication_subjects' => array(
          'module' => 'publication',
          'delta' => 'statistical_publication_subjects',
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
  $export['statistical_publication_subjects'] = $context;

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
  $context->name = 'statistical_publications_menu';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistical-publications/*' => 'statistical-publications/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:node/1374',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['statistical_publications_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_publications_others_facets';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'publications_search:infographic_items' => 'publications_search:infographic_items',
        'publications_search:statistical_articles' => 'publications_search:statistical_articles',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-XJuBAz0WMx58FOka1GAp3HIT9Ys4VLW3' => array(
          'module' => 'facetapi',
          'delta' => 'XJuBAz0WMx58FOka1GAp3HIT9Ys4VLW3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-81Xlmsat0wn41OsarkABHngz2HrLd1ZG' => array(
          'module' => 'facetapi',
          'delta' => '81Xlmsat0wn41OsarkABHngz2HrLd1ZG',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
        'facetapi-16HazlL9C05hXRRRjyJZws0kyhUsuYAU' => array(
          'module' => 'facetapi',
          'delta' => '16HazlL9C05hXRRRjyJZws0kyhUsuYAU',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['statistical_publications_others_facets'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistical_publications_sp_facets';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'publications_search:statistical_reports' => 'publications_search:statistical_reports',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-XJuBAz0WMx58FOka1GAp3HIT9Ys4VLW3' => array(
          'module' => 'facetapi',
          'delta' => 'XJuBAz0WMx58FOka1GAp3HIT9Ys4VLW3',
          'region' => 'content',
          'weight' => '-10',
        ),
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
          'weight' => '-9',
        ),
        'facetapi-16HazlL9C05hXRRRjyJZws0kyhUsuYAU' => array(
          'module' => 'facetapi',
          'delta' => '16HazlL9C05hXRRRjyJZws0kyhUsuYAU',
          'region' => 'sidebar_left',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['statistical_publications_sp_facets'] = $context;

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
