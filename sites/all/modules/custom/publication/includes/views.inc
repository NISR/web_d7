/**
  * Implements hook_views_api().
  */
function publication_views_api() {
  return array(
    'api' => 3,
    'path' => drupal_get_path('module', 'publication'),
  );
}

/*
 * Implements hook_views_pre_render(&$view)
 */
function publication_views_pre_render(&$view){
	if($view->name == 'statistical_reports_search' && $view->current_display == 'page'){
		// Build breadcrumb
		count($view->args)? $parents  = taxonomy_get_parents_all($view->args[0]) : $parents = array();		
		$breadcrumb = array();
		$breadcrumb[] = l(t('Home'),'<front>');
		//$breadcrumb[] = l(t('Statistical publications'),'statistical_publications');
		
		foreach(array_reverse($parents) as $parent){
			$breadcrumb[] = l(t($parent->name),drupal_get_path_alias('taxonomy/term/' . $parent->tid));
		}
		
		if(count($view->args)) $breadcrumb[] = t('Statistical reports');
		drupal_set_breadcrumb($breadcrumb);
	}
}
