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

