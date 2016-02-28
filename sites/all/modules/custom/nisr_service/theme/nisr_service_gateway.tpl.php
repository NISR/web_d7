<?php
/**
 * @file
 * Service Authentication gateway page
 */
 global $base_url;
 
 
?>
<div class="authentication-top-menu"><a href="<?php print $base_url?>"><h1><< <?php print t('Back to site');?></h1></a></div> 

<div role="main" class="main">
  <div id="content" class="content full col-md-12">
    <div class="container">
		<div class="row authentication-box">
				<div class="message"><?php print $messages; ?></div>
				<div class="image-logo"><img src="<?php print drupal_get_path('module','nisr_service');?>/images/nisr_logo_vertical.png"></div>
				<div><?php if (isset($page['content'])) { print render($page['content']); } ?></div>
		</div>
    </div>  
  </div>  	  
</div>
  
  
