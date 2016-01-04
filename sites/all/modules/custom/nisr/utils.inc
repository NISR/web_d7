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
function get_taxonomy_terms($vocabulary,$path){
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
		$term_name = get_label_dashed($value['name']);
		$content = array(
								'#prefix' => "<div onclick=javascript:window.open('$path/$term_name','_self') class='col-md-3'><div class='featured-content featured-box'><div class='box-content'>",
								'#suffix' => "</div></div></div>",
								'title' => array(
											  '#theme' => 'link',
											  '#text' => strlen($value['name']) > 30 ? substr($value['name'],0,27) . '...' : $value['name'],
											  '#path' => "$path/$term_name",
											  '#options' => array(
											  							 'attributes' => array('title' => $value['name'],),
											  							 'html' => TRUE
											  							),
											  '#prefix' => '<h4>',
											  '#suffix' => '</h4>'
											  
														)
					 		 );	

		$render['wrapper'][$key] = $content;
			
					 
		if(count($value['children'])){
			$render['wrapper'][$key]['children']['#prefix'] = "<ul class='subject-box-wrapper-items'>";
			$render['wrapper'][$key]['children']['#suffix'] = "</ul>";			
			foreach($value['children'] as $k => $v){
				$term_name = str_replace(' ','-',strtolower($v));
				$render['wrapper'][$key]['children'][] = array(
													 '#theme' => 'link',
												    '#text' => strlen($v) > 30 ? substr($v,0,27) . '...' : $v,
												    '#path' => "$path/$term_name",
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
	
	$view->pre_execute();
	$view->execute();
	$view->render();

	return array(
				'title' => !isset($view->display[$display]->display_options['title'])? '' : $view->display[$display]->display_options['title'],
				'result' => $view->preview(),
				'count' => count($view->result),
					);

}
/*
 * Get an ordinary label from a dashed one
 *
 * @param
 * 	$label: the label passed into the url
 * 
 * @return
 *		string dashed label
 */
function get_label_formal($label){
	
	return ucfirst(str_replace('-',' ',$label));
	
}
/*
 * Get a label, lowercased with dashes in lieu of spaces
 * @param
 * 	string $label
 * 
 * @return
 *		Dashed formatted label
 */
function get_label_dashed($label){
	
	return str_replace(' ','-',strtolower($label));
	
}



