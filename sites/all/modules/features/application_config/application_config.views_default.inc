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
  $view->name = 'visa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'application';
  $view->human_name = 'Visa';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Visa';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own application entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'aid' => 'aid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'aid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="pull-right">
  <a class="btn btn-sm btn-success" href="/application/add/visa"><i class="fa fa-plus"></i> Submit another visa application</a>
</div>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not yet apply for a visa yet, apply <a href="/application/add/visa">here</a>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Relationship: Application: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'application';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Application: Organization information (field_visa_organization) */
  $handler->display->display_options['relationships']['field_visa_organization_value']['id'] = 'field_visa_organization_value';
  $handler->display->display_options['relationships']['field_visa_organization_value']['table'] = 'field_data_field_visa_organization';
  $handler->display->display_options['relationships']['field_visa_organization_value']['field'] = 'field_visa_organization_value';
  $handler->display->display_options['relationships']['field_visa_organization_value']['delta'] = '-1';
  /* Field: Application: Application ID */
  $handler->display->display_options['fields']['aid']['id'] = 'aid';
  $handler->display->display_options['fields']['aid']['table'] = 'application';
  $handler->display->display_options['fields']['aid']['field'] = 'aid';
  $handler->display->display_options['fields']['aid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['aid']['separator'] = '';
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_visa_org_name']['id'] = 'field_visa_org_name';
  $handler->display->display_options['fields']['field_visa_org_name']['table'] = 'field_data_field_visa_org_name';
  $handler->display->display_options['fields']['field_visa_org_name']['field'] = 'field_visa_org_name';
  $handler->display->display_options['fields']['field_visa_org_name']['relationship'] = 'field_visa_organization_value';
  $handler->display->display_options['fields']['field_visa_org_name']['label'] = 'Organization';
  /* Field: Application: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'application';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Application: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'application';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = ' d F Y H:i ';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/application/[aid]">View</a>&nbsp;&nbsp;
<a href="/application/[aid]/edit">Edit</a>';
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
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');
  $translatables['visa'] = array(
    t('Master'),
    t('Visa'),
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
    t('<div class="pull-right">
  <a class="btn btn-sm btn-success" href="/application/add/visa"><i class="fa fa-plus"></i> Submit another visa application</a>
</div>'),
    t('You have not yet apply for a visa yet, apply <a href="/application/add/visa">here</a>'),
    t('User'),
    t('field collection item from field_visa_organization'),
    t('Application ID'),
    t('.'),
    t('Organization'),
    t('Created'),
    t('Updated'),
    t('Operations'),
    t('<a href="/application/[aid]">View</a>&nbsp;&nbsp;
<a href="/application/[aid]/edit">Edit</a>'),
    t('Embed'),
  );
  $export['visa'] = $view;

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
  $handler->display->display_options['title'] = 'Visa';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer application entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'aid' => 'aid',
    'field_visa_org_name' => 'field_visa_org_name',
    'field_visa_status' => 'field_visa_status',
    'created' => 'created',
    'changed' => 'changed',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'aid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visa_org_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visa_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'The search yielded no result';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Relationship: Application: Organization information (field_visa_organization) */
  $handler->display->display_options['relationships']['field_visa_organization_value']['id'] = 'field_visa_organization_value';
  $handler->display->display_options['relationships']['field_visa_organization_value']['table'] = 'field_data_field_visa_organization';
  $handler->display->display_options['relationships']['field_visa_organization_value']['field'] = 'field_visa_organization_value';
  $handler->display->display_options['relationships']['field_visa_organization_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_visa_organization_value']['delta'] = '-1';
  /* Field: Application: Application ID */
  $handler->display->display_options['fields']['aid']['id'] = 'aid';
  $handler->display->display_options['fields']['aid']['table'] = 'application';
  $handler->display->display_options['fields']['aid']['field'] = 'aid';
  $handler->display->display_options['fields']['aid']['exclude'] = TRUE;
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_visa_org_name']['id'] = 'field_visa_org_name';
  $handler->display->display_options['fields']['field_visa_org_name']['table'] = 'field_data_field_visa_org_name';
  $handler->display->display_options['fields']['field_visa_org_name']['field'] = 'field_visa_org_name';
  $handler->display->display_options['fields']['field_visa_org_name']['relationship'] = 'field_visa_organization_value';
  $handler->display->display_options['fields']['field_visa_org_name']['label'] = 'Organization';
  /* Field: Application: Status */
  $handler->display->display_options['fields']['field_visa_status']['id'] = 'field_visa_status';
  $handler->display->display_options['fields']['field_visa_status']['table'] = 'field_data_field_visa_status';
  $handler->display->display_options['fields']['field_visa_status']['field'] = 'field_visa_status';
  $handler->display->display_options['fields']['field_visa_status']['label'] = 'Request status';
  /* Field: Application: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'application';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Application: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'application';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd F Y H:i';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/application/[aid]">View</a>&nbsp; | &nbsp;
<a href="/application/[aid]/edit">Edit</a>';
  /* Sort criterion: Application: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'application';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Application: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'application';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'visa' => 'visa',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Name (field_visa_org_name:format) */
  $handler->display->display_options['filters']['field_visa_org_name_format']['id'] = 'field_visa_org_name_format';
  $handler->display->display_options['filters']['field_visa_org_name_format']['table'] = 'field_data_field_visa_org_name';
  $handler->display->display_options['filters']['field_visa_org_name_format']['field'] = 'field_visa_org_name_format';
  $handler->display->display_options['filters']['field_visa_org_name_format']['relationship'] = 'field_visa_organization_value';
  $handler->display->display_options['filters']['field_visa_org_name_format']['operator'] = 'word';
  $handler->display->display_options['filters']['field_visa_org_name_format']['group'] = 1;
  $handler->display->display_options['filters']['field_visa_org_name_format']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_visa_org_name_format']['expose']['operator_id'] = 'field_visa_org_name_format_op';
  $handler->display->display_options['filters']['field_visa_org_name_format']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_visa_org_name_format']['expose']['operator'] = 'field_visa_org_name_format_op';
  $handler->display->display_options['filters']['field_visa_org_name_format']['expose']['identifier'] = 'field_visa_org_name_format';
  $handler->display->display_options['filters']['field_visa_org_name_format']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Application: Status (field_visa_status) */
  $handler->display->display_options['filters']['field_visa_status_value']['id'] = 'field_visa_status_value';
  $handler->display->display_options['filters']['field_visa_status_value']['table'] = 'field_data_field_visa_status';
  $handler->display->display_options['filters']['field_visa_status_value']['field'] = 'field_visa_status_value';
  $handler->display->display_options['filters']['field_visa_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_visa_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_visa_status_value']['expose']['operator_id'] = 'field_visa_status_value_op';
  $handler->display->display_options['filters']['field_visa_status_value']['expose']['label'] = 'Request status';
  $handler->display->display_options['filters']['field_visa_status_value']['expose']['operator'] = 'field_visa_status_value_op';
  $handler->display->display_options['filters']['field_visa_status_value']['expose']['identifier'] = 'field_visa_status_value';
  $handler->display->display_options['filters']['field_visa_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/services/visa';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Visa';
  $handler->display->display_options['menu']['description'] = 'Visa management';
  $handler->display->display_options['menu']['weight'] = '-50';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['visa_backoffice'] = array(
    t('Master'),
    t('Visa'),
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
    t('The search yielded no result'),
    t('field collection item from field_visa_organization'),
    t('Application ID'),
    t('.'),
    t(','),
    t('Organization'),
    t('Request status'),
    t('Created'),
    t('Updated'),
    t('Operations'),
    t('<a href="/application/[aid]">View</a>&nbsp; | &nbsp;
<a href="/application/[aid]/edit">Edit</a>'),
    t('Page'),
  );
  $export['visa_backoffice'] = $view;

  return $export;
}
