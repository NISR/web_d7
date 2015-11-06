<?php
/**
 * @file
 * nisr_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function nisr_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ad banner';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'ad_banner';
  $fe_block_boxes->body = '<section></section>';

  $export['ad_banner'] = $fe_block_boxes;

  return $export;
}
