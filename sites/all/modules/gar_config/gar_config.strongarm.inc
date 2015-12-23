<?php
/**
 * @file
 * gar_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gar_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_access_token';
  $strongarm->value = 'ya29.UwJyVv0ynvo30fNTIAvepy0oDcRr5_unUpmAq9h7EA3tJXznDACy53qs4mIRD948YNAZGg';
  $export['google_analytics_reports_api_access_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_cache_length';
  $strongarm->value = '259200';
  $export['google_analytics_reports_api_cache_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_client_id';
  $strongarm->value = '705323168401-06ht3kmn58s00se44auudrr7q2q1nidv.apps.googleusercontent.com';
  $export['google_analytics_reports_api_client_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_client_secret';
  $strongarm->value = 'H0zNpu93sOIvyx-U-rewRYKa';
  $export['google_analytics_reports_api_client_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_default_page';
  $strongarm->value = '/';
  $export['google_analytics_reports_api_default_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_expires_at';
  $strongarm->value = 1450916670;
  $export['google_analytics_reports_api_expires_at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_profile_id';
  $strongarm->value = '56681705';
  $export['google_analytics_reports_api_profile_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_api_refresh_token';
  $strongarm->value = '1/wZrxhDQPKL5afBdTdl2WVd6HibQumbZKMPwOvjyVkiFIgOrJDtdun6zK6XiATCKT';
  $export['google_analytics_reports_api_refresh_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_metadata_etag';
  $strongarm->value = '"-eNDYzXMXVT28ykoI8oexeOT-4U/rpEa9biDvljZY3s7Zm1yy496ty8"';
  $export['google_analytics_reports_metadata_etag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_reports_metadata_last_time';
  $strongarm->value = 1450778184;
  $export['google_analytics_reports_metadata_last_time'] = $strongarm;

  return $export;
}
