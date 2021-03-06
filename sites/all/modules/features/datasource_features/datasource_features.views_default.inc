<?php
/**
 * @file
 * datasource_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datasource_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'datasource_widgets';
  $view->description = 'Widgets : latest, featured etc for datasource';
  $view->tag = 'default';
  $view->base_table = 'datasource';
  $view->human_name = 'Datasource widgets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view datasource entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_eq_datasource_entityqueue_subqueue']['id'] = 'reverse_eq_datasource_entityqueue_subqueue';
  $handler->display->display_options['relationships']['reverse_eq_datasource_entityqueue_subqueue']['table'] = 'datasource';
  $handler->display->display_options['relationships']['reverse_eq_datasource_entityqueue_subqueue']['field'] = 'reverse_eq_datasource_entityqueue_subqueue';
  /* Field: Datasource: Period */
  $handler->display->display_options['fields']['field_datasource_period']['id'] = 'field_datasource_period';
  $handler->display->display_options['fields']['field_datasource_period']['table'] = 'field_data_field_datasource_period';
  $handler->display->display_options['fields']['field_datasource_period']['field'] = 'field_datasource_period';
  $handler->display->display_options['fields']['field_datasource_period']['label'] = '';
  $handler->display->display_options['fields']['field_datasource_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datasource_period']['element_wrapper_class'] = 'uppercase';
  $handler->display->display_options['fields']['field_datasource_period']['settings'] = array(
    'format_type' => 'm_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Datasource: Datasource ID */
  $handler->display->display_options['fields']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['table'] = 'datasource';
  $handler->display->display_options['fields']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['label'] = '';
  $handler->display->display_options['fields']['ds_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ds_id']['element_label_colon'] = FALSE;
  /* Field: Datasource: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'datasource';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'datasource/[ds_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Entityqueue: Datasource Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'datasource';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';

  /* Display: Featured survey incidents */
  $handler = $view->new_display('block', 'Featured survey incidents', 'fsi');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured surveys';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Datasource: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'datasource';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'datasource_incidence' => 'datasource_incidence',
  );
  /* Filter criterion: Entityqueue: Datasource In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'datasource';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';
  $translatables['datasource_widgets'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Subqueue referencing Datasource from eq_datasource'),
    t('.'),
    t(','),
    t('Featured survey incidents'),
    t('Featured surveys'),
  );
  $export['datasource_widgets'] = $view;

  $view = new view();
  $view->name = 'datasources_backoffice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'datasource';
  $view->human_name = 'Datasources Backoffice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Datasources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer datasource entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'ds_id' => 'ds_id',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'changed' => 'changed',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ds_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
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
  $handler->display->display_options['empty']['area']['content'] = 'No datasource available';
  $handler->display->display_options['empty']['area']['format'] = '2';
  /* Relationship: Datasource: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'datasource';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Datasource */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'datasource';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Datasource: Datasource ID */
  $handler->display->display_options['fields']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['table'] = 'datasource';
  $handler->display->display_options['fields']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['exclude'] = TRUE;
  /* Field: Datasource: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'datasource';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'datasource/[ds_id]';
  /* Field: Datasource: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'datasource';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Datasource: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'datasource';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/datasource/[ds_id]/edit?destination=admin/content/datasources">Edit</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="/datasource/[ds_id]/delete?destination=admin/content/datasources">Delete</a>';
  /* Sort criterion: Datasource: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'datasource';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Datasource: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'datasource';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/datasources';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Datasources';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Metadata */
  $handler = $view->new_display('page', 'Metadata', 'metadata');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Datasource */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'datasource';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Datasource: Datasource ID */
  $handler->display->display_options['fields']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['table'] = 'datasource';
  $handler->display->display_options['fields']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['exclude'] = TRUE;
  /* Field: Datasource: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'datasource';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'datasource/[ds_id]';
  /* Field: Datasource: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'datasource';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Datasource: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'datasource';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/datasource/[ds_id]/edit?destination=admin/content/datasources/metadata">Edit</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="/datasource/[ds_id]/delete?destination=admin/content/datasources/metadata">Delete</a>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Datasource: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'datasource';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
  );
  /* Filter criterion: Datasource: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'datasource';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'datasource_metadata' => 'datasource_metadata',
  );
  $handler->display->display_options['path'] = 'admin/content/datasources/datasource_metadata';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Metadata';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Incidences */
  $handler = $view->new_display('page', 'Incidences', 'incidence');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Datasource: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'datasource';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
  );
  /* Filter criterion: Datasource: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'datasource';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'datasource_incidence' => 'datasource_incidence',
  );
  $handler->display->display_options['path'] = 'admin/content/datasources/datasource_incidences';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Incidences';
  $handler->display->display_options['menu']['weight'] = '-9';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['datasources_backoffice'] = array(
    t('Master'),
    t('Datasources'),
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
    t('No datasource available'),
    t('User'),
    t('- Choose an operation -'),
    t('Datasource ID'),
    t('.'),
    t(','),
    t('Title'),
    t('Type'),
    t('Author'),
    t('Date changed'),
    t('Operations'),
    t('<a href="/datasource/[ds_id]/edit?destination=admin/content/datasources">Edit</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="/datasource/[ds_id]/delete?destination=admin/content/datasources">Delete</a>'),
    t('Page'),
    t('Metadata'),
    t('Name'),
    t('<a href="/datasource/[ds_id]/edit?destination=admin/content/datasources/metadata">Edit</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="/datasource/[ds_id]/delete?destination=admin/content/datasources/metadata">Delete</a>'),
    t('Incidences'),
  );
  $export['datasources_backoffice'] = $view;

  $view = new view();
  $view->name = 'datasources_eva';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'datasource';
  $view->human_name = 'Datasources EVA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view datasource entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'ds_id' => 'ds_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'ds_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Datasource: Datasource ID */
  $handler->display->display_options['fields']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['table'] = 'datasource';
  $handler->display->display_options['fields']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['exclude'] = TRUE;
  /* Field: Datasource: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'datasource';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'datasource/[ds_id]';
  /* Field: Datasource: Period */
  $handler->display->display_options['fields']['field_datasource_period']['id'] = 'field_datasource_period';
  $handler->display->display_options['fields']['field_datasource_period']['table'] = 'field_data_field_datasource_period';
  $handler->display->display_options['fields']['field_datasource_period']['field'] = 'field_datasource_period';
  $handler->display->display_options['fields']['field_datasource_period']['settings'] = array(
    'format_type' => 'f_y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Datasource: Period - end date (field_datasource_period:value2) */
  $handler->display->display_options['sorts']['field_datasource_period_value2']['id'] = 'field_datasource_period_value2';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['table'] = 'field_data_field_datasource_period';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['field'] = 'field_datasource_period_value2';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['order'] = 'DESC';
  /* Sort criterion: Datasource: Period -  start date (field_datasource_period) */
  $handler->display->display_options['sorts']['field_datasource_period_value']['id'] = 'field_datasource_period_value';
  $handler->display->display_options['sorts']['field_datasource_period_value']['table'] = 'field_data_field_datasource_period';
  $handler->display->display_options['sorts']['field_datasource_period_value']['field'] = 'field_datasource_period_value';
  $handler->display->display_options['sorts']['field_datasource_period_value']['order'] = 'DESC';
  /* Contextual filter: Datasource: Datasource (field_datasource_parent) */
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['id'] = 'field_datasource_parent_target_id';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['table'] = 'field_data_field_datasource_parent';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['field'] = 'field_datasource_parent_target_id';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_datasource_parent_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Datasource: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'datasource';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'datasource_incidence' => 'datasource_incidence',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'datasource';
  $handler->display->display_options['bundles'] = array(
    0 => 'datasource_metadata',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['datasources_eva'] = array(
    t('Master'),
    t('History'),
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
    t('Datasource ID'),
    t('.'),
    t(','),
    t('Title'),
    t('Period'),
    t('All'),
    t('EVA Field'),
  );
  $export['datasources_eva'] = $view;

  $view = new view();
  $view->name = 'datasources_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_datasources';
  $view->human_name = 'Datasources search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view datasource entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Datasource: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_datasources';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Datasource: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_datasources';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Indexed Datasource: Type */
  $handler->display->display_options['arguments']['field_datasource_type']['id'] = 'field_datasource_type';
  $handler->display->display_options['arguments']['field_datasource_type']['table'] = 'search_api_index_datasources';
  $handler->display->display_options['arguments']['field_datasource_type']['field'] = 'field_datasource_type';
  $handler->display->display_options['arguments']['field_datasource_type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_datasource_type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_datasource_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_datasource_type']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_datasource_type']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_datasource_type']['validate_options']['vocabularies'] = array(
    'datasource_types' => 'datasource_types',
  );
  $handler->display->display_options['arguments']['field_datasource_type']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_datasource_type']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_datasource_type']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_datasource_type']['not'] = 0;

  /* Display: Metadata */
  $handler = $view->new_display('embed', 'Metadata', 'metadata');
  $translatables['datasources_search'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Metadata'),
  );
  $export['datasources_search'] = $view;

  return $export;
}
