<?php
/**
 * @file
 * publication_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function publication_features_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_chart_settings|publication|data|form';
  $field_group->group_name = 'group_chart_settings';
  $field_group->entity_type = 'publication';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Chart settings',
    'weight' => '1',
    'children' => array(
      0 => 'field_dataset_chart_data_prefix',
      1 => 'field_dataset_chart_data_suffix',
      2 => 'field_dataset_chart_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-chart-settings field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_chart_settings|publication|data|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Chart settings');

  return $field_groups;
}
