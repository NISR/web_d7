<?php
/**
 * @file
 * contact_config.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_config_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'info@statistics.gov.rw',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
