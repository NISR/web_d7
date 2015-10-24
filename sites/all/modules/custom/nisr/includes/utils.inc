<?php

/**
 * @file
 * Utility functions
 */
 
/*
 * Get a view result with its row count to check 
 * whether one should add a more button under the result list
 *  
 * param
 *		@name : the view name
 *	param
 *		@display : the view display name
 * param
 *		@filters : array of contextual filters
 *	return
 *		array made of view title, view result and view row count
 */
function get_embed_view($name,$display,$filters){
	$view = views_get_view($name);
	
	$view->set_display($display);
	$view->set_arguments($filters);
	$view->execute();

	return array(
				'title' => $view->display[$display]->display_options['title'],
				'result' => $view->preview(),
				'count' => count($view->result),
					);

}