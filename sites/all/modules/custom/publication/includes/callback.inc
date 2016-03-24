<?php

/**
 * @file
 * Search API data alteration callback
 */

class PublicationAlterAddPeriod extends SearchApiAbstractAlterCallback {

  public function alterItems(array &$items){
  		$days = '';
  		$publication = NULL;
  		
  		foreach($items as &$item){
	  		switch($item->type) {
	  			case 'statistical_report':
	  				$publication = $item;
	  				break; 			  				
	  			default:
	  				if(isset($item->field_pub_pubsource) && count($item->field_pub_pubsource)){
						$publication = $item->field_pub_pubsource[0];			
					}
	  				break;	
	  		}
	  		
	  		if(!is_null($publication)) $days = get_elapsed_period($publication);
	  		
	  		if($days){
	  			$item->period_days_number = $days;
	  		}
	  	}
  }

  public function propertyInfo() {
    return array(
      'period_days_number' => array(
        'label' => t('Period/Days'),
        'description' => t('The number of days between today and the period for which data from this report was collected.'),
        'type' => 'integer',
      ),
    );
  }
}

/*
 * Get the number of elapsed days/time ago to actual date
 */
function get_elapsed_period(&$publication){
	$pub = entity_metadata_wrapper('publication',$publication);
	$period = $days = $time_ago = '';
	
  	if(isset($publication->field_pub_datasource) && count($publication->field_pub_datasource)){
  		$period = $pub->field_pub_datasource->field_datasource_period->value2->value();		
	}
	// Override previous data if period field is set
  	if(isset($publication->field_pub_period) && count($publication->field_pub_period)){
  		$period = $pub->field_pub_period->value2->value();		
	}
	// If none of the above is used, then fallback on publication date field
	if(empty($period) && isset($pub->field_pub_publication_date)){	
		$period = $pub->field_pub_publication_date->value();		
	}

	// Evaluate Days interval
	$days = (REQUEST_TIME - $period)/86400 ; 
	
	//Get the time/ago period according to the rules set in the elapsed period vocubulary 
	$voc = taxonomy_vocabulary_machine_name_load('publication_elapsed_period');
	$periods = taxonomy_get_tree($voc->vid,0,NULL,TRUE);
					
	$tid = 0;

	foreach($periods as $period){
		$p = entity_metadata_wrapper('taxonomy_term',$period);
      $tid = $period->tid;
		if($days <= $p->field_ep_days->value()) break;	
	}
										 
	return (int)$days;

}
