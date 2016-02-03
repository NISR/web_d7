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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact footer';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'contact_footer';
  $fe_block_boxes->body = '<ul class="contact"><li><p><strong>Address:</strong> KN 2 Av 36, Avenue de la Justice, Village: Ingenzi, Cell: Kabeza, Sector: Muhima, &nbsp; &nbsp;District: Nyarugenge, Kigali City, Rwanda</p></li><li><p><strong>Phone:</strong>+250 252 571035</p></li><li><p><strong>Email:</strong> <a href="mailto:info@statistics.gov.rw">info@statistics.gov.rw</a></p></li></ul>';

  $export['contact_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Google calendar widget';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'google_calendar_widget';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="200" scrolling="no" src="https://calendar.google.com/calendar/embed?showTitle=0&amp;showPrint=0&amp;showTabs=0&amp;showCalendars=0&amp;showTz=0&amp;height=200&amp;wkst=1&amp;bgcolor=%23FFFFFF&amp;src=ie0qtk0seo5burtsibff5ilso0%40group.calendar.google.com&amp;color=%236B3304&amp;ctz=Asia%2FJerusalem" style="border:solid 1px #777" width="280"></iframe></p>';

  $export['google_calendar_widget'] = $fe_block_boxes;

  return $export;
}
