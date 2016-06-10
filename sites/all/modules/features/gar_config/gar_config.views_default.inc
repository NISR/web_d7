<?php
/**
 * @file
 * gar_config.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gar_config_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ga_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Google Analytics reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access google analytics reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['title'] = 'Top visitors originating countries';
  $handler->display->display_options['style_options']['tooltips'] = 'TRUE';
  $handler->display->display_options['style_options']['label_field'] = 'country';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sessions' => 'sessions',
    'country' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'country' => '#2f7ed8',
    'sessions' => '#e6494b',
  );
  /* Field: Geo network dimensions: Country / Territory */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['label'] = '';
  $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  /* Sort criterion: Time dimensions: Date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['date']['field'] = 'date';
  /* Filter criterion: Google Analytics: Start date of report */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '-31 day';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = FALSE;
  /* Filter criterion: Google Analytics: End date of report */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['end_date']['group'] = 1;
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = FALSE;

  /* Display: Visits */
  $handler = $view->new_display('block', 'Visits', 'visits');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Page visits';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['title'] = 'Number of visits over the last seven days';
  $handler->display->display_options['style_options']['tooltips'] = 'TRUE';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '90';
  $handler->display->display_options['style_options']['label_field'] = 'date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sessions' => 'sessions',
    'date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'date' => '#2f7ed8',
    'sessions' => '#fecd67',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Time dimensions: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['date']['custom_date_format'] = 'd M';
  $handler->display->display_options['fields']['date']['second_date_format'] = 'long';
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['label'] = 'Visits';
  $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Google Analytics: Start date of report */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '-7 day';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = FALSE;
  /* Filter criterion: Google Analytics: End date of report */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['end_date']['group'] = 1;
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = FALSE;

  /* Display: Platforms */
  $handler = $view->new_display('block', 'Platforms', 'platform');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How people access statistics.gov.rw';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'deviceCategory',
      'rendered' => TRUE,
      'rendered_strip' => FALSE,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['title'] = 'Devices used for access over the last seven days';
  $handler->display->display_options['style_options']['tooltips'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'right';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '90';
  $handler->display->display_options['style_options']['label_field'] = 'date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'deviceCategory' => 'deviceCategory',
    'sessions' => 'sessions',
    'date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'date' => '#2f7ed8',
    'deviceCategory' => '#0d233a',
    'sessions' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Time dimensions: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['date']['custom_date_format'] = 'd M';
  $handler->display->display_options['fields']['date']['second_date_format'] = 'long';
  /* Field: Platform or device dimensions: Device Category */
  $handler->display->display_options['fields']['deviceCategory']['id'] = 'deviceCategory';
  $handler->display->display_options['fields']['deviceCategory']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['deviceCategory']['field'] = 'deviceCategory';
  $handler->display->display_options['fields']['deviceCategory']['label'] = '';
  $handler->display->display_options['fields']['deviceCategory']['element_label_colon'] = FALSE;
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Time dimensions: Date */
  $handler->display->display_options['sorts']['date']['id'] = 'date';
  $handler->display->display_options['sorts']['date']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['date']['field'] = 'date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Google Analytics: Start date of report */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['value']['value'] = '-7 days';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* Filter criterion: Google Analytics: End date of report */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['value']['value'] = '-1 day';
  $handler->display->display_options['filters']['end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['end_date']['group'] = 1;

  /* Display: Browsers */
  $handler = $view->new_display('block', 'Browsers', 'browser');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browsers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['title'] = 'Top web browsers in use';
  $handler->display->display_options['style_options']['tooltips'] = 'TRUE';
  $handler->display->display_options['style_options']['legend_position'] = 'bottom';
  $handler->display->display_options['style_options']['label_field'] = 'browser';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'sessions' => 'sessions',
    'browser' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'browser' => '#2f7ed8',
    'sessions' => '#0d233a',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Platform or device dimensions: Browser */
  $handler->display->display_options['fields']['browser']['id'] = 'browser';
  $handler->display->display_options['fields']['browser']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['browser']['field'] = 'browser';
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Session metrics: Sessions */
  $handler->display->display_options['sorts']['sessions']['id'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['sessions']['field'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Countries */
  $handler = $view->new_display('block', 'Countries', 'countries');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Geo network dimensions: Country / Territory */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['label'] = 'Visits';
  $handler->display->display_options['fields']['sessions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Session metrics: Sessions */
  $handler->display->display_options['sorts']['sessions']['id'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['sessions']['field'] = 'sessions';
  $handler->display->display_options['sorts']['sessions']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Page views */
  $handler = $view->new_display('embed', 'Page views', 'page_views');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Page tracking dimensions: Page */
  $handler->display->display_options['fields']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['fields']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['fields']['pagePath']['exclude'] = TRUE;
  /* Field: Page tracking metrics: Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'pageviews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'pageviews';
  $handler->display->display_options['fields']['pageviews']['label'] = 'Page views';
  $handler->display->display_options['fields']['pageviews']['precision'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Page tracking metrics: Pageviews */
  $handler->display->display_options['sorts']['pageviews']['id'] = 'pageviews';
  $handler->display->display_options['sorts']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['pageviews']['field'] = 'pageviews';
  $handler->display->display_options['sorts']['pageviews']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Page tracking dimensions: Page */
  $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['arguments']['pagePath']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'google_analytics_reports_path';
  $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $translatables['ga_reports'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t(','),
    t('Visits'),
    t('Page visits'),
    t('Date'),
    t('Platforms'),
    t('How people access statistics.gov.rw'),
    t('Sessions'),
    t('Browsers'),
    t('Browser'),
    t('Countries'),
    t('Page views'),
    t('Page'),
    t('All'),
  );
  $export['ga_reports'] = $view;

  return $export;
}
