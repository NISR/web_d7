<?php

/**
 * @file
 * Utility functions
 */
 
/*
 * Get all terms from a particular vocabulary as a renderable array
 *
 * @param
 *		$vocabulary : the vocabulary's machine name
 *
 * @return
 *		renderable array of terms
 *
 */
function get_taxonomy_terms($vocabulary){
	$voc = taxonomy_vocabulary_machine_name_load($vocabulary);	
	$subjects = taxonomy_get_tree($voc->vid,0,2); // stop to 2-level
	
	$terms = array();
	
	foreach($subjects as $subject){
		if($subject->depth == 0){
			$terms[$subject->tid] = array('name' => $subject->name,'children' => array());
		}else{
			$terms[$subject->parents[0]]['children'][$subject->tid] = $subject->name; 		
		}
	} 

	$render = array("wrapper" => array("#prefix" => "<div class='row featured-boxes'>"));
	foreach($terms as $key => $value){
		$render['wrapper'][$key] = array(
								'#prefix' => "<div class='col-md-3'><div class='featured-content featured-box'><div class='box-content'>",
								'#suffix' => "</div></div></div>",
								'markup' => array(
											  '#theme' => 'link',
											  '#text' => strlen($value['name']) > 30 ? substr($value['name'],0,27) . '...' : $value['name'],
											  '#path' => 'page/term/' . $key,
											  '#options' => array(
											  							 'attributes' => array('title' => $value['name'],),
											  							 'html' => TRUE
											  							),
											  '#prefix' => '<h3>',
											  '#suffix' => '</h3>'
											  
											)
					 		);		
		if(count($value['children'])){
			$render['wrapper'][$key]['children']['#prefix'] = "<ul class='subject-box-wrapper-items'>";
			$render['wrapper'][$key]['children']['#suffix'] = "</ul>";			
			foreach($value['children'] as $k => $v){
				$render['wrapper'][$key]['children'][] = array(
													 '#theme' => 'link',
												    '#text' => strlen($v) > 30 ? substr($v,0,27) . '...' : $v,
												    '#path' => 'page/term/' . $k,
												    '#options' => array(
												    						'attributes' => array('title' => $v),
												    						'html' => TRUE
												    					),
												    '#prefix' => "<li class='subject-box-item'>",
												    '#suffix' => "</li>",
												  );		
			}	
		}
	}

	$render['wrapper']['#suffix'] = "</div>";
	
	return $render;
}


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
				'title' => !isset($view->display[$display]->display_options['title'])? '' : $view->display[$display]->display_options['title'],
				'result' => $view->preview(),
				'count' => count($view->result),
					);

}
/*
 * Get a term label, just the label not the entire freaking term object
 *
 * @param
 * 	$term_id : the term id
 * 
 * @return
 *		term label
 */
function get_taxonomy_term_label($tid){
	$term = taxonomy_term_load($tid);
	
	return $term->name;
}


