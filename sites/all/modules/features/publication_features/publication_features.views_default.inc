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
  $view->name = 'publication_widgets';
  $view->description = 'Publication blocks : newest items, latest reports, latest articles...';
  $view->tag = 'default';
  $view->base_table = 'publication';
  $view->human_name = 'Publication widgets';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_eq_publication_entityqueue_subqueue']['id'] = 'reverse_eq_publication_entityqueue_subqueue';
  $handler->display->display_options['relationships']['reverse_eq_publication_entityqueue_subqueue']['table'] = 'publication';
  $handler->display->display_options['relationships']['reverse_eq_publication_entityqueue_subqueue']['field'] = 'reverse_eq_publication_entityqueue_subqueue';
  /* Field: Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'publication';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['label'] = '';
  $handler->display->display_options['fields']['pub_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pub_id']['element_label_colon'] = FALSE;
  /* Field: Publication: Subject */
  $handler->display->display_options['fields']['field_pub_subject']['id'] = 'field_pub_subject';
  $handler->display->display_options['fields']['field_pub_subject']['table'] = 'field_data_field_pub_subject';
  $handler->display->display_options['fields']['field_pub_subject']['field'] = 'field_pub_subject';
  $handler->display->display_options['fields']['field_pub_subject']['label'] = '';
  $handler->display->display_options['fields']['field_pub_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_subject']['element_wrapper_class'] = 'uppercase';
  $handler->display->display_options['fields']['field_pub_subject']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pub_subject']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pub_subject']['delta_offset'] = '0';
  /* Field: Publication: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'publication';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'publication/[pub_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Publication: Published (field_pub_publication_date) */
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['id'] = 'field_pub_publication_date_value';
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['table'] = 'field_data_field_pub_publication_date';
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['field'] = 'field_pub_publication_date_value';
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['order'] = 'DESC';
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_article' => 'statistical_article',
    'statistical_report' => 'statistical_report',
  );

  /* Display: What's new */
  $handler = $view->new_display('block', 'What\'s new', 'new');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'What\'s new';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_article' => 'statistical_article',
    'statistical_report' => 'statistical_report',
  );
  $handler->display->display_options['block_description'] = 'What\'s new';

  /* Display: Featured statistical reports */
  $handler = $view->new_display('block', 'Featured statistical reports', 'fsr');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured reports';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Entityqueue: Publication Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'publication';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );
  /* Filter criterion: Entityqueue: Publication In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'publication';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Featured statistical reports';

  /* Display: Featured statistical articles */
  $handler = $view->new_display('block', 'Featured statistical articles', 'fsa');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured articles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'featured';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Entityqueue: Publication Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'publication';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_article' => 'statistical_article',
  );
  /* Filter criterion: Entityqueue: Publication In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'publication';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Featured statistical articles';

  /* Display: Featured indicators */
  $handler = $view->new_display('block', 'Featured indicators', 'fi');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'featured';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Publication: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'publication';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'publication/[pub_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  /* Field: Publication: Value */
  $handler->display->display_options['fields']['field_pub_fi_value']['id'] = 'field_pub_fi_value';
  $handler->display->display_options['fields']['field_pub_fi_value']['table'] = 'field_data_field_pub_fi_value';
  $handler->display->display_options['fields']['field_pub_fi_value']['field'] = 'field_pub_fi_value';
  $handler->display->display_options['fields']['field_pub_fi_value']['label'] = '';
  $handler->display->display_options['fields']['field_pub_fi_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_fi_value']['element_wrapper_type'] = 'h1';
  /* Field: Publication: Period */
  $handler->display->display_options['fields']['field_pub_fi_period']['id'] = 'field_pub_fi_period';
  $handler->display->display_options['fields']['field_pub_fi_period']['table'] = 'field_data_field_pub_fi_period';
  $handler->display->display_options['fields']['field_pub_fi_period']['field'] = 'field_pub_fi_period';
  $handler->display->display_options['fields']['field_pub_fi_period']['label'] = '';
  $handler->display->display_options['fields']['field_pub_fi_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_fi_period']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Entityqueue: Publication Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'publication';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Sort criterion: Publication: Published (field_pub_publication_date) */
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['id'] = 'field_pub_publication_date_value';
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['table'] = 'field_data_field_pub_publication_date';
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['field'] = 'field_pub_publication_date_value';
  $handler->display->display_options['sorts']['field_pub_publication_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityqueue: Publication In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'publication';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'publication';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'featured_indicator' => 'featured_indicator',
  );
  $handler->display->display_options['block_description'] = 'Featured indicators';
  $translatables['publication_widgets'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Subqueue referencing Publication from eq_publication'),
    t('.'),
    t(','),
    t('What\'s new'),
    t('Featured statistical reports'),
    t('Featured reports'),
    t('Featured statistical articles'),
    t('Featured articles'),
    t('Featured indicators'),
  );
  $export['publication_widgets'] = $view;

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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'pub_id' => 'pub_id',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'created' => 'created',
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
    'pub_id' => array(
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'nothing' => array(
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
  $handler->display->display_options['empty']['area']['format'] = '1';
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'statistical_article::field_pub_subject' => 'statistical_article::field_pub_subject',
        ),
      ),
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
  /* Field: Publication: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'publication';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  /* Filter criterion: Publication: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'publication';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Publication: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'publication';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  $handler->display->display_options['path'] = 'admin/content/publications';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Statistical reports */
  $handler = $view->new_display('page', 'Statistical reports', 'statistical_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistical reports';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'statistical_report::field_pub_period' => 'statistical_report::field_pub_period',
          'statistical_report::field_pub_subject' => 'statistical_report::field_pub_subject',
          'statistical_report::field_pub_regions' => 'statistical_report::field_pub_regions',
        ),
      ),
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
  /* Field: Publication: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'publication';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Publication: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'publication';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  /* Filter criterion: Publication: Subject (field_pub_subject) */
  $handler->display->display_options['filters']['field_pub_subject_tid']['id'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['table'] = 'field_data_field_pub_subject';
  $handler->display->display_options['filters']['field_pub_subject_tid']['field'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator_id'] = 'field_pub_subject_tid_op';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator_label'] = 'Empty(or NOT)';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator'] = 'field_pub_subject_tid_op';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['identifier'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['label'] = 'Subject (field_pub_subject)';
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['identifier'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_pub_subject_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pub_subject_tid']['vocabulary'] = 'statistical_publications_types';
  $handler->display->display_options['filters']['field_pub_subject_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'admin/content/publications/statistical_reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Statistical reports';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Statistical articles */
  $handler = $view->new_display('page', 'Statistical articles', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistical articles';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'statistical_article::field_pub_subject' => 'statistical_article::field_pub_subject',
          'statistical_article::field_pub_tags' => 'statistical_article::field_pub_tags',
        ),
      ),
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
  /* Field: Publication: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'publication';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_article' => 'statistical_article',
  );
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
  /* Filter criterion: Publication: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'publication';
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
  /* Filter criterion: Publication: Subject (field_pub_subject) */
  $handler->display->display_options['filters']['field_pub_subject_tid']['id'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['table'] = 'field_data_field_pub_subject';
  $handler->display->display_options['filters']['field_pub_subject_tid']['field'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_pub_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator_id'] = 'field_pub_subject_tid_op';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator'] = 'field_pub_subject_tid_op';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['identifier'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_pub_subject_tid']['vocabulary'] = 'statistical_publications_types';
  $handler->display->display_options['path'] = 'admin/content/publications/statistical_articles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Statistical articles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Documents */
  $handler = $view->new_display('page', 'Documents', 'documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'document::field_doc_subject' => 'document::field_doc_subject',
        ),
      ),
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
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
  /* Filter criterion: Publication: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'publication';
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
  /* Filter criterion: Publication: Subject (field_doc_subject) */
  $handler->display->display_options['filters']['field_doc_subject_tid']['id'] = 'field_doc_subject_tid';
  $handler->display->display_options['filters']['field_doc_subject_tid']['table'] = 'field_data_field_doc_subject';
  $handler->display->display_options['filters']['field_doc_subject_tid']['field'] = 'field_doc_subject_tid';
  $handler->display->display_options['filters']['field_doc_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_doc_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_subject_tid']['expose']['operator_id'] = 'field_doc_subject_tid_op';
  $handler->display->display_options['filters']['field_doc_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_doc_subject_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_doc_subject_tid']['expose']['operator'] = 'field_doc_subject_tid_op';
  $handler->display->display_options['filters']['field_doc_subject_tid']['expose']['identifier'] = 'field_doc_subject_tid';
  $handler->display->display_options['filters']['field_doc_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_doc_subject_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_subject_tid']['vocabulary'] = 'document_subjects';
  $handler->display->display_options['filters']['field_doc_subject_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'admin/content/publications/documents';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Documents';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Datasets */
  $handler = $view->new_display('page', 'Datasets', 'datasets');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Datasets';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
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
  /* Filter criterion: Publication: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'publication';
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
  $handler->display->display_options['path'] = 'admin/content/publications/datasets';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Datasets';
  $handler->display->display_options['menu']['weight'] = '11';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Indicators */
  $handler = $view->new_display('page', 'Indicators', 'indicators');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Indicators';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'statistical_report::field_pub_subject' => 'statistical_report::field_pub_subject',
          'statistical_report::field_pub_tags' => 'statistical_report::field_pub_tags',
        ),
      ),
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
  /* Field: Publication: Period */
  $handler->display->display_options['fields']['field_pub_fi_period']['id'] = 'field_pub_fi_period';
  $handler->display->display_options['fields']['field_pub_fi_period']['table'] = 'field_data_field_pub_fi_period';
  $handler->display->display_options['fields']['field_pub_fi_period']['field'] = 'field_pub_fi_period';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'publication';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_indicator' => 'featured_indicator',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Publication: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'publication';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
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
  /* Filter criterion: Publication: Subject (field_pub_subject) */
  $handler->display->display_options['filters']['field_pub_subject_tid']['id'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['table'] = 'field_data_field_pub_subject';
  $handler->display->display_options['filters']['field_pub_subject_tid']['field'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator_id'] = 'field_pub_subject_tid_op';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator_label'] = 'Empty(or NOT)';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['operator'] = 'field_pub_subject_tid_op';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['identifier'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['label'] = 'Subject (field_pub_subject)';
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['identifier'] = 'field_pub_subject_tid';
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_pub_subject_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_pub_subject_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pub_subject_tid']['vocabulary'] = 'statistical_publications_types';
  $handler->display->display_options['filters']['field_pub_subject_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'admin/content/publications/indicators';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Indicators';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['publications_backoffice'] = array(
    t('Master'),
    t('Publications'),
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
    t(' <ul class="action-links"><li><a href="/?q=publication/add">Add publication</a></li></ul>      '),
    t('There are no publication to show'),
    t('User'),
    t('- Choose an operation -'),
    t('.'),
    t(','),
    t('Title'),
    t('Publication type'),
    t('Author'),
    t('Date created'),
    t('Date changed'),
    t('Operations'),
    t('<a href="/publication/[pub_id]/edit?destination=admin/content/publications">Edit</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="/publication/[pub_id]/delete?destination=admin/content/publications">Delete</a>'),
    t('Page'),
    t('Statistical reports'),
    t('Subject'),
    t('Empty(or NOT)'),
    t('Subject (field_pub_subject)'),
    t('Statistical articles'),
    t('Documents'),
    t('Datasets'),
    t('Indicators'),
    t('Period'),
  );
  $export['publications_backoffice'] = $view;

  $view = new view();
  $view->name = 'publications_er';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Publications ER';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Hierarchy */
  $handler->display->display_options['sorts']['lineage']['id'] = 'lineage';
  $handler->display->display_options['sorts']['lineage']['table'] = 'taxonomy_term_lineage';
  $handler->display->display_options['sorts']['lineage']['field'] = 'lineage';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'subjects' => 'subjects',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '<';
  $handler->display->display_options['filters']['parent']['value']['value'] = '1';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Subject Term reference field  filter */
  $handler = $view->new_display('term_reference', 'Subject Term reference field  filter', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'statistical_publications_types' => 'statistical_publications_types',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '>';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $translatables['publications_er'] = array(
    t('Master'),
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
    t('Entity Reference'),
    t('Subject Term reference field  filter'),
  );
  $export['publications_er'] = $view;

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
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view publication entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_datasource_target_id']['id'] = 'field_pub_datasource_target_id';
  $handler->display->display_options['relationships']['field_pub_datasource_target_id']['table'] = 'field_data_field_pub_datasource';
  $handler->display->display_options['relationships']['field_pub_datasource_target_id']['field'] = 'field_pub_datasource_target_id';
  /* Field: Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'publication';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  /* Sort criterion: Datasource: Period - end date (field_datasource_period:value2) */
  $handler->display->display_options['sorts']['field_datasource_period_value2']['id'] = 'field_datasource_period_value2';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['table'] = 'field_data_field_datasource_period';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['field'] = 'field_datasource_period_value2';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['relationship'] = 'field_pub_datasource_target_id';
  $handler->display->display_options['sorts']['field_datasource_period_value2']['order'] = 'DESC';
  /* Sort criterion: Datasource: Period -  start date (field_datasource_period) */
  $handler->display->display_options['sorts']['field_datasource_period_value']['id'] = 'field_datasource_period_value';
  $handler->display->display_options['sorts']['field_datasource_period_value']['table'] = 'field_data_field_datasource_period';
  $handler->display->display_options['sorts']['field_datasource_period_value']['field'] = 'field_datasource_period_value';
  $handler->display->display_options['sorts']['field_datasource_period_value']['relationship'] = 'field_pub_datasource_target_id';
  /* Contextual filter: Datasource: Datasource ID */
  $handler->display->display_options['arguments']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['arguments']['ds_id']['table'] = 'datasource';
  $handler->display->display_options['arguments']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['arguments']['ds_id']['relationship'] = 'field_pub_datasource_target_id';
  $handler->display->display_options['arguments']['ds_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['ds_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ds_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ds_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ds_id']['summary_options']['items_per_page'] = '25';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'datasource';
  $handler->display->display_options['bundles'] = array(
    0 => 'datasource_incidence',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['publications_eva'] = array(
    t('Master'),
    t('Publications'),
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
    t('Datasource entity referenced from field_pub_datasource'),
    t('Publication ID'),
    t('.'),
    t(','),
    t('All'),
    t('EVA Field'),
  );
  $export['publications_eva'] = $view;

  $view = new view();
  $view->name = 'publications_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_publications';
  $view->human_name = 'Publications search';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>N/A</strong>';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Indexed Publication: Publication ID */
  $handler->display->display_options['fields']['pub_id']['id'] = 'pub_id';
  $handler->display->display_options['fields']['pub_id']['table'] = 'search_api_index_publications';
  $handler->display->display_options['fields']['pub_id']['field'] = 'pub_id';
  /* Sort criterion: Indexed Publication: Period */
  $handler->display->display_options['sorts']['period']['id'] = 'period';
  $handler->display->display_options['sorts']['period']['table'] = 'search_api_index_publications';
  $handler->display->display_options['sorts']['period']['field'] = 'period';
  /* Sort criterion: Indexed Publication: Entity ID */
  $handler->display->display_options['sorts']['search_api_id']['id'] = 'search_api_id';
  $handler->display->display_options['sorts']['search_api_id']['table'] = 'search_api_index_publications';
  $handler->display->display_options['sorts']['search_api_id']['field'] = 'search_api_id';
  $handler->display->display_options['sorts']['search_api_id']['order'] = 'DESC';
  /* Sort criterion: Indexed Publication: Published */
  $handler->display->display_options['sorts']['field_pub_publication_date']['id'] = 'field_pub_publication_date';
  $handler->display->display_options['sorts']['field_pub_publication_date']['table'] = 'search_api_index_publications';
  $handler->display->display_options['sorts']['field_pub_publication_date']['field'] = 'field_pub_publication_date';
  $handler->display->display_options['sorts']['field_pub_publication_date']['order'] = 'DESC';
  /* Contextual filter: Indexed Publication: Subject */
  $handler->display->display_options['arguments']['field_pub_subject']['id'] = 'field_pub_subject';
  $handler->display->display_options['arguments']['field_pub_subject']['table'] = 'search_api_index_publications';
  $handler->display->display_options['arguments']['field_pub_subject']['field'] = 'field_pub_subject';
  $handler->display->display_options['arguments']['field_pub_subject']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_pub_subject']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_subject']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_subject']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pub_subject']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pub_subject']['validate_options']['vocabularies'] = array(
    'statistical_publications_types' => 'statistical_publications_types',
  );
  $handler->display->display_options['arguments']['field_pub_subject']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_pub_subject']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_pub_subject']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_pub_subject']['not'] = 0;

  /* Display: Latest Statistical reports */
  $handler = $view->new_display('embed', 'Latest Statistical reports', 'latest_statistical_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest reports';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_publications';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );

  /* Display: Latest Statistical articles */
  $handler = $view->new_display('embed', 'Latest Statistical articles', 'latest_statistical_articles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest articles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Publication: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_publications';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_publications';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_article' => 'statistical_article',
  );

  /* Display: Documents */
  $handler = $view->new_display('embed', 'Documents', 'documents');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Publication: Subject */
  $handler->display->display_options['arguments']['field_doc_subject']['id'] = 'field_doc_subject';
  $handler->display->display_options['arguments']['field_doc_subject']['table'] = 'search_api_index_publications';
  $handler->display->display_options['arguments']['field_doc_subject']['field'] = 'field_doc_subject';
  $handler->display->display_options['arguments']['field_doc_subject']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_doc_subject']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_doc_subject']['title'] = '%1';
  $handler->display->display_options['arguments']['field_doc_subject']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_doc_subject']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_doc_subject']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_doc_subject']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_publications';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );

  /* Display: Statistical reports */
  $handler = $view->new_display('page', 'Statistical reports', 'statistical_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistical reports';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_publications';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_report' => 'statistical_report',
  );
  $handler->display->display_options['path'] = 'statistical-publications/%/reports';

  /* Display: Statistical articles */
  $handler = $view->new_display('page', 'Statistical articles', 'statistical_articles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Statistical articles';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Publication: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_publications';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'statistical_article' => 'statistical_article',
  );
  $handler->display->display_options['path'] = 'statistical-publications/%/articles';
  $translatables['publications_search'] = array(
    t('Master'),
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
    t('<strong>N/A</strong>'),
    t('Publication ID'),
    t('.'),
    t(','),
    t('All'),
    t('Latest Statistical reports'),
    t('Latest reports'),
    t('Latest Statistical articles'),
    t('Latest articles'),
    t('Documents'),
    t('%1'),
    t('Statistical reports'),
    t('Statistical articles'),
  );
  $export['publications_search'] = $view;

  $view = new view();
  $view->name = 'regions_term_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Regions Term references';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Hierarchy */
  $handler->display->display_options['sorts']['lineage']['id'] = 'lineage';
  $handler->display->display_options['sorts']['lineage']['table'] = 'taxonomy_term_lineage';
  $handler->display->display_options['sorts']['lineage']['field'] = 'lineage';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'regions' => 'regions',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '>';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Term Reference */
  $handler = $view->new_display('term_reference', 'Term Reference', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['regions_term_references'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Term Reference'),
  );
  $export['regions_term_references'] = $view;

  return $export;
}
