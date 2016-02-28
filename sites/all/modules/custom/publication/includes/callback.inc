<?php

/**
 * @file
 * Search API data alteration callback
 */

class PublicationAlterAddPeriod extends SearchApiAbstractAlterCallback {

  public function alterItems(array &$items){
  		$period = array();
	  	foreach($items as &$item){
	  		switch($item->type) {
	  			case 'statistical_article':
	  			case 'infographic_item':
	  				if(isset($item->field_pub_pubsource) && count($item->field_pub_pubsource)){
						$publication = $item->field_pub_pubsource[0];			
				}
	  			case 'statistical_report':
	  				$publication = $item;
	  				break;	
	  		}
	  		
	  		$period = get_elapsed_period($publication);
	  		
	  		if(!empty($period)){
	  			$item->period_days_number = $period['days'];
	  			$item->period_time_ago = $period['time_ago'];
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
      'period_time_ago' => array(
      	'label' => t('Period/Time ago'),
      	'description' => t('The time which has passed between today and the from the date data collection expressed in litteral form'),
			'type' => 'string',      
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
	// Evaluate Days interval
	$days = (REQUEST_TIME - $period)/86400 ; 
	
	//Get the time/ago period according to the rules set in the elapsed period vocubulary 
	$voc = taxonomy_vocabulary_machine_name_load('publication_elapsed_period');
	$periods = taxonomy_get_tree($voc->vid,0,NULL,TRUE);
					
	$tid = 0;

	foreach($periods as $period){
		$p = entity_metadata_wrapper('taxonomy_term',$period);
		if($days <= $p->field_ep_days->value()){
          $tid = $period->tid;
          $time_ago = $period->name;
          break;	
      }					
	}
	if(!$tid){ 
      $period = end($periods);
      $tid = $period->tid;
      $time_ago = $period->name;
   }			
								 
	return array('days' => (int)$days,'time_ago' => $time_ago);

}
