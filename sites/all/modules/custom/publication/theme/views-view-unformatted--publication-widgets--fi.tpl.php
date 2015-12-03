<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 $featured_box = array("featured-box-primary","featured-box-secondary","featured-box-tertiary","featured-box-quaternary");
 $index = 0;
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
	<div class="col-md-12">
		<div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' featured-box '. $featured_box[$index++] .' "';  } ?> style="cursor:pointer">
			<div class="box-content">
				<?php print $row; ?>
			</div>
		</div>
  </div>
<?php endforeach; ?>
