<?php
/**
 * @file
 * nisr_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nisr_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_pi|profile2|main|default';
  $field_group->group_name = 'group_profile_pi';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_pi',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-pi field-group-fieldset',
      ),
    ),
  );
  $export['group_profile_pi|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_subs|profile2|main|default';
  $field_group->group_name = 'group_profile_subs';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subscriptions',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_subscriptions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-subs field-group-fieldset',
      ),
    ),
  );
  $export['group_profile_subs|profile2|main|default'] = $field_group;

  return $export;
}
