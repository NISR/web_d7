<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 $featured_box = array("featured-box-primary","featured-box-secondary","featured-box-tertiary","featured-box-quaternary");
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
	<div class="col-md-3">
		<div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' featured-box '. $featured_box[$id] .' "';  } ?> style="cursor:pointer">
			<div class="box-content" style="text-align:center">
				<?php print $row; ?>
			</div>
		</div>
  </div>
<?php endforeach; ?>
