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
    'name' => 'Justice and Human Rights',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 34,
    'uuid' => '04a628ba-db1a-49c1-a584-7e8535379ff4',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Procurement plan',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '04bb4185-5873-47e9-9fe3-e8a08821decf',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Season C',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '05acac24-75ce-4b35-856c-2a0f92545889',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Births, Deaths and Marriages',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '0bc67f28-f303-4f78-bd39-f573c6e66fac',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '1083d244-be02-4485-920d-41b57bfa1e3a',
    ),
  );
  $terms[] = array(
    'name' => 'Construction and Real Estate',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0da99027-9621-4dc9-b083-fc722f17eac1',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'b2261077-6ed6-4c12-a7a3-7b9de9a0d2ce',
    ),
  );
  $terms[] = array(
    'name' => 'People, Population and Communities/Demography',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 35,
    'uuid' => '1083d244-be02-4485-920d-41b57bfa1e3a',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 29,
    'uuid' => '1b225b7c-18c4-47bd-83c7-16ee98a3f1d8',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Yearbook',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '1badb282-01ee-4efa-92e0-fca5d98eb93d',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'e1037847-5722-462f-8a73-a2d39854e651',
    ),
  );
  $terms[] = array(
    'name' => 'Tertiary',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '1bef5d88-0f55-443e-89d4-39e7e79d7734',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '1b225b7c-18c4-47bd-83c7-16ee98a3f1d8',
    ),
  );
  $terms[] = array(
    'name' => 'Primary and Secondary',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1c62d515-d5c9-451e-bcaa-084407670feb',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '1b225b7c-18c4-47bd-83c7-16ee98a3f1d8',
    ),
  );
  $terms[] = array(
    'name' => 'PPI',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '1cc3e0e0-7cec-4636-ac8c-eb6ce84a9abf',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'acef122a-56bf-49f7-a1ac-d5dd052d939c',
    ),
  );
  $terms[] = array(
    'name' => 'Non-Monitory Porvety',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '21680279-7f54-4df6-ada4-1705ffc99f0e',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'e570f152-83a3-4b87-afae-8a52b1b2cf7c',
    ),
  );
  $terms[] = array(
    'name' => 'Regional',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '26f09f42-8f87-4408-939d-c1abd9a4be01',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'e1037847-5722-462f-8a73-a2d39854e651',
    ),
  );
  $terms[] = array(
    'name' => 'CPI',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => 2,
    'weight' => 0,
    'uuid' => '2bfba38b-194b-41c8-b5df-a83b109b2c64',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'acef122a-56bf-49f7-a1ac-d5dd052d939c',
    ),
  );
  $terms[] = array(
    'name' => 'Season A',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2e9098ab-8da3-4905-b746-c1abd0a6320d',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Documentation',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '33511fc8-4be0-4a5f-a206-3a7a4fcce8af',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => 'Click here to find  statistical reports on a variety of industries and business conditions ',
    'format' => 2,
    'weight' => 0,
    'uuid' => '347ba22c-aa4f-4ed0-a049-0ed722b22f4c',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'fbc7423e-9f9c-407d-9da4-06dc9aae3e95',
    ),
  );
  $terms[] = array(
    'name' => 'Labor Force',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '3bd03c20-4d4b-41e9-8f96-9fd41b034ada',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'bf644e93-c957-4f13-a423-3900d26830d1',
    ),
  );
  $terms[] = array(
    'name' => 'Establishment',
    'description' => 'These publications provides a quantitative profile of all establishments in the country, excluding governmental establishments providing not-for-sale governmental services.',
    'format' => 2,
    'weight' => 1,
    'uuid' => '3e46f685-b844-458e-b1ae-cb3ca32223b5',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'fbc7423e-9f9c-407d-9da4-06dc9aae3e95',
    ),
  );
  $terms[] = array(
    'name' => 'Last 6 months',
    'description' => '',
    'format' => 2,
    'weight' => 1,
    'uuid' => '40e9b8cc-99c6-4778-9c1c-1aa9ea76a052',
    'vocabulary_machine_name' => 'publication_elapsed_period',
    'field_ep_days' => array(
      'und' => array(
        0 => array(
          'value' => 182,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Fiscal year',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '52ea29dc-ff25-4757-91b2-9e1cc8992984',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Annual reports',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5814a811-587a-4822-aa37-1e41dfda3972',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Season B',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5dac3eeb-5e94-4fd3-b4c2-85086ea35524',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Gross Domestic Product',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => 2,
    'weight' => 0,
    'uuid' => '60cf69df-43be-4a7b-9a30-471bec1de8a8',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'a05d0dda-fad9-4c04-8604-a8b1103a3291',
    ),
  );
  $terms[] = array(
    'name' => 'Last 12 months',
    'description' => '',
    'format' => 2,
    'weight' => 2,
    'uuid' => '687077ee-8bf3-4aed-9244-4e4eb956e627',
    'vocabulary_machine_name' => 'publication_elapsed_period',
    'field_ep_days' => array(
      'und' => array(
        0 => array(
          'value' => 365,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Vocational and Technical',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 2,
    'uuid' => '6dd5e1c8-a23d-4d69-a007-f1097253828f',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '1b225b7c-18c4-47bd-83c7-16ee98a3f1d8',
    ),
  );
  $terms[] = array(
    'name' => 'Financial Account Portfolio',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => '75dcf979-4963-4ef2-8639-b3965827362e',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '91eb5da4-0e98-4e01-9b7f-a212657214b9',
    ),
  );
  $terms[] = array(
    'name' => 'NSDS',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '79b88af7-a447-43e7-a22b-960b36f33fec',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Trade',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7a9058cf-ef17-489d-a0c0-fb8718a99747',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '91eb5da4-0e98-4e01-9b7f-a212657214b9',
    ),
  );
  $terms[] = array(
    'name' => 'Quarter',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '865f23e3-4a7c-4d3a-9e34-fdb55b8659a4',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Gender',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 31,
    'uuid' => '8a42cfdd-9006-452b-ab01-06286ba7d18c',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Labor Market',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8f1e5020-a6fe-40da-b35e-eddaaf83a348',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'bf644e93-c957-4f13-a423-3900d26830d1',
    ),
  );
  $terms[] = array(
    'name' => 'Visa',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '90ce100e-ccda-4b0f-a371-b0e587693a8d',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => '<p>This section covers the economic situation in agriculture and it presents the main economic and agricultural data at national level</p>',
    'format' => 2,
    'weight' => 7,
    'uuid' => '9155d45e-3486-48f9-abe7-d0ced1a253ec',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Trade and Services',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 37,
    'uuid' => '91eb5da4-0e98-4e01-9b7f-a212657214b9',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Health',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 32,
    'uuid' => '934b5c82-21f5-4adf-ad2c-ce202c44f27a',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Economy',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => 2,
    'weight' => 25,
    'uuid' => 'a05d0dda-fad9-4c04-8604-a8b1103a3291',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Standards and Methods',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a213b5c7-dd0b-4dc5-bf0b-c10069d24b0a',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Last 30 days',
    'description' => '',
    'format' => 2,
    'weight' => 0,
    'uuid' => 'ac98fec3-07c0-4c31-9be7-a7ce890e1dea',
    'vocabulary_machine_name' => 'publication_elapsed_period',
    'field_ep_days' => array(
      'und' => array(
        0 => array(
          'value' => 30,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Inflation and price indices',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'acef122a-56bf-49f7-a1ac-d5dd052d939c',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'a05d0dda-fad9-4c04-8604-a8b1103a3291',
    ),
  );
  $terms[] = array(
    'name' => 'Maps',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'af312d4c-2edb-4326-9580-548212350db7',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'TPI',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'afc36930-1ad2-41ae-b01f-df5ea5c8ddf0',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'acef122a-56bf-49f7-a1ac-d5dd052d939c',
    ),
  );
  $terms[] = array(
    'name' => 'Infrastructure and Industry',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 33,
    'uuid' => 'b2261077-6ed6-4c12-a7a3-7b9de9a0d2ce',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Mining and Quarrying',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'bd2a4590-f5d8-45da-bc7e-1c9a723a8316',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'b2261077-6ed6-4c12-a7a3-7b9de9a0d2ce',
    ),
  );
  $terms[] = array(
    'name' => 'Employment and Labor',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 30,
    'uuid' => 'bf644e93-c957-4f13-a423-3900d26830d1',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Rwanda in figures',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c897224e-d223-4fd2-94d2-2f3b3df0d9c4',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Last 5 years',
    'description' => '',
    'format' => 2,
    'weight' => 3,
    'uuid' => 'd6489217-a66f-43cc-9f67-dac326987fdc',
    'vocabulary_machine_name' => 'publication_elapsed_period',
    'field_ep_days' => array(
      'und' => array(
        0 => array(
          'value' => 745,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Monitory Poverty',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'd738e745-21bc-4e60-ba26-d43b49076d71',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'e570f152-83a3-4b87-afae-8a52b1b2cf7c',
    ),
  );
  $terms[] = array(
    'name' => 'Poverty and Social Protection',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 36,
    'uuid' => 'dc774b28-3700-4235-b993-39db95712112',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Manufacturing',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'de8b7fb6-978a-48fe-a72c-c9272f178d44',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'b2261077-6ed6-4c12-a7a3-7b9de9a0d2ce',
    ),
  );
  $terms[] = array(
    'name' => 'Population',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e0a955c0-5c2a-44ae-962c-dfe71bead392',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '1083d244-be02-4485-920d-41b57bfa1e3a',
    ),
  );
  $terms[] = array(
    'name' => 'Others',
    'description' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat</p>',
    'format' => 2,
    'weight' => 38,
    'uuid' => 'e1037847-5722-462f-8a73-a2d39854e651',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Poverty',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e570f152-83a3-4b87-afae-8a52b1b2cf7c',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'dc774b28-3700-4235-b993-39db95712112',
    ),
  );
  $terms[] = array(
    'name' => 'DHS',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef8c4185-b9a1-418b-83cf-78ffefa63b45',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => '934b5c82-21f5-4adf-ad2c-ce202c44f27a',
    ),
  );
  $terms[] = array(
    'name' => 'Economic Activity',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'fb8fcc0b-1feb-43e4-852d-29588e5ccea9',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
    'parent' => array(
      0 => 'bf644e93-c957-4f13-a423-3900d26830d1',
    ),
  );
  $terms[] = array(
    'name' => 'Businesses',
    'description' => '
This section contains economic indicators which cover statistical data that can be useful for any business research and it provides baseline data on the business sector and enterprises.',
    'format' => 2,
    'weight' => 20,
    'uuid' => 'fbc7423e-9f9c-407d-9da4-06dc9aae3e95',
    'vocabulary_machine_name' => 'statistical_publications_types',
    'field_pub_dataset' => array(),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Release calendar',
    'description' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat',
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fca50e77-53c7-4154-b4fd-522bdfe7f6ec',
    'vocabulary_machine_name' => 'document_subjects',
    'url_alias' => array(),
  );
  return $terms;
}
