<?php
/**
 * @file
 * Porto's HTML template.
 */
?>
<!DOCTYPE html>
<!--[if lt IE 7]> <html class="ie ie6 <?php if (theme_get_setting('background_color') == 'dark') {print "dark";} if (theme_get_setting('site_layout') == 'boxed'){ echo "boxed"; } ?>" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?><?php if ($language->dir == 'rtl'){ echo " rtl"; } ?>"> <![endif]-->
<!--[if IE 7]>    <html class="ie ie7 <?php if (theme_get_setting('background_color') == 'dark') {print "dark";} if (theme_get_setting('site_layout') == 'boxed'){ echo "boxed"; } ?>" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?><?php if ($language->dir == 'rtl'){ echo " rtl"; } ?>"> <![endif]-->
<!--[if IE 8]>    <html class="ie ie8 <?php if (theme_get_setting('background_color') == 'dark') {print "dark";} if (theme_get_setting('site_layout') == 'boxed'){ echo "boxed"; } ?>" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?><?php if ($language->dir == 'rtl'){ echo " rtl"; } ?>"> <![endif]-->
<!--[if gt IE 8]> <!--> <html class="<?php if (theme_get_setting('background_color') == 'dark') {print "dark";} if (theme_get_setting('site_layout') == 'boxed'){ echo "boxed"; } ?>" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?><?php if ($language->dir == 'rtl'){ echo " rtl"; } ?>"> <!--<![endif]-->
<head>
<meta name="google-site-verification" content="e9e9fj_XOV0A2Mzdhvx9aA1BIMf-JD_EMCnG2uLYreQ" />
<?php print $head; ?>
<title><?php print $head_title; ?></title>
<!-- Call bootstrap.css before $scripts to resolve @import conflict with respond.js -->
<link rel="stylesheet" href="<?php print base_path() . drupal_get_path('theme', 'porto'); ?>/vendor/bootstrap/bootstrap.css">
<?php if ($language->dir == 'rtl'): ?>
<link rel="stylesheet" href="<?php print base_path() . drupal_get_path('theme', 'porto'); ?>/vendor/bootstrap-rtl/bootstrap-rtl.css">
<?php endif; ?>
<?php print $styles; ?>
<?php print $scripts; ?>

<!-- IE Fix for HTML5 Tags -->
<!--[if lt IE 9]>
  <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
<![endif]-->

<!--[if IE]>
  <link rel="stylesheet" href="<?php global $parent_root; echo $parent_root; ?>/css/ie.css">
<![endif]-->

<!--[if lte IE 8]>
  <script src="<?php global $parent_root; echo $parent_root; ?>/vendor/respond.js"></script>
<![endif]-->

<!-- Web Fonts  -->
<link href="//fonts.googleapis.com/css?family=Open+Sans:400,300,600,700,800&subset=latin,latin-ext" type="text/css" rel="stylesheet">
<link href='//fonts.googleapis.com/css?family=Shadows+Into+Light' rel='stylesheet' type='text/css'>

<?php porto_user_css();?>  
</head>
<body class="<?php print $classes; ?>"<?php print $attributes;?>>
<?php print $page_top; ?>
<?php print $page; ?>
<?php print $page_bottom; ?>
</body>

</html>
