<?php
/**
 * @file
 * contact_config.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function contact_config_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact footer';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'contact_footer';
  $fe_block_boxes->body = '<ul class="contact"><li><p><strong>Address:</strong> KN 2 Av 36, Avenue de la Justice, Village: Ingenzi, Cell: Kabeza, Sector: Muhima, &nbsp; &nbsp;District: Nyarugenge, Kigali City, Rwanda</p></li><li><p><strong>Phone:</strong>+250 252 571035</p></li><li><p><strong>Email:</strong> <a href="mailto:info@statistics.gov.rw">info@statistics.gov.rw</a></p></li></ul>';

  $export['contact_footer'] = $fe_block_boxes;

  return $export;
}
