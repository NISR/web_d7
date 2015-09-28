<?php

/**
 * @file
 * Search API data alteration callback
 */

class PublicationAlterAddPeriod extends SearchApiAbstractAlterCallback {

  public function alterItems(array &$items){

  	foreach($items as &$item){
  		$pub = $this->index->datasource()->getMetadataWrapper($item);
  		switch($item->type){
  			case 'statistical_report':
  				if(count($item->field_pub_source)){
  					$item->period = $pub->field_pub_source->field_survey_period->value2->value();		
				}
  				if(count($item->field_pub_period)){
  					$item->period = $pub->field_pub_period->value2->value();		
				}				  		
				
				$item->period = format_date($item->period,'custom','Y'); 		
  				break;
  			case 'article':
  				break;
  			default:
  				break;
  	  }
  	}
  }

  public function propertyInfo() {
    return array(
      'period' => array(
        'label' => t('Period'),
        'description' => t('The year\'s period for which data from this report was collected.'),
        'type' => 'integer',
      ),
    );
  }
}