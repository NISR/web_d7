<?php
/**
 * @file
 * publication_features.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function publication_features_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_statistical_reports';
  $queue->label = 'Featured statistical reports';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'publication';
  $queue->settings = array(
    'target_bundles' => array(
      'statistical_report' => 'statistical_report',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['featured_statistical_reports'] = $queue;

  return $export;
}
