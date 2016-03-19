<?php

/**
 * @file
 * Default theme implementation for entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="col-md-">
		<div class="col-md-6">
	    <h2<?php print $title_attributes; ?>>
	        <?php print $title; ?>
	    </h2>
		  <?php print render($content['field_pub_fig_unit'])?>
		</div>
		<div class="col-md-3">
		  <h2><?php print render($content['field_pub_fig_values']['#items'][0]['tabledata'][1][1])?></h2>
		  <?php print render($content['field_pub_fig_values']['#items'][0]['tabledata'][0][1])?>
		</div>	
		<?php
			$actual_value = floatval(str_replace(",","",$content['field_pub_fig_values']['#items'][0]['tabledata'][1][1]));
			$previous_value = floatval(str_replace(",","",$content['field_pub_fig_values']['#items'][0]['tabledata'][1][0]));
			$change = $actual_value - $previous_value;
			if(is_numeric($change)){
				($change > 0) ? $class = 'fa fa-arrow-circle-up fa-3x text-success' : $class = 'fa fa-arrow-circle-down fa-3x text-danger' ;
				$change = number_format(($change / $previous_value) * 100,'2') . " %";	
			}else{
				$change = '...';	
			}
		
		?>
		<div class="col-md-3">
		  <div style="float:right"><i class="<?php print $class;?>"></i></div>
		  <div><h2><?php print $change ?></h2></div>
		  <div><?php print t('from the corresponding previous year') . ' (' . $content['field_pub_fig_values']['#items'][0]['tabledata'][0][0] . ')' ?></div>
		</div>
	</div>
	<div class="content col-md-12"<?php print $content_attributes; ?>>
	  <?php 
	    	hide($content['field_pub_fig_values']);  
	  		print render($content);
	  ?>
	</div>
</div>

