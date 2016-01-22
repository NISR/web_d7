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
  $field_group->identifier = 'group_contact_info|application|visa|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'application';
  $field_group->bundle = 'visa';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '1',
    'children' => array(
      0 => 'field_app_salutation',
      1 => 'field_app_firstname',
      2 => 'field_app_lastname',
      3 => 'field_app_phone',
      4 => 'field_app_mobile_phone',
      5 => 'field_app_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documents',
    'weight' => '3',
    'children' => array(
      0 => 'field_app_letter',
      1 => 'field_app_proposal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-documents field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization information',
    'weight' => '2',
    'children' => array(
      0 => 'field_app_organization',
      1 => 'field_app_country',
      2 => 'field_app_city',
      3 => 'field_app_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_organization_information|application|visa|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact information');
  t('Documents');
  t('Organization information');

  return $field_groups;
}
