<?php
/**
 * @file
 * application_config.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function application_config_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'application-visa-field_app_city'.
  $field_instances['application-visa-field_app_city'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_country'.
  $field_instances['application-visa-field_app_country'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_email'.
  $field_instances['application-visa-field_app_email'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_email',
    'label' => 'E-mail',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_firstname'.
  $field_instances['application-visa-field_app_firstname'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_firstname',
    'label' => 'Firstname',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_lastname'.
  $field_instances['application-visa-field_app_lastname'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_lastname',
    'label' => 'Lastname',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_letter'.
  $field_instances['application-visa-field_app_letter'] = array(
    'bundle' => 'visa',
    'deleted' => 0,
    'description' => 'Signed and scanned application letter (preferably in PDF format) addressed to the Director General, NISR',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_letter',
    'label' => 'Application letter',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf png jpeg jpg tiff bmp',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'applications/[application:uuid]',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'media_library_include_in_library' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_mobile_phone'.
  $field_instances['application-visa-field_app_mobile_phone'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_mobile_phone',
    'label' => 'Mobile/Cell phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_organization'.
  $field_instances['application-visa-field_app_organization'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_organization',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_phone'.
  $field_instances['application-visa-field_app_phone'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_proposal'.
  $field_instances['application-visa-field_app_proposal'] = array(
    'bundle' => 'visa',
    'deleted' => 0,
    'description' => 'Proposal (Preferably in Microsoft Word format) containing the following:<br>
a)Application letter addressed to the DG<br>
b)Objectives of the survey, especially the indicators to be measured and for what purpose<br>
c)The methodology of the study<br>
d)The sample design, primary unit, secondary unit, and unit of analysis<br>
e)The size sample and the justification for it<br>
f)The sample distribution<br>
g)The questionnaire translated in Kinyarwanda<br>
h)The analysis plan<br>
i)The list of all indicators expected to produce in survey<br>
j)The schedule of all activities related with survey<br>
k)The survey manager CV<br>
l)The budget detailed to be used in the survey<br>
m)Field work organization<br>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_proposal',
    'label' => 'Proposal',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'doc docx odt',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'applications/[application:uuid]',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'media_library_include_in_library' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_salutation'.
  $field_instances['application-visa-field_app_salutation'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_salutation',
    'label' => 'Salutation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'application-visa-field_app_website'.
  $field_instances['application-visa-field_app_website'] = array(
    'bundle' => 'visa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'application',
    'field_name' => 'field_app_website',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Application letter');
  t('City');
  t('Country');
  t('E-mail');
  t('Firstname');
  t('Lastname');
  t('Mobile/Cell phone');
  t('Organization');
  t('Phone');
  t('Proposal');
  t('Proposal (Preferably in Microsoft Word format) containing the following:<br>
a)Application letter addressed to the DG<br>
b)Objectives of the survey, especially the indicators to be measured and for what purpose<br>
c)The methodology of the study<br>
d)The sample design, primary unit, secondary unit, and unit of analysis<br>
e)The size sample and the justification for it<br>
f)The sample distribution<br>
g)The questionnaire translated in Kinyarwanda<br>
h)The analysis plan<br>
i)The list of all indicators expected to produce in survey<br>
j)The schedule of all activities related with survey<br>
k)The survey manager CV<br>
l)The budget detailed to be used in the survey<br>
m)Field work organization<br>');
  t('Salutation');
  t('Signed and scanned application letter (preferably in PDF format) addressed to the Director General, NISR');
  t('Website');

  return $field_instances;
}
