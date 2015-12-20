<?php
/**
 * @file
 * contact_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contact_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_page';
  $context->description = '';
  $context->tag = 'Contact';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact_us' => 'contact_us',
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nisr-contact_form' => array(
          'module' => 'nisr',
          'delta' => 'contact_form',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  $export['contact_page'] = $context;

  return $export;
}
