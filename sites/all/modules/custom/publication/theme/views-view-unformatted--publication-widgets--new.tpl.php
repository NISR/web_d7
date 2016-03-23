<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
	<?php 
		$next_id = $id + 1;
		if(array_key_exists($next_id,$rows)){
			$separator = 'row-separator';
		}else{
			$separator = "";	
		}
   ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] . " " . $separator . ' "';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>