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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = 'google';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['title'] = 'Page views';
  $handler->display->display_options['style_options']['label_field'] = 'date';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'percentNewSessions' => 'percentNewSessions',
    'date' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'date' => '#2f7ed8',
    'percentNewSessions' => '#90bff0',
  );
  /* Field: Time: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['date']['custom_date_format'] = 'd M';
  $handler->display->display_options['fields']['date']['second_date_format'] = 'long';
  /* Field: User: % New Sessions */
  $handler->display->display_options['fields']['percentNewSessions']['id'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['percentNewSessions']['field'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['precision'] = '0';
  /* Sort criterion: Time: Date */
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

  /* Display: New session */
  $handler = $view->new_display('block', 'New session', 'new_session');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Time: Date */
  $handler->display->display_options['fields']['date']['id'] = 'date';
  $handler->display->display_options['fields']['date']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['date']['field'] = 'date';
  $handler->display->display_options['fields']['date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['date']['custom_date_format'] = 'd M';
  $handler->display->display_options['fields']['date']['second_date_format'] = 'long';
  /* Field: User: % New Sessions */
  $handler->display->display_options['fields']['percentNewSessions']['id'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['percentNewSessions']['field'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['precision'] = '0';
  $translatables['ga_reports'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Date'),
    t('% New Sessions'),
    t('.'),
    t(','),
    t('New session'),
  );
  $export['ga_reports'] = $view;

  return $export;
}
