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

<div class="<?php print $classes; ?> clearfix col-md-12"<?php print $attributes; ?>>
		<div class="col-md-2" style="padding-top:7px;min-width:;max-width:112px;">
			<div class="cover"><?php print render($content['field_pub_cover'])?></div>
		</div>
		<div class="col-md-10" <?php print $content_attributes; ?>>
	   <?php if (!$page): ?>
			<h4<?php print $title_attributes; ?>>
			<?php if ($url): ?>
			  <a href="<?php print $url; ?>"><?php print $title; ?></a>
			<?php else: ?>
			  <?php print $title; ?>
			<?php endif; ?>
			</h4>
	   <?php endif; ?>
			<div class="body"><?php print render($content['field_pub_body'])?></div>
		</div>
</div>
