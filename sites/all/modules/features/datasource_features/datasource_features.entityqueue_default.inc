<?php
/**
 * @file
 * datasource_features.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function datasource_features_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_survey_incidents';
  $queue->label = 'Featured survey incidents';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'datasource';
  $queue->settings = array(
    'target_bundles' => array(
      'datasource_incidence' => 'datasource_incidence',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['featured_survey_incidents'] = $queue;

  return $export;
}
