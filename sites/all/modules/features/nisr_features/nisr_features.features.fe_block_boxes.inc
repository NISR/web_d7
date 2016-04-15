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
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>© <?php print date(\'Y\')?>&nbsp;National Institute of Statistics Rwanda</p>';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Creative Commons credits';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'creative_commons_credits';
  $fe_block_boxes->body = '<div class="col-md-9">Unless otherwise indicated, data and analysis&nbsp;by&nbsp;the National Institute of Statistics of Rwanda (NISR)&nbsp;is licensed under a&nbsp;<a href="http://creativecommons.org/licenses/by/4.0/" rel="license" target="_blank">Creative Commons Attribution 4.0 International License</a>.</div><div class="col-md-3"><a href="http://creativecommons.org/licenses/by/4.0/" rel="license" target="_blank"><img src="https://i.creativecommons.org/l/by/4.0/88x31.png"></a></div>';

  $export['creative_commons_credits'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Google calendar widget';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'google_calendar_widget';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="200" scrolling="no" src="https://calendar.google.com/calendar/embed?showTitle=0&amp;showPrint=0&amp;showTabs=0&amp;showCalendars=0&amp;showTz=0&amp;height=200&amp;wkst=1&amp;bgcolor=%23FFFFFF&amp;src=ie0qtk0seo5burtsibff5ilso0%40group.calendar.google.com&amp;color=%236B3304&amp;ctz=Asia%2FJerusalem" style="border:solid 1px #777" width="280"></iframe></p>';

  $export['google_calendar_widget'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Goverment logo';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'gov_logo';
  $fe_block_boxes->body = '<p><img alt="" src="http://gov.rw/fileadmin/templates/images/toplogonew.png" style="width: 107px; height: 103px; "></p>';

  $export['gov_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'NSDS document link on the frontpage';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'nsds_button';
  $fe_block_boxes->body = '<p>&nbsp;</p><p>&nbsp;</p>';

  $export['nsds_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Visa button on the frontpage';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'visa_button';
  $fe_block_boxes->body = '<p><a class="btn btn-lg btn-primary btn-special" href="service/visa?action=apply">Apply for a visa</a></p><p>&nbsp;</p>';

  $export['visa_button'] = $fe_block_boxes;

  return $export;
}
