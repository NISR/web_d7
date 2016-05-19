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
  $queue->name = 'featured_indicators';
  $queue->label = 'Featured indicators';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'publication';
  $queue->settings = array(
    'target_bundles' => array(
      'featured_indicator' => 'featured_indicator',
    ),
    'min_size' => '4',
    'max_size' => '4',
    'act_as_queue' => 1,
  );
  $export['featured_indicators'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_statistical_articles';
  $queue->label = 'Featured statistical articles';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'publication';
  $queue->settings = array(
    'target_bundles' => array(
      'statistical_article' => 'statistical_article',
    ),
    'min_size' => '2',
    'max_size' => '4',
    'act_as_queue' => 1,
  );
  $export['featured_statistical_articles'] = $queue;

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

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'key_figures';
  $queue->label = 'Key figures';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'publication';
  $queue->settings = array(
    'target_bundles' => array(
      'figure' => 'figure',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['key_figures'] = $queue;

  return $export;
}
