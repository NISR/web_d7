<?php
/**
 * @file
 * press_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function press_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_latest';
  $context->description = '';
  $context->tag = 'Press';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
        'story' => 'story',
      ),
      'options' => array(
        'node_form' => '0',
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
        'views-press-latest_news' => array(
          'module' => 'views',
          'delta' => 'press-latest_news',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Press');
  $export['press_latest'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_menu';
  $context->description = '';
  $context->tag = 'Press';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'press/*' => 'press/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-press' => array(
          'module' => 'menu',
          'delta' => 'menu-press',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Press');
  $export['press_menu'] = $context;

  return $export;
}
