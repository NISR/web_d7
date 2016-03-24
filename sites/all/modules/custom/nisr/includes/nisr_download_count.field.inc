<?php
/**
 * @file
 * Implement a file field formatter that includes download count.
 */

/**
 * Implements hook_field_formatter_info().
 */
function nisr_field_formatter_info() {
  $formatters = array(
    'nisr_download_count' => array(
      'label' => t('Custom table of files with Download count'),
      'field types' => array('file'),
    ),
  );

  return $formatters;
}

/**
 * Implements hook_field_formatter_view().
 */
function nisr_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $entity_info = entity_get_info($entity_type);
  $access = TRUE; //user_access('view download counts');
  $rows = array();  

  foreach ($items as $delta => $item) {
  		// Legacy download counts from back the D6 area 
		$item['downloads'] = db_select('download_count','dc')->fields('dc')->condition('fid', $item['fid'], '=')->condition('uid', 1, '<>')->execute()->rowCount();	 
		// New kid on the block
		if(module_exists('file_download_count')){
			$item['downloads'] += db_select('file_download_count','fdc')->fields('fdc')->condition('fid', $item['fid'], '=')->condition('uid', 1, '<>')->execute()->rowCount();	 					
		}
		
		$rows[] = array(theme('file_download_count_link',array('file' => (object) $item)), $item['downloads']);    
  }
  
  $element = array(
        '#theme' => 'table',
        '#header' => array(t('File'), t('Download Count')),
        '#rows' => $rows,
        '#attributes' => array('class' => array('col-md-12'),'style' => 'margin-bottom:20px;'),
  );

  return $element;
}

/*
 * NISR implementation of theme_file_link() 
 */
function theme_file_download_count_link($variables){
	$file = $variables['file'];
	$icon_directory = $variables['icon_directory'];

	$uri = file_entity_download_uri($file) ; //file_create_url($file->uri);
	
	// Human-readable names, for use as text-alternatives to icons.
	$mime_name = array(
	 'application/msword' => t('Microsoft Office document icon'),
	 'application/vnd.ms-excel' => t('Office spreadsheet icon'),
	 'application/vnd.ms-powerpoint' => t('Office presentation icon'),
	 'application/pdf' => t('PDF icon'),
	 'video/quicktime' => t('Movie icon'),
	 'audio/mpeg' => t('Audio icon'),
	 'audio/wav' => t('Audio icon'),
	 'image/jpeg' => t('Image icon'),
	 'image/png' => t('Image icon'),
	 'image/gif' => t('Image icon'),
	 'application/zip' => t('Package icon'),
	 'text/html' => t('HTML icon'),
	 'text/plain' => t('Plain text icon'),
	 'application/octet-stream' => t('Binary Data'),
	);
	
	$mimetype = file_get_mimetype($file->uri);
	
	$icon = theme('file_icon', array(
	 'file' => $file,
	 'icon_directory' => $icon_directory,
	 'alt' => !empty($mime_name[$mimetype]) ? $mime_name[$mimetype] : t('File'),
	));
	
	// Set options as per anchor format described at
	// http://microformats.org/wiki/file-format-examples
	$options = array(
	 'attributes' => array(
		'type' => $file->filemime . '; length=' . $file->filesize,
	 		),
	  );
	  
	// Use the description as the link text if available.
	if (empty($file->description)) {
		$link_text = $file->filename;
	}else {
	 	$link_text = $file->description;
	 	$options['attributes']['title'] = check_plain($file->filename);
	}
	
	return '<span class="file">' . $icon . ' ' . l($link_text, $uri['path'], $uri['options']) . ' (' . format_size($file->filesize) . ')</span>';
}
