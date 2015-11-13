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
  $context->name = 'featured_publications';
  $context->description = 'Featured publications shown on the frontpage';
  $context->tag = 'Publications';
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
        'publication-featured_statistical_reports' => array(
          'module' => 'publication',
          'delta' => 'featured_statistical_reports',
          'region' => 'content',
          'weight' => '-10',
        ),
        'publication-featured_statistical_articles' => array(
          'module' => 'publication',
          'delta' => 'featured_statistical_articles',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured publications shown on the frontpage');
  t('Publications');
  $export['featured_publications'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'featured_reports';
  $context->description = '';
  $context->tag = 'Frontpage';
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
        'views-2f0e2aad48cf3536d925485acbcb093b' => array(
          'module' => 'views',
          'delta' => '2f0e2aad48cf3536d925485acbcb093b',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  $export['featured_reports'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'standards_and_methods';
  $context->description = '';
  $context->tag = 'Documents';
  $context->conditions = array(
    'path' => array(
      'values' => array(
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
  $context->name = 'statistical_reports';
  $context->description = '';
  $context->tag = 'facets';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications/statistical_reports/*' => 'publications/statistical_reports/*',
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
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('facets');
  $export['statistical_reports'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subjects';
  $context->description = '';
  $context->tag = 'Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'statistical_publications' => 'statistical_publications',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Publications');
  $export['subjects'] = $context;

  return $export;
}
