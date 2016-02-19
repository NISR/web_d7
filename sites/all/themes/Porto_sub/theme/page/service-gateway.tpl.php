<?php
/**
 * @file
 * Service Authentication gateway page
 */
?>
<div class="authentication-top-menu"><a href=""><h1><< <?php print t('Back to site');?></h1></a></div>    	
<div class="body">
	<div role="main" class="main">
	  <div id="content" class="content full col-md-6">
	    <div class="container ">
	    	<div class="row">
				
	    	</div>
	      <div class="row">
			    <div class="col-md-6">
		       	 <?php print $messages; ?>
			    </div>
			</div>
			<div class="row">
				 <div class=""></div>
			    <div class="col-md-6 authentication-box">
					  <?php if (isset($page['content'])) { print render($page['content']); } ?>	      
				 </div>
			</div>
	    </div>  
	  </div>  	  
</div>  
  
