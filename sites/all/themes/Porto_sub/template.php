<?php
/*
 * Prefix your custom functions with porto_sub. For example:
 * porto_sub_form_alter(&$form, &$form_state, $form_id) { ... }
 */

/*
 * Implements hook preprocess_page
 */
function porto_sub_preprocess_page(&$variables){
	if($variables['is_front']){
		//Add the search box on the frontpage
		$form = drupal_get_form('search_block_form');
		$variables['search'] = drupal_render($form);
	}
}


function porto_sub_process(&$variables, $hook) {
  if (isset($variables['elements']['#entity_type'])) { // or maybe check for $hook name
    $function = __FUNCTION__ . '_' . $variables['elements']['#entity_type'];
    if (function_exists($function)) {
      $function($variables, $hook);
    }
  }
}

/**
 * Implements hook_process().
 */
function porto_sub_process_field_collection_item(&$variables) {
  if ($variables['entity_type'] == 'field_collection_item'
     && $variables['elements']['#bundle'] == 'field_profile_pi') {
    global $user;
  
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
    $content['username'] = $user->name;
    $content['usermail'] = $user->mail;
    $content['password'] = t('Hidden') . '&nbsp;' . 
    								l(t('change password'),'user/' . $user->uid . '/edit',
    									array('query' => array('destination' => 'profile'),
    											'attributes' => array('class' => array('italic'))
    									     )    									
    							   	);
    $content['full_name'] = $name;
            
    return;
  }
}

