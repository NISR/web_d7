<?php
/*
 * Prefix your custom functions with porto_sub. For example:
 * porto_sub_form_alter(&$form, &$form_state, $form_id) { ... }
 */

/**
 * Overrides theme_item_list().
 */
function porto_sub_item_list($variables) {
	
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];

  if ($variables['attributes']['class'][0] == 'pager') {
  	$variables['attributes']['class'] = 'pagination pagination-lg pull-right';
  }
    
  $attributes = $variables['attributes'];

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = '';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      
      //if ( is_array($item) && in_array('pager-current', $item['class'])) {
      if ( isset($item['class']) && is_array($item) && in_array('pager-current', $item['class'])) {
        $item['class'] = array('active');
        $item['data'] = '<a href="#">' . $item['data'] . '</a>';
      }

      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
      }
      
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }
  
  return $output;

}
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

/*
 * Implements hook_link
 */
function porto_sub_link($variables) {
	$variables['options']['html'] = TRUE;
   return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}

/*
 * Implements hook_preprocess_views_view_formatted
 */
function porto_sub_preprocess_views_view_unformatted(&$vars){
  if($vars['view']->name == 'twitter_messages'){
    $secondary_ad_block = module_invoke('nodesinblock','block_view',1);
    $vars['secondary_ad_block'] = trim($secondary_ad_block['content']);
  }
}
