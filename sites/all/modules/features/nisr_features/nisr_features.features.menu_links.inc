<?php
/**
 * @file
 * nisr_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nisr_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about-us_board-of-directors:node/145.
  $menu_links['menu-about-us_board-of-directors:node/145'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/145',
    'router_path' => 'node/%',
    'link_title' => 'Board of Directors',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_board-of-directors:node/145',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_organizational-structure:node/61',
  );
  // Exported menu link: menu-about-us_censuses:node/142.
  $menu_links['menu-about-us_censuses:node/142'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/142',
    'router_path' => 'node/%',
    'link_title' => 'Censuses',
    'options' => array(
      'attributes' => array(
        'title' => 'Census',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_censuses:node/142',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-deputy-director-general:node/137',
  );
  // Exported menu link: menu-about-us_competition:node/682.
  $menu_links['menu-about-us_competition:node/682'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/682',
    'router_path' => 'node/%',
    'link_title' => 'Competition',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_competition:node/682',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_development-partners:node/176.
  $menu_links['menu-about-us_development-partners:node/176'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/176',
    'router_path' => 'node/%',
    'link_title' => 'Development Partners',
    'options' => array(
      'attributes' => array(
        'title' => 'Development Partners',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_development-partners:node/176',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_partnerships:node/94',
  );
  // Exported menu link: menu-about-us_economic-statistics:node/143.
  $menu_links['menu-about-us_economic-statistics:node/143'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/143',
    'router_path' => 'node/%',
    'link_title' => 'Economic Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Economic Statistics',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_economic-statistics:node/143',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-deputy-director-general:node/137',
  );
  // Exported menu link: menu-about-us_educational--research-institutions:node/177.
  $menu_links['menu-about-us_educational--research-institutions:node/177'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/177',
    'router_path' => 'node/%',
    'link_title' => 'Educational & Research Institutions',
    'options' => array(
      'attributes' => array(
        'title' => 'Educational & Research Institutions',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_educational--research-institutions:node/177',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-about-us_partnerships:node/94',
  );
  // Exported menu link: menu-about-us_finance:node/139.
  $menu_links['menu-about-us_finance:node/139'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/139',
    'router_path' => 'node/%',
    'link_title' => 'Finance',
    'options' => array(
      'attributes' => array(
        'title' => 'Finance',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_finance:node/139',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-the-head-of-corporate-services:node/136',
  );
  // Exported menu link: menu-about-us_government-partners:node/178.
  $menu_links['menu-about-us_government-partners:node/178'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/178',
    'router_path' => 'node/%',
    'link_title' => 'Government Partners',
    'options' => array(
      'attributes' => array(
        'title' => 'Government partners',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_government-partners:node/178',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-about-us_partnerships:node/94',
  );
  // Exported menu link: menu-about-us_human-resources-and-administration-:node/138.
  $menu_links['menu-about-us_human-resources-and-administration-:node/138'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/138',
    'router_path' => 'node/%',
    'link_title' => 'Human Resources and Administration ',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_human-resources-and-administration-:node/138',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-the-head-of-corporate-services:node/136',
  );
  // Exported menu link: menu-about-us_infographic-competition-2012:http://statistics.gov.rw/about-us/competition/infographic-competition-2012.
  $menu_links['menu-about-us_infographic-competition-2012:http://statistics.gov.rw/about-us/competition/infographic-competition-2012'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'http://statistics.gov.rw/about-us/competition/infographic-competition-2012',
    'router_path' => '',
    'link_title' => 'Infographic competition 2012',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_infographic-competition-2012:http://statistics.gov.rw/about-us/competition/infographic-competition-2012',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_competition:node/682',
  );
  // Exported menu link: menu-about-us_infographic-competition-2013:http://statistics.gov.rw/about-us/competition/infographic-competition-2013.
  $menu_links['menu-about-us_infographic-competition-2013:http://statistics.gov.rw/about-us/competition/infographic-competition-2013'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'http://statistics.gov.rw/about-us/competition/infographic-competition-2013',
    'router_path' => '',
    'link_title' => 'Infographic competition 2013',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_infographic-competition-2013:http://statistics.gov.rw/about-us/competition/infographic-competition-2013',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_competition:node/682',
  );
  // Exported menu link: menu-about-us_infographic-competition-2014:http://www.statistics.gov.rw/about-us/competition/infographic-competition-2014.
  $menu_links['menu-about-us_infographic-competition-2014:http://www.statistics.gov.rw/about-us/competition/infographic-competition-2014'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'http://www.statistics.gov.rw/about-us/competition/infographic-competition-2014',
    'router_path' => '',
    'link_title' => 'Infographic competition 2014',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_infographic-competition-2014:http://www.statistics.gov.rw/about-us/competition/infographic-competition-2014',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_competition:node/682',
  );
  // Exported menu link: menu-about-us_information-and-communication-technology:node/140.
  $menu_links['menu-about-us_information-and-communication-technology:node/140'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/140',
    'router_path' => 'node/%',
    'link_title' => 'Information and Communication Technology',
    'options' => array(
      'attributes' => array(
        'title' => 'Information and Communication Technology',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_information-and-communication-technology:node/140',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-deputy-director-general:node/137',
  );
  // Exported menu link: menu-about-us_national-statistical-system:http://www.statistics.gov.rw/about-us/national-statistical-system.
  $menu_links['menu-about-us_national-statistical-system:http://www.statistics.gov.rw/about-us/national-statistical-system'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'http://www.statistics.gov.rw/about-us/national-statistical-system',
    'router_path' => '',
    'link_title' => 'National Statistical System',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_national-statistical-system:http://www.statistics.gov.rw/about-us/national-statistical-system',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_newsletter-subscription:node/1115.
  $menu_links['menu-about-us_newsletter-subscription:node/1115'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/1115',
    'router_path' => 'node/%',
    'link_title' => 'Newsletter Subscription',
    'options' => array(
      'attributes' => array(
        'title' => 'Newsletter',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_newsletter-subscription:node/1115',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_office-of-deputy-director-general:node/137.
  $menu_links['menu-about-us_office-of-deputy-director-general:node/137'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/137',
    'router_path' => 'node/%',
    'link_title' => 'Office of Deputy Director General',
    'options' => array(
      'attributes' => array(
        'title' => 'Office of the Deputy Director General - Studies and Programs',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_office-of-deputy-director-general:node/137',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_organizational-structure:node/61',
  );
  // Exported menu link: menu-about-us_office-of-the-director-general:node/60.
  $menu_links['menu-about-us_office-of-the-director-general:node/60'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/60',
    'router_path' => 'node/%',
    'link_title' => 'Office of the Director General',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_office-of-the-director-general:node/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_organizational-structure:node/61',
  );
  // Exported menu link: menu-about-us_office-of-the-head-of-corporate-services:node/136.
  $menu_links['menu-about-us_office-of-the-head-of-corporate-services:node/136'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/136',
    'router_path' => 'node/%',
    'link_title' => 'Office of the Head of Corporate Services',
    'options' => array(
      'attributes' => array(
        'title' => 'Office of the Head of Corporate Services',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_office-of-the-head-of-corporate-services:node/136',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_organizational-structure:node/61',
  );
  // Exported menu link: menu-about-us_office-of-the-spiu-coordinator:http://statistics.gov.rw/about-us/organizational-structure/spiu-coordinator.
  $menu_links['menu-about-us_office-of-the-spiu-coordinator:http://statistics.gov.rw/about-us/organizational-structure/spiu-coordinator'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'http://statistics.gov.rw/about-us/organizational-structure/spiu-coordinator',
    'router_path' => '',
    'link_title' => 'Office of the SPIU Coordinator',
    'options' => array(
      'attributes' => array(
        'title' => 'Office of the SPIU Coordinator',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_office-of-the-spiu-coordinator:http://statistics.gov.rw/about-us/organizational-structure/spiu-coordinator',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_organizational-structure:node/61',
  );
  // Exported menu link: menu-about-us_organizational-structure:node/61.
  $menu_links['menu-about-us_organizational-structure:node/61'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Organizational Structure',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_organizational-structure:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_overview:node/39.
  $menu_links['menu-about-us_overview:node/39'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_overview:node/39',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_partnerships:node/94.
  $menu_links['menu-about-us_partnerships:node/94'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/94',
    'router_path' => 'node/%',
    'link_title' => 'Partnerships',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_partnerships:node/94',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_procurement:http://statistics.gov.rw/about-us/organizational-structure/office-deputy-director-general-corporate-services/procurement.
  $menu_links['menu-about-us_procurement:http://statistics.gov.rw/about-us/organizational-structure/office-deputy-director-general-corporate-services/procurement'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'http://statistics.gov.rw/about-us/organizational-structure/office-deputy-director-general-corporate-services/procurement',
    'router_path' => '',
    'link_title' => 'Procurement',
    'options' => array(
      'attributes' => array(
        'title' => 'Procurement',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_procurement:http://statistics.gov.rw/about-us/organizational-structure/office-deputy-director-general-corporate-services/procurement',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-the-head-of-corporate-services:node/136',
  );
  // Exported menu link: menu-about-us_services:node/120.
  $menu_links['menu-about-us_services:node/120'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_services:node/120',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-about-us_social-and-demographic-statistics:node/144.
  $menu_links['menu-about-us_social-and-demographic-statistics:node/144'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/144',
    'router_path' => 'node/%',
    'link_title' => 'Social and Demographic Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Social and Demographic Statistics',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_social-and-demographic-statistics:node/144',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-deputy-director-general:node/137',
  );
  // Exported menu link: menu-about-us_statistical-institutions:node/179.
  $menu_links['menu-about-us_statistical-institutions:node/179'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/179',
    'router_path' => 'node/%',
    'link_title' => 'Statistical Institutions',
    'options' => array(
      'attributes' => array(
        'title' => 'Statistical Institutions',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_statistical-institutions:node/179',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-about-us_partnerships:node/94',
  );
  // Exported menu link: menu-about-us_statistical-methods-research-and-publications:node/141.
  $menu_links['menu-about-us_statistical-methods-research-and-publications:node/141'] = array(
    'menu_name' => 'menu-about-us',
    'link_path' => 'node/141',
    'router_path' => 'node/%',
    'link_title' => 'Statistical Methods, Research and Publications',
    'options' => array(
      'attributes' => array(
        'title' => 'Statistical Methods, Research and Publications',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-about-us_statistical-methods-research-and-publications:node/141',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-about-us_office-of-deputy-director-general:node/137',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Board of Directors');
  t('Censuses');
  t('Competition');
  t('Development Partners');
  t('Economic Statistics');
  t('Educational & Research Institutions');
  t('Finance');
  t('Government Partners');
  t('Human Resources and Administration ');
  t('Infographic competition 2012');
  t('Infographic competition 2013');
  t('Infographic competition 2014');
  t('Information and Communication Technology');
  t('National Statistical System');
  t('Newsletter Subscription');
  t('Office of Deputy Director General');
  t('Office of the Director General');
  t('Office of the Head of Corporate Services');
  t('Office of the SPIU Coordinator');
  t('Organizational Structure');
  t('Overview');
  t('Partnerships');
  t('Procurement');
  t('Services');
  t('Social and Demographic Statistics');
  t('Statistical Institutions');
  t('Statistical Methods, Research and Publications');

  return $menu_links;
}
