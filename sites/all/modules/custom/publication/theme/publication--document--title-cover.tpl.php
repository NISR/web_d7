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
<div class="publication-item-row">
	<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	  <div class="content publication-item-cover-wrapper"<?php print $content_attributes; ?>>
	  		<div class="publication-item-cover">
	    	<?php
	      	print render($content);
	    	?>
	  	</div>
	  </div>
	  
	  <?php if (!$page): ?>
	    <h4<?php print $title_attributes; ?>>
	      <?php if ($url): ?>
	        <div class="publication-item-title">
	        	<a href="<?php print $url; ?>"><?php print $title; ?></a>
			  </div>      
	      <?php else: ?>
	        <?php print $title; ?>
	      <?php endif; ?>
	    </h4>
	  <?php endif; ?>
	</div>
</div>
