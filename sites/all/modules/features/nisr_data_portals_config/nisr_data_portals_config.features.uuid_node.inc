<?php
/**
 * @file
 * nisr_data_portals_config.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function nisr_data_portals_config_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Data portals',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1443539302,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40c5c4a3-4746-4b6b-b875-8bebdc90b46c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Following data portals are Rwanda specific adaptations of specific web-based data platforms. Each of these, has a dedicated database system, modeled for specific data types (microdata, aggregate data and geo-spatial data etc.) it contains. Providing interactive access, data and metadata in these data portals are directly populated by the National Institute of Statistics of Rwanda (NISR). Some data portals provide additional features, such as Application Programme Interface (API) and Web Services for automated data sharing.</p><div class="row featured-boxes"><a href=\'http://microdata.statistics.gov.rw\'><div class="col-md-3" onclick="javascript:window.open(\',\'_blank\')"><div class="featured-box featured-box-primary"><div class="box-content"><h3>NADA</h3><p>Dispenses metadata [survey documentation – questionnaires, technical documents and reports describing the surveys etc.; survey description – sampling frames and data collection information etc.; and data description – variables and counts etc.] and anonymized microdata of surveys (studies). Documentation and the file description for each study are available also in DDI (XML) and in Dublin Core (.rdf) respectively.</p></div></div></div></a><a href=\'http://devinfo.statistics.gov.rw\'><div class="col-md-3"><div class="featured-box featured-box-secondary" onclick="javascript:window.open(\'http://devinfo.statistics.gov.rw/di7web/libraries/aspx/Home.aspx\')"><div class="box-content"><h3>DevInfo</h3><p>Offers aggregate data in tables, graphs and maps organized in the structure of indicators, units of measurement, subgroups [gender (male/female), location (urban/rural), age groups and others], time periods, sources and geographic areas (national and sub-national levels). The Data Query Service - allows generating API calls, facilitating third-party applications to communicate directly with DevInfo to make queries and retrieve data in various formats. The Registry (SDMX) facilitates access to various web services function</p></div></div></div></a><a href=\'http://indicators.statistics.gov.rw\'><div class="col-md-3"><div class="featured-box featured-box-tertiary"><div class="box-content"><h3>Knoema</h3><p>Delivers visual discovery and advanced analytics utilizing aggregate data. The time series analysis, allows users to utilize a variety of advanced statistical functions.&nbsp; The dashboard designer facilitates creation of customized dashboards. Data, visualizations (including the maps) could be delivered via email and exported to various file formats including Excel, PDF and HTML.</p></div></div></div></a><a href=\'http://agol.statistics.gov.rw\'><div class="col-md-3"><div class="featured-box featured-box-quaternary"><div class="box-content"><h3>AGOL</h3><p>Adaptation of ArcGIS Online, this data portal offers statistics in the form of maps and location data. Maps can be viewed in native browser environment, downloaded in various formats and shared either through links or embedding in a website or blog. These maps contain documentation with details regarding the source, providing metadata that allows the users to understand how they were created.</p></div></div></div></div></a>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-09-29 18:08:22 +0300',
  'user_uuid' => '0ba20103-dd5e-4a28-ba96-a90ee7bf92be',
);
  return $nodes;
}
