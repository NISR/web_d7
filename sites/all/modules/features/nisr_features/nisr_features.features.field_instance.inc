<?php
/**
 * @file
 * nisr_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function nisr_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_profile_pi-field_pi_firstname'.
  $field_instances['field_collection_item-field_profile_pi-field_pi_firstname'] = array(
    'bundle' => 'field_profile_pi',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_pi_firstname',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_pi-field_pi_lastname'.
  $field_instances['field_collection_item-field_profile_pi-field_pi_lastname'] = array(
    'bundle' => 'field_profile_pi',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_pi_lastname',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_pi-field_pi_salutation'.
  $field_instances['field_collection_item-field_profile_pi-field_pi_salutation'] = array(
    'bundle' => 'field_profile_pi',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_pi_salutation',
    'label' => 'Salutation',
    'required' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_subscriptions-field_subscriptions_documents'.
  $field_instances['field_collection_item-field_profile_subscriptions-field_subscriptions_documents'] = array(
    'bundle' => 'field_profile_subscriptions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_subscriptions_documents',
    'label' => 'Documents',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_subscriptions-field_subscriptions_news'.
  $field_instances['field_collection_item-field_profile_subscriptions-field_subscriptions_news'] = array(
    'bundle' => 'field_profile_subscriptions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_subscriptions_news',
    'label' => 'News',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_subscriptions-field_subscriptions_pub_sa'.
  $field_instances['field_collection_item-field_profile_subscriptions-field_subscriptions_pub_sa'] = array(
    'bundle' => 'field_profile_subscriptions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_subscriptions_pub_sa',
    'label' => 'Statistical articles',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_subscriptions-field_subscriptions_pub_sr'.
  $field_instances['field_collection_item-field_profile_subscriptions-field_subscriptions_pub_sr'] = array(
    'bundle' => 'field_profile_subscriptions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_subscriptions_pub_sr',
    'label' => 'Statistical reports',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_profile_subscriptions-field_subscriptions_sp'.
  $field_instances['field_collection_item-field_profile_subscriptions-field_subscriptions_sp'] = array(
    'bundle' => 'field_profile_subscriptions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_subscriptions_sp',
    'label' => 'Statistical publications',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_pi'.
  $field_instances['profile2-main-field_profile_pi'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_pi',
    'label' => 'Personal Information',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_subscriptions'.
  $field_instances['profile2-main-field_profile_subscriptions'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Get notified by an email alert wherever items of the following types are created',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_subscriptions',
    'label' => 'Subscriptions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.');
  t('Body');
  t('Documents');
  t('Firstname');
  t('Get notified by an email alert wherever items of the following types are created');
  t('Lastname');
  t('News');
  t('Personal Information');
  t('Salutation');
  t('Statistical articles');
  t('Statistical publications');
  t('Statistical reports');
  t('Subscriptions');

  return $field_instances;
}
