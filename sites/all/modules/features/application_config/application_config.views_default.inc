<?php
/**
 * @file
 * application_config.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function application_config_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'application';
  $view->human_name = 'Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Messages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create application entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No messages';
  $handler->display->display_options['empty']['area']['format'] = '4';
  /* Relationship: Application: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'application';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_app_instance_target_id']['id'] = 'field_app_instance_target_id';
  $handler->display->display_options['relationships']['field_app_instance_target_id']['table'] = 'field_data_field_app_instance';
  $handler->display->display_options['relationships']['field_app_instance_target_id']['field'] = 'field_app_instance_target_id';
  /* Field: Application: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'application';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[name] wrote on [created]</strong>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Application: Message */
  $handler->display->display_options['fields']['field_app_message']['id'] = 'field_app_message';
  $handler->display->display_options['fields']['field_app_message']['table'] = 'field_data_field_app_message';
  $handler->display->display_options['fields']['field_app_message']['field'] = 'field_app_message';
  $handler->display->display_options['fields']['field_app_message']['label'] = '';
  $handler->display->display_options['fields']['field_app_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_app_message']['alter']['text'] = '[field_app_message]
<br><br>';
  $handler->display->display_options['fields']['field_app_message']['element_label_colon'] = FALSE;
  /* Sort criterion: Application: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'application';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Application: Application ID */
  $handler->display->display_options['arguments']['aid']['id'] = 'aid';
  $handler->display->display_options['arguments']['aid']['table'] = 'application';
  $handler->display->display_options['arguments']['aid']['field'] = 'aid';
  $handler->display->display_options['arguments']['aid']['relationship'] = 'field_app_instance_target_id';
  $handler->display->display_options['arguments']['aid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['aid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['aid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['aid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Application: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'application';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'message' => 'message',
  );

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'messages');
  $translatables['messages'] = array(
    t('Master'),
    t('Messages'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No messages'),
    t('User'),
    t('Application entity referenced from field_app_instance'),
    t('<strong>[name] wrote on [created]</strong>'),
    t('[field_app_message]
<br><br>'),
    t('All'),
    t('Embed'),
  );
  $export['messages'] = $view;

  $view = new view();
  $view->name = 'visa_backoffice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'application';
  $view->human_name = 'Visa Backoffice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Visa management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer application entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No visa requests';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Field: Application: Application ID */
  $handler->display->display_options['fields']['aid']['id'] = 'aid';
  $handler->display->display_options['fields']['aid']['table'] = 'application';
  $handler->display->display_options['fields']['aid']['field'] = 'aid';
  /* Sort criterion: Application: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'application';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Application: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'application';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'visa' => 'visa',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/visa';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Visa management';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['visa_backoffice'] = array(
    t('Master'),
    t('Visa management'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No visa requests'),
    t('Application ID'),
    t('.'),
    t(','),
    t('Page'),
  );
  $export['visa_backoffice'] = $view;

  return $export;
}
