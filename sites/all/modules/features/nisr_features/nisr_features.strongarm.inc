<?php
/**
 * @file
 * nisr_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nisr_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'charts_settings';
  $strongarm->value = array(
    '#plugin' => 'gd_image_chart',
    '#type' => 'line2D',
    '#width' => '400',
    '#height' => '200',
    '#label' => 0,
    '#legend' => 0,
    '#color' => array(
      'background' => '#ffffff',
      'text' => '#000000',
      0 => '#ff0000',
      1 => '#00cc00',
      2 => '#0066b3',
      3 => '#ff8000',
      4 => '#ffcc00',
      5 => '#330099',
      6 => '#990099',
      7 => '#ccff00',
    ),
  );
  $export['charts_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = '.chosen-enable';
  $export['chosen_jquery_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_use_iso8601';
  $strongarm->value = 1;
  $export['date_api_use_iso8601'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Africa/Kigali';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone_name';
  $strongarm->value = '';
  $export['date_default_timezone_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_f_y';
  $strongarm->value = 'F Y';
  $export['date_format_f_y'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_m_y';
  $strongarm->value = 'M Y';
  $export['date_format_m_y'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_max_year';
  $strongarm->value = 3000;
  $export['date_max_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_min_year';
  $strongarm->value = 100;
  $export['date_min_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_php_min_year';
  $strongarm->value = 1971;
  $export['date_php_min_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_admin_name_gcal_events-0';
  $strongarm->value = 'Block 1';
  $export['gcal_events_admin_name_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_cache';
  $strongarm->value = 'sites/all/modules/contrib/gcal_events/cache';
  $export['gcal_events_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_cache_duration';
  $strongarm->value = '3600';
  $export['gcal_events_cache_duration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_calendar_id_gcal_events-0';
  $strongarm->value = 'ie0qtk0seo5burtsibff5ilso0@group.calendar.google.com';
  $export['gcal_events_calendar_id_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_dateformat';
  $strongarm->value = 'j F Y';
  $export['gcal_events_dateformat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_dateformat_gcal_events-0';
  $strongarm->value = '';
  $export['gcal_events_dateformat_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_day_grouping';
  $strongarm->value = 0;
  $export['gcal_events_day_grouping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_debug';
  $strongarm->value = '0';
  $export['gcal_events_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_developer_id_gcal_events-0';
  $strongarm->value = 'AIzaSyBz8kwgAjSd8eYIa0WCFXEmTvchwek1FQI';
  $export['gcal_events_developer_id_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_empty_gcal_events-0';
  $strongarm->value = 'none';
  $export['gcal_events_empty_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_footer_gcal_events-0';
  $strongarm->value = '<div class="pull-right"><a class="btn btn-xs btn-primary" target="_blank" href="">Download pdf</a></div>                       ';
  $export['gcal_events_footer_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_heading_other';
  $strongarm->value = '<b>Other</b><hr />';
  $export['gcal_events_heading_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_heading_thismonth';
  $strongarm->value = '<b>This Month</b><hr />';
  $export['gcal_events_heading_thismonth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_heading_thisweek';
  $strongarm->value = '<b>This Week</b><hr />';
  $export['gcal_events_heading_thisweek'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_heading_today';
  $strongarm->value = '<b>Today</b><hr />';
  $export['gcal_events_heading_today'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_heading_tomorrow';
  $strongarm->value = '<b>Tomorrow</b><hr />';
  $export['gcal_events_heading_tomorrow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_input_format';
  $strongarm->value = 'php_code';
  $export['gcal_events_input_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_item_list';
  $strongarm->value = 0;
  $export['gcal_events_item_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_num_blocks';
  $strongarm->value = '1';
  $export['gcal_events_num_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_num_events_gcal_events-0';
  $strongarm->value = '1';
  $export['gcal_events_num_events_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_private_id_gcal_events-0';
  $strongarm->value = '';
  $export['gcal_events_private_id_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_template_date_gcal_events-0';
  $strongarm->value = '#DATE#';
  $export['gcal_events_template_date_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_template_desc_gcal_events-0';
  $strongarm->value = '#DESC#';
  $export['gcal_events_template_desc_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_template_event_gcal_events-0';
  $strongarm->value = '<iframe src="https://calendar.google.com/calendar/embed?showTitle=0&amp;showPrint=0&amp;showTabs=0&amp;showCalendars=0&amp;showTz=0&amp;height=200&amp;wkst=1&amp;bgcolor=%23FFFFFF&amp;src=ie0qtk0seo5burtsibff5ilso0%40group.calendar.google.com&amp;color=%236B3304&amp;ctz=Asia%2FJerusalem" style="border:solid 1px #777" width="280" height="200" frameborder="0" scrolling="no"></iframe>
<div class="calendarTable clearfix">
	<div class="calendarRow">
		<div class="calendarDateContainer">
			<span class="day"><?php print date(\'d\',strtotime("#DATE#")) ;?></span>
			<span class="month"><?php print date(\'M\',strtotime("#DATE#")) ;?></span>
		</div>
		<div class="calendarInfo"><div>UPCOMING RELEASE</div><div><a href="#LOC#">#TITLE#</a></div></div>
	</div>
</div>
                       ';
  $export['gcal_events_template_event_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_template_loc_gcal_events-0';
  $strongarm->value = '#LOC#';
  $export['gcal_events_template_loc_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_template_time_gcal_events-0';
  $strongarm->value = '#TIME#<br />';
  $export['gcal_events_template_time_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_template_title_gcal_events-0';
  $strongarm->value = '#TITLE#';
  $export['gcal_events_template_title_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_timeformat';
  $strongarm->value = 'g:ia';
  $export['gcal_events_timeformat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_timeformat_gcal_events-0';
  $strongarm->value = '';
  $export['gcal_events_timeformat_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_timezone';
  $strongarm->value = 'Africa/Kigali';
  $export['gcal_events_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gcal_events_today_only_gcal_events-0';
  $strongarm->value = 0;
  $export['gcal_events_today_only_gcal_events-0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'none';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = 'default';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_countries_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_countries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_profile_occupation_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_profile_occupation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_story_topics_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_story_topics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'porto_sub';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_porto_sub_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/images/logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumbs' => 1,
    'sticky_header' => 1,
    'logo_height' => '150',
    'sticky_logo_height' => '100',
    'blog_image' => 'full',
    'blog_image_slider' => 1,
    'blog_share' => 1,
    'skin_color' => '0088cc',
    'secondary_color' => 'E36159',
    'tertiary_color' => '2BAAB1',
    'quaternary_color' => '383f48',
    'background_color' => 'light',
    'site_layout' => 'wide',
    'body_background' => 'porto_backgrounds',
    'background_select' => 'blizzard',
    'body_background_color' => 'CCCCCC',
    'portfolio_columns' => 'col-md-3',
    'user_css' => '',
    'ribbon' => 0,
    'ribbon_text' => 'Get In Touch',
    'options__active_tab' => 'edit-general',
  );
  $export['theme_porto_sub_settings'] = $strongarm;

  return $export;
}
