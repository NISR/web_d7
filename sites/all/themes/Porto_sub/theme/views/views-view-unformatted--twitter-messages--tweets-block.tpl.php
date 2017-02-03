<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 
  $counter = 0;
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php 
    if(($secondary_ad_block == '') && ($counter == 3)){
      break 1;
    } 
  ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
  <?php ++$counter; ?>  
  <?php if($counter == 2) :?>
    <?php print "<div class='pull-right col-md-4 clearfix'>" . $secondary_ad_block . "</div>"; ?>
  <?php endif; ?>
<?php endforeach; ?>


