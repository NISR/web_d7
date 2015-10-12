<?php
/**
 * @file
 * survey_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function survey_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'surveys_landing_page';
  $context->description = '';
  $context->tag = 'facets';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/95' => 'node/95',
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
        'views-surveys-block_1' => array(
          'module' => 'views',
          'delta' => 'surveys-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'facetapi-IZsmkJVaFnJe8ou6q2GCH1qAZyGbb50I' => array(
          'module' => 'facetapi',
          'delta' => 'IZsmkJVaFnJe8ou6q2GCH1qAZyGbb50I',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-YMFcmBc0QTDWuRO6rwnrXjKwuvBEdB01' => array(
          'module' => 'facetapi',
          'delta' => 'YMFcmBc0QTDWuRO6rwnrXjKwuvBEdB01',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-wMDP1Jz9aiFdbU8V2oIHxvBL51clnbsB' => array(
          'module' => 'facetapi',
          'delta' => 'wMDP1Jz9aiFdbU8V2oIHxvBL51clnbsB',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('facets');
  $export['surveys_landing_page'] = $context;

  return $export;
}
