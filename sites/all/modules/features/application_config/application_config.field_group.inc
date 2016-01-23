<?php
/**
 * @file
 * application_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function application_config_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_app_scheduling|application|visa|form';
  $field_group->group_name = 'group_app_scheduling';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertical_tab_group_1';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '6',
    'children' => array(
      0 => 'field_app_runtime',
      1 => 'field_app_report_submission_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-app-scheduling field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_app_scheduling|application|visa|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|application|visa|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertical_tab_group_1';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '3',
    'children' => array(
      0 => 'field_app_email',
      1 => 'field_app_firstname',
      2 => 'field_app_lastname',
      3 => 'field_app_mobile_phone',
      4 => 'field_app_phone',
      5 => 'field_app_salutation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_info|application|visa|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents|application|visa|form';
  $field_group->group_name = 'group_documents';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertical_tab_group_1';
  $field_group->data = array(
    'label' => 'Documentation',
    'weight' => '4',
    'children' => array(
      0 => 'field_app_letter',
      1 => 'field_app_proposal',
      2 => 'field_app_reports',
      3 => 'field_app_visa',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Documentation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_documents|application|visa|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_information|application|visa|form';
  $field_group->group_name = 'group_organization_information';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vertical_tab_group_1';
  $field_group->data = array(
    'label' => 'Organization information',
    'weight' => '2',
    'children' => array(
      0 => 'field_app_city',
      1 => 'field_app_country',
      2 => 'field_app_organization',
      3 => 'field_app_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organization_information|application|visa|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vertical_tab_group_1|application|visa|form';
  $field_group->group_name = 'group_vertical_tab_group_1';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical tab group 1',
    'weight' => '0',
    'children' => array(
      0 => 'group_contact_info',
      1 => 'group_documents',
      2 => 'group_organization_information',
      3 => 'group_app_scheduling',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vertical-tab-group-1 field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vertical_tab_group_1|application|visa|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact information');
  t('Documentation');
  t('Organization information');
  t('Scheduling');
  t('Vertical tab group 1');

  return $field_groups;
}
