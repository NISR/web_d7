<?php
/**
 * @file
 * nisr_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nisr_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = '';
  $context->tag = 'About us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
        'about-us/*' => 'about-us/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-about-us' => array(
          'module' => 'menu',
          'delta' => 'menu-about-us',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage_content';
  $context->description = '';
  $context->tag = 'Front page';
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
        'nodesinblock-0' => array(
          'module' => 'nodesinblock',
          'delta' => '0',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'views-publication_widgets-fi' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-fi',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'views-publication_widgets-new' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-new',
          'region' => 'before_content',
          'weight' => '-7',
        ),
        'views-publication_widgets-fsr' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-fsr',
          'region' => 'before_content',
          'weight' => '-6',
        ),
        'views-datasource_widgets-fsi' => array(
          'module' => 'views',
          'delta' => 'datasource_widgets-fsi',
          'region' => 'before_content',
          'weight' => '-5',
        ),
        'gcal_events-gcal_events-0' => array(
          'module' => 'gcal_events',
          'delta' => 'gcal_events-0',
          'region' => 'before_content',
          'weight' => '-4',
        ),
        'views-publication_widgets-fsa' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-fsa',
          'region' => 'after_content',
          'weight' => '-48',
        ),
        'views-news-latest_news' => array(
          'module' => 'views',
          'delta' => 'news-latest_news',
          'region' => 'after_content',
          'weight' => '-47',
        ),
        'nodesinblock-1' => array(
          'module' => 'nodesinblock',
          'delta' => '1',
          'region' => 'after_content',
          'weight' => '-46',
        ),
        'views-twitter_messages-tweets_block' => array(
          'module' => 'views',
          'delta' => 'twitter_messages-tweets_block',
          'region' => 'after_content',
          'weight' => '-45',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page');
  $export['frontpage_content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~search/*' => '~search/*',
        '~user/*' => '~user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nisr-custom_search' => array(
          'module' => 'nisr',
          'delta' => 'custom_search',
          'region' => 'before_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-topmenu' => array(
          'module' => 'menu',
          'delta' => 'menu-topmenu',
          'region' => 'header_top',
          'weight' => '-40',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header_menu',
          'weight' => '-10',
        ),
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'footer_1',
          'weight' => '-10',
        ),
        'menu-menu-services' => array(
          'module' => 'menu',
          'delta' => 'menu-services',
          'region' => 'footer_2',
          'weight' => '-10',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'footer_3',
          'weight' => '-10',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'footer_4',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
