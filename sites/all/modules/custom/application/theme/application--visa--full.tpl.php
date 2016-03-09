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

  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <?php if ($url): ?>
        <a href="<?php print $url; ?>"><?php print $title; ?></a>
      <?php else: ?>
        <?php print $title; ?>
      <?php endif; ?>
    </h2>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
   <div class="col-md-5">
   	<div class="">
   		<?php print $message_form;?>
		</div>
		<br/>   	
   	<div class="panel panel-default">
	   	<div class="panel-heading">
		   	<h4 class="panel-title">
					<a class="accordion-toggle" data-parent="#accordion" data-toggle="collapse" href="#collapse1One" aria-expanded="true">
						Conversation
					</a>		   	
		   	</h4>
		   </div>
		   <div class="accordion-body collapse in" id="collapse1One" aria-expanded="true" style="">
            <div class="panel-body"> 
					<?php print $messages;?>               
            </div>
         </div>
		</div>
	</div>
   </div>
	<div class="col-md-7 pull-right"> 
  	 <div class="">  
  	 	<div class="box-content">
			    <?php
			      print render($content);
			    ?>
			   <br>
		      <div style="margin-left:auto;margin-right:auto;width:30%">
				  	<a href="<?php print '/application/' . $application->aid . '/edit';?>" class="btn btn-large btn-primary">Edit</a>
				  	<a href="<?php print '/application/' . $application->aid . '/delete';?>" class="btn btn-large btn-primary">Delete</a>
			  	</div>
		</div>
    </div>
   </div>
  </div>
</div>
