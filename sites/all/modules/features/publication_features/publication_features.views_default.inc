<?php
/**
 * @file
 * publication_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function publication_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'publication';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view publication entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'title_only';
  /* Field: Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'publication';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  /* Sort criterion: Publication: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'publication';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Publication: Subject (field_pub_subject) */
  $handler->display->display_options['arguments']['field_pub_subject_tid']['id'] = 'field_pub_subject_tid';
  $handler->display->display_options['arguments']['field_pub_subject_tid']['table'] = 'field_data_field_pub_subject';
  $handler->display->display_options['arguments']['field_pub_subject_tid']['field'] = 'field_pub_subject_tid';
  $handler->display->display_options['arguments']['field_pub_subject_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_subject_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_subject_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_subject_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Latest reports minimal */
  $handler = $view->new_display('embed', 'Latest reports minimal', 'latest_reports_minimal');
  $handler->display->display_options['display_description'] = 'Last 4 statistical reports by title only';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'title_cover';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No report available';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_source_target_id']['id'] = 'field_pub_source_target_id';
  $handler->display->display_options['relationships']['field_pub_source_target_id']['table'] = 'field_data_field_pub_source';
  $handler->display->display_options['relationships']['field_pub_source_target_id']['field'] = 'field_pub_source_target_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Survey: Period - end date (field_survey_period:value2) */
  $handler->display->display_options['sorts']['field_survey_period_value2']['id'] = 'field_survey_period_value2';
  $handler->display->display_options['sorts']['field_survey_period_value2']['table'] = 'field_data_field_survey_period';
  $handler->display->display_options['sorts']['field_survey_period_value2']['field'] = 'field_survey_period_value2';
  $handler->display->display_options['sorts']['field_survey_period_value2']['relationship'] = 'field_pub_source_target_id';
  $handler->display->display_options['sorts']['field_survey_period_value2']['order'] = 'DESC';
  /* Sort criterion: Publication: Period -  start date (field_pub_period) */
  $handler->display->display_options['sorts']['field_pub_period_value']['id'] = 'field_pub_period_value';
  $handler->display->display_options['sorts']['field_pub_period_value']['table'] = 'field_data_field_pub_period';
  $handler->display->display_options['sorts']['field_pub_period_value']['field'] = 'field_pub_period_value';
  $handler->display->display_options['sorts']['field_pub_period_value']['order'] = 'DESC';
  /* Sort criterion: Publication: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'publication';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );

  /* Display: Latest articles minimal */
  $handler = $view->new_display('embed', 'Latest articles minimal', 'latest_articles_minimal');
  $handler->display->display_options['display_description'] = 'Last 4 articles by title only';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'title_only';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No article available';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Publication: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'publication';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Reports */
  $handler = $view->new_display('page', 'Reports', 'reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistical reports';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'title_cover';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );
  $handler->display->display_options['path'] = 'publications/%/reports';
  $export['publications'] = $view;

  $view = new view();
  $view->name = 'publications_backoffice';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'publication';
  $view->human_name = 'Publications Backoffice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer publication entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pub_id' => 'pub_id',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pub_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
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
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' <ul class="action-links"><li><a href="/?q=publication/add">Add publication</a></li></ul>      ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no publication to show';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Publication: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'publication';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Publication */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'publication';
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
  /* Field: Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'publication';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['label'] = '';
  $handler->display->display_options['fields']['pub_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pub_id']['element_label_colon'] = FALSE;
  /* Field: Publication: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'publication';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'publication/[pub_id]';
  /* Field: Publication: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'publication';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Publication type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Publication: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'publication';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/publication/[pub_id]/edit?destination=admin/content/publications">Edit</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="/publication/[pub_id]/delete?destination=admin/content/publications">Delete</a>';
  /* Sort criterion: Publication: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'publication';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Publication type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/publications';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['publications_backoffice'] = $view;

  $view = new view();
  $view->name = 'publications_eva';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'publication';
  $view->human_name = 'Publications EVA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view publication entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'title_cover';
  /* Field: Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'publication';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );

  /* Display: Survey */
  $handler = $view->new_display('entity_view', 'Survey', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'survey';
  $handler->display->display_options['bundles'] = array(
    0 => 'survey_incidence',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['publications_eva'] = $view;

  $view = new view();
  $view->name = 'statistical_reports_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_statistical_reports';
  $view->human_name = 'Statistical reports search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Statistical reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view publication entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'title_cover';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Not Available</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'search_api_index_statistical_reports';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  /* Sort criterion: Indexed Publication: Period */
  $handler->display->display_options['sorts']['period']['id'] = 'period';
  $handler->display->display_options['sorts']['period']['table'] = 'search_api_index_statistical_reports';
  $handler->display->display_options['sorts']['period']['field'] = 'period';
  $handler->display->display_options['sorts']['period']['order'] = 'DESC';
  /* Contextual filter: Indexed Publication: Subject */
  $handler->display->display_options['arguments']['field_pub_subject']['id'] = 'field_pub_subject';
  $handler->display->display_options['arguments']['field_pub_subject']['table'] = 'search_api_index_statistical_reports';
  $handler->display->display_options['arguments']['field_pub_subject']['field'] = 'field_pub_subject';
  $handler->display->display_options['arguments']['field_pub_subject']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_pub_subject']['title'] = '%1';
  $handler->display->display_options['arguments']['field_pub_subject']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_subject']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_subject']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pub_subject']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pub_subject']['validate_options']['vocabularies'] = array(
    'subjects' => 'subjects',
  );
  $handler->display->display_options['arguments']['field_pub_subject']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_pub_subject']['not'] = 0;

  /* Display: Search */
  $handler = $view->new_display('page', 'Search', 'page');
  $handler->display->display_options['path'] = 'statistical_publications/%/reports';

  /* Display: Latest */
  $handler = $view->new_display('embed', 'Latest', 'latest');
  $export['statistical_reports_search'] = $view;

  return $export;
}
