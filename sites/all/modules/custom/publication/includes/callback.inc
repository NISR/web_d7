<?php

/**
 * @file
 * Search API data alteration callback
 */

class PublicationAlterAddPeriod extends SearchApiAbstractAlterCallback {

  public function alterItems(array &$items){

  	foreach($items as &$item){
  		//$pub = $this->index->datasource()->getMetadataWrapper($item);
  		$item->period = set_elapsed_period($item);
  	}
  }

  public function propertyInfo() {
    return array(
      'period' => array(
        'label' => t('Period'),
        'description' => t('The days between today and the period for which data from this report was collected.'),
        'type' => 'integer',
      ),
    );
  }
}

/*
 * Set the term corresponding to the evaluated elapsed period
 */
function set_elapsed_period(&$publication){
	$pub = entity_metadata_wrapper('publication',$publication);
	$period = $days = '';
	
	switch($publication->type){
  			case 'statistical_report':
  				if(count($publication->field_pub_datasource)){
  					$period = $pub->field_pub_datasource->field_datasource_period->value2->value();		
				}
				// Override previous data if period field is set
  				if(count($publication->field_pub_period)){
  					$period = $pub->field_pub_period->value2->value();		
				}
				// Evaluate Days interval
				$days = (REQUEST_TIME - $period)/86400 ; 
				//Get all elapsed periods 
				$voc = taxonomy_vocabulary_machine_name_load('publication_elapsed_period');
				$periods = taxonomy_get_tree($voc->vid,0,NULL,TRUE);
								
				$terms = array();

				foreach($periods as $period){
					$p = entity_metadata_wrapper('taxonomy_term',$period);
					if($days < $p->field_ep_days->value()) $terms[] = $period->tid;							
				}
								
				$pub->field_pub_elapsed_periods->set($terms);
				

					
  				break;	
  			case 'article':
  				break;
  			default:
  				break;
  	  }	

	$pub->save();  	  
	
	return (int)$days;
}
