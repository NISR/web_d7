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
<div onclick="javascript:window.open('statistical-publications/all/figures','_self')" class="figure-wrapper <?php print $classes; ?> clearfix recent-posts"<?php print $attributes; ?>>
	<div class="col-md-8 figure-credentials">
		<div class="figure-name"><?php print $title ?></div>
		<div class="figure-unit"><?php print render($content['field_pub_fig_unit'])?></div>	
		<div class="figure-period"><?php print render($content['field_pub_fig_values']['#items'][0]['tabledata'][0][1])?></div>
	</div>
	<div class="col-md-4">
		<div class="figure-value"><h1><?php print render($content['field_pub_fig_values']['#items'][0]['tabledata'][1][1])?></h1></div>
	</div>
</div>

