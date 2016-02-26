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
        '~about-us/organizational-structure' => '~about-us/organizational-structure',
        '~about-us/organizational-structure/*' => '~about-us/organizational-structure/*',
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
        'views-publication_widgets-fsa' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-fsa',
          'region' => 'before_content',
          'weight' => '-9',
        ),
        'views-press-featured_news' => array(
          'module' => 'views',
          'delta' => 'press-featured_news',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'views-publication_widgets-new' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-new',
          'region' => 'after_content',
          'weight' => '-52',
        ),
        'views-publication_widgets-fsr' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-fsr',
          'region' => 'after_content',
          'weight' => '-51',
        ),
        'views-datasource_widgets-fsi' => array(
          'module' => 'views',
          'delta' => 'datasource_widgets-fsi',
          'region' => 'after_content',
          'weight' => '-50',
        ),
        'gcal_events-gcal_events-0' => array(
          'module' => 'gcal_events',
          'delta' => 'gcal_events-0',
          'region' => 'after_content',
          'weight' => '-49',
        ),
        'views-publication_widgets-fi' => array(
          'module' => 'views',
          'delta' => 'publication_widgets-fi',
          'region' => 'after_content',
          'weight' => '-48',
        ),
        'views-twitter_messages-tweets_block' => array(
          'module' => 'views',
          'delta' => 'twitter_messages-tweets_block',
          'region' => 'after_content',
          'weight' => '-46',
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
          'weight' => '-57',
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
          'weight' => '-10',
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
          'weight' => '-9',
        ),
        'menu-menu-press' => array(
          'module' => 'menu',
          'delta' => 'menu-press',
          'region' => 'footer_3',
          'weight' => '-10',
        ),
        'menu-menu-notices' => array(
          'module' => 'menu',
          'delta' => 'menu-notices',
          'region' => 'footer_3',
          'weight' => '-9',
        ),
        'menu-menu-follow-us' => array(
          'module' => 'menu',
          'delta' => 'menu-follow-us',
          'region' => 'footer_4',
          'weight' => '-10',
        ),
        'nisr-last_update_date' => array(
          'module' => 'nisr',
          'delta' => 'last_update_date',
          'region' => 'footer_bottom_left',
          'weight' => '-54',
        ),
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'footer_bottom_left',
          'weight' => '-53',
        ),
        'block-40' => array(
          'module' => 'block',
          'delta' => '40',
          'region' => 'footer_bottom_left',
          'weight' => '-52',
        ),
        'menu-menu-useful-links' => array(
          'module' => 'menu',
          'delta' => 'menu-useful-links',
          'region' => 'footer_bottom_left',
          'weight' => '-51',
        ),
        'menu-menu-footer-extra' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-extra',
          'region' => 'footer_bottom_right',
          'weight' => '-9',
        ),
        'block-39' => array(
          'module' => 'block',
          'delta' => '39',
          'region' => 'footer_bottom_right',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_authenticated';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['sitewide_authenticated'] = $context;

  return $export;
}
