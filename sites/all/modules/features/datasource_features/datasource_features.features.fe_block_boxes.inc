<?php
/**
 * @file
 * datasource_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function datasource_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Featured indicators -- temp';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'featured_indicators';
  $fe_block_boxes->body = '<section class="home-intro mb-none"><div class="container"><div class="row featured-boxes counters"><div class="col-md-3 counter"><div class="featured-box featured-box-primary"><div class="box-content"><h4>Consumer Price Index (February 2014 = 100)</h4><h1>104.7</h1><h5>October 2015</h5></div></div></div><div class="col-md-3"><div class="featured-box featured-box-secondary"><div class="box-content"><h4>Inflation rate</h4><h1>2</h1><h5>October 2015</h5></div></div></div><div class="col-md-3"><div class="featured-box featured-box-tertiary"><div class="box-content"><h4>Life expectancy at birth (Years)</h4><h1>65.7</h1><h5>2015</h5></div></div></div><div class="col-md-3"><div class="featured-box featured-box-quaternary"><div class="box-content"><h4>Size of the resident population (Projection)</h4><h1>11,262,564</h1><h5>2015</h5></div></div></div></div></div></section>';

  $export['featured_indicators'] = $fe_block_boxes;

  return $export;
}
