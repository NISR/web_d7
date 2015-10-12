<?php
/**
 * @file
 * publication_features.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function publication_features_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Gender',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 31,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/gender',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 26,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/agriculture',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Businesses',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 27,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/businesses',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'CPI',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/cpi',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.',
    'format' => 'filtered_html',
    'weight' => 29,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/education',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Monitory Poverty',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/monitory-poverty',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/poverty',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Infrastructure and Industry',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 33,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/infrastructure-and-industry',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Trade and Services',
    'description' => NULL,
    'format' => NULL,
    'weight' => 37,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/trade-and-services',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tertiary',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/tertiary',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Employment and Labor',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 30,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/employment-and-labor',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Economy',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 28,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/economy',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'National Accounts/Gross Domestic Product',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/national-accountsgross-domestic-product',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Construction and Real Estate',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/construction-and-real-estate',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Compilations',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 38,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/compilations',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/business',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Non-Monitory Porvety',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/non-monitory-porvety',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Yearbook',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/yearbook',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Economic Activity',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/economic-activity',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Labor Force',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/labor-force',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Inflation and price indices',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/inflation-and-price-indices',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty and Social Protection',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 36,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/poverty-and-social-protection',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labor Market',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 2,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/labor-market',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Population',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/population',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Regional',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/regional',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Primary and Secondary',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/primary-and-secondary',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Financial Account Portfolio',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/financial-account-portfolio',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Births, Deaths and Marriages',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/births-deaths-and-marriages',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Health',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 32,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/health',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'TPI',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 2,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/tpi',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'People, Population and Communities/Demography',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 35,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/people-population-and-communitiesdemography',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Establishment',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/establishment',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'DHS',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 0,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/dhs',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Manufacturing',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/manufacturing',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Vocational and Technical',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.',
    'format' => 'filtered_html',
    'weight' => 2,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/vocational-and-technical',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Mining and Quarrying',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 2,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/mining-and-quarrying',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Trade',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/trade',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  $terms[] = array(
    'name' => 'Justice and Human Rights',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 34,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/justice-and-human-rights',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'PPI',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.',
    'format' => 'filtered_html',
    'weight' => 1,
    'vocabulary_machine_name' => 'subjects',
    'url_alias' => array(
      0 => array(
        'alias' => 'statistical_publications/ppi',
        'language' => 'und',
      ),
    ),
    'parent' => array(
      0 => NULL,
    ),
  );
  return $terms;
}
