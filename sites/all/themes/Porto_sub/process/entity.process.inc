<?php

/**
 * Implements hook_process().
 */
function porto_sub_process_entity(&$variables) {
  dpm($variables);
  if ($variables['entity_type'] == 'field_collection_item'
     && $variables['elements']['#bundle'] == 'field_profile_pi') {
    $content = &$variables['content'];
    $name_fields = array(
    //'field_pi_salutation',
      'field_pi_firstname',
      'field_pi_lastname'
    );
    foreach ($name_fields as $name_field) {
      if (isset($content[$name_field])) {
        $name = (empty($name) ? '' : $name . ' ') . $content[$name_field][0]['#markup'];
        hide($content[$name_field]);
      }
    }
    $content['full_name'] = $name;
    return;
  }
}