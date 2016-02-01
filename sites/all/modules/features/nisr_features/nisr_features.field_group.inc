<?php
/**
 * @file
 * nisr_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nisr_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_pi|profile2|main|default';
  $field_group->group_name = 'group_profile_pi';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_pi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_profile_pi|profile2|main|default'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_profile_subscriptions',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_profile_subs|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|profile2|main|default';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '0',
    'children' => array(
      0 => 'group_profile_pi',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile field-group-tabs',
      ),
    ),
  );
  $field_groups['group_profile|profile2|main|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Personal information');
  t('Profile');
  t('Subscriptions');

  return $field_groups;
}
