<?php
/**
 * @file
 * message_config.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function message_config_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'visa_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Visa messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_message_visa_target_id']['id'] = 'field_message_visa_target_id';
  $handler->display->display_options['relationships']['field_message_visa_target_id']['table'] = 'field_data_field_message_visa';
  $handler->display->display_options['relationships']['field_message_visa_target_id']['field'] = 'field_message_visa_target_id';
  /* Relationship: Message: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'message';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Field: Message: Message ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* Contextual filter: Application: Application ID */
  $handler->display->display_options['arguments']['aid']['id'] = 'aid';
  $handler->display->display_options['arguments']['aid']['table'] = 'application';
  $handler->display->display_options['arguments']['aid']['field'] = 'aid';
  $handler->display->display_options['arguments']['aid']['relationship'] = 'field_message_visa_target_id';
  $handler->display->display_options['arguments']['aid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['aid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['aid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['aid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['aid']['summary_options']['items_per_page'] = '25';

  /* Display: Comments */
  $handler = $view->new_display('embed', 'Comments', 'comments');
  $handler->display->display_options['display_description'] = 'Comments attached to a visa item';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'user';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Field: Message: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[realname] wrote on [timestamp]</strong>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Message: Comment */
  $handler->display->display_options['fields']['field_message_comment']['id'] = 'field_message_comment';
  $handler->display->display_options['fields']['field_message_comment']['table'] = 'field_data_field_message_comment';
  $handler->display->display_options['fields']['field_message_comment']['field'] = 'field_message_comment';
  $handler->display->display_options['fields']['field_message_comment']['label'] = '';
  $handler->display->display_options['fields']['field_message_comment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_message_comment']['alter']['text'] = '[field_message_comment]
<br><br>';
  $handler->display->display_options['fields']['field_message_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Message: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Message: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'message';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'visa_item_comment' => 'visa_item_comment',
  );
  $translatables['visa_messages'] = array(
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
    t('Application entity referenced from field_message_visa'),
    t('User'),
    t('Message ID'),
    t('.'),
    t(','),
    t('All'),
    t('Comments'),
    t('Comments attached to a visa item'),
    t('<strong>[realname] wrote on [timestamp]</strong>'),
    t('[field_message_comment]
<br><br>'),
  );
  $export['visa_messages'] = $view;

  return $export;
}
