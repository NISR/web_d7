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
      0 => 'field_visa_runtime',
      1 => 'field_visa_report_deadline',
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
  $field_group->identifier = 'group_contact_information|application|visa|full';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '4',
    'children' => array(
      0 => 'field_visa_contact_firstname',
      1 => 'field_visa_contact_lastname',
      2 => 'field_visa_contact_email',
      3 => 'field_visa_contact_salutation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_information|application|visa|full'] = $field_group;

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
      0 => 'field_visa_contact_firstname',
      1 => 'field_visa_contact_lastname',
      2 => 'field_visa_contact_email',
      3 => 'field_visa_contact_salutation',
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
      0 => 'field_visa_letter',
      1 => 'field_visa_proposal',
      2 => 'field_visa_reports',
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
  $field_group->identifier = 'group_documents|application|visa|full';
  $field_group->group_name = 'group_documents';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documents',
    'weight' => '5',
    'children' => array(
      0 => 'field_visa_letter',
      1 => 'field_visa_proposal',
      2 => 'field_visa_reports',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Documents',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-documents field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_documents|application|visa|full'] = $field_group;

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
      0 => 'field_visa_org_address',
      1 => 'field_visa_org_pobox',
      2 => 'field_visa_org_website',
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
  $field_group->identifier = 'group_organization_information|application|visa|full';
  $field_group->group_name = 'group_organization_information';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization information',
    'weight' => '3',
    'children' => array(
      0 => 'field_visa_org_address',
      1 => 'field_visa_org_name',
      2 => 'field_visa_org_pobox',
      3 => 'field_visa_org_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-organization-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_organization_information|application|visa|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scheduling|application|visa|full';
  $field_group->group_name = 'group_scheduling';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scheduling',
    'weight' => '6',
    'children' => array(
      0 => 'field_visa_runtime',
      1 => 'field_visa_report_deadline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Scheduling',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-scheduling field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_scheduling|application|visa|full'] = $field_group;

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
    'weight' => '3',
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
  t('Documents');
  t('Organization information');
  t('Scheduling');
  t('Vertical tab group 1');

  return $field_groups;
}
