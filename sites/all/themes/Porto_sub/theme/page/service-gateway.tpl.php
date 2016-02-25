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
    <div class="container ">
		<div class="row">   	
		    <div class="login-box">
				  <div class="wrapper-box">
				  		<?php print $messages; ?>
				  		<?php if (isset($page['content'])) { print render($page['content']); } ?>
				  	</div>   
			 </div>
		</div>
    </div>  
  </div>  	  
</div>
  
  
