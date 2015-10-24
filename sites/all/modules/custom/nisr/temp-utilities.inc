/*
 *
 */
function convertnodes(){
	$nodes = db_select('node', 'n') 
   			 ->fields('n')
				 ->condition('type','article','=')
  	   		 ->execute()
  	   		 ->fetchCol();
  	   		 
  	$pubs = array();
 
	$nodes = node_load_multiple($nodes);
		
	foreach($nodes as $node){
		$refs = array();
		$n = entity_metadata_wrapper('node',$node);
		$pub = entity_create('publication',array('type' => 'statistical_article'));
      
      $pub->title = $n->title->value();
		$pub->old_nid = $n->nid->value();
		$pub->created = $n->changed->value();
		$pub->changed = $n->created->value();
		
		$p = entity_metadata_wrapper('publication',$pub);
		
		$p->field_pub_publication_date->set($n->changed->value());
		$p->field_pub_body->set($n->body->value());
		//$p->author->set($n->name->value());
		
		foreach($n->field_references->value() as $ref){
			//dpm($ref->nid);
			//$ref = entity_metadata_wrapper('node',$ref);
			if($ref->nid != ''){
				switch($ref->type){
					case 'survey_period' :
						//$p->field_pub_source->set(getEntityId('survey',$ref->nid->value()));
						break;				
					case 'book' :
						$refs[] = getEntityId('publication',$ref->nid);						
						//$p->field_pub_pubsource->set(getEntityId('publication',$ref->nid));
						//$p->field_references->set(getEntityId('publi',$ref->nid->value()));	
						break;
					default:
						break;	
				}
			}
		}
		$p->field_pub_pubsource->set($refs);
	   $pubs[] = $pub;
	   //entity_save('publication',$pub);  
	}
	
 	dpm($pubs);

/*	
	$query = db_select('publication', 'p');
              //->fields('c',array('field_book_type_value'))
              //->condition('nid',100,'<')
   $alias = $query->join('content_type_book','c','c.nid = p.old_nid');

   $or = db_or();
   //$or->condition('field_book_type_value','Survey report','<>');
   $or->condition('field_book_type_value',array('Survey report','Indicator report'),'NOT IN');
   
   $nodes = $query->fields('p')
						  ->fields('c')    				  
						  ->condition($or)
  	   				  ->execute()
  	   				  ->fetchCol();
  
	
   dpm($alias);
   dpm((string)$query);
	dpm($nodes);
	
	$num_update = db_update('publication')
							->fields(array('type' => 'document'))
							->condition('pub_id',$nodes,'IN')
							->execute();
	dpm($num_update); 
	  
	foreach($nodes as $node){
		$num_update = db_update('publication')
							->fields(array('type' => 'document'))
							->condition('pub_id',$node->pub_id,'IN')
							->execute();
		dpm($num_update);

		$n = entity_metadata_wrapper('node',$node);
		$pub = array(
						'type' => 'statistical_report',
					);
		$pub = entity_create('publication',$pub);		
      $pub->title = $n->title->value();
		$pub->old_nid = $n->nid->value();
		
		$p = entity_metadata_wrapper('publication',$pub);
		
		$p->field_pub_cover->set($n->field_image_cover->value());
		$p->field_pub_publication_date->set($n->field_publication_date->value());
		$p->field_pub_body->set($n->body->value());
		$p->field_pub_files->set($n->field_file->value());
		
		foreach($n->field_references->value() as $ref){
			$ref = entity_metadata_wrapper('node',$ref);
			
			switch($ref->type->value()){
				case 'survey_period' :
					$p->field_pub_source->set(getEntityId('survey',$ref->nid->value()));
					break;				
				case 'book' :
					//$p->field_references->set(getEntityId('publi',$ref->nid->value()));	
					break;
				default:
					break;	
			}	
		}
		//if(getEntityId('survey',$n->field_survey_type->nid->value()) != '' ){
		//	$p->field_survey2_type->set(getEntityId('survey',$n->field_survey_type->nid->value()));
		//}	
		//dpm($pub);	
		
		$p->save(TRUE);

		
	}
*/
	return 'Done';
	
}

function getEntityId($base_table, $old_nid){
	$entity_id = db_select($base_table, 'n')
            ->fields('n')
            ->condition('old_nid', $old_nid, '=')
            ->execute()
            ->fetchCol();
            
	return $entity_id[0];
}