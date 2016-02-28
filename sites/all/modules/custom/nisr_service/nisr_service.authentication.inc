<?php


/*
 * Login form
 */
function nisr_service_login_form($form,&$form_state){
	
	isset($_GET['destination'])? $service =  $_GET['destination'] : $service = '';
	
	$form['username'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('Email'),
	);	
	
	$form['password'] = array(
		'#type' => 'password',
		'#required' => TRUE,
		'#title' => t('Password'),
	);	
		
	$form['actions']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Connect'),	
	);
	
	$form['new_user_register'] = array(
		'#markup'=> "<br/>New user,register <a href='/ServiceRegister?destination=" . $service . "'>here</a>",
	);	
	
	$form['#theme'] = 'nisr_service_login_form';
	
	$form['#action'] .= '?destination=' . $service;

	drupal_set_title(t('Login'));
	
	return $form;	
}

/*
 * Login form validate handler
 */
function nisr_service_login_form_validate($form,&$form_state){
	
}

/*
 * Login form submit handler
 */
function nisr_service_login_form_submit($form,&$form_state){
	if(!user_login_credentials($form_state['values']['username'],$form_state['values']['password'])){
		form_set_error('username');
		form_set_error('password');
		drupal_set_message(t('Wrong username or password'),'error');
	}	
}



/*
 * Register form 
 */
function nisr_service_register_form($form,&$form_state){
	
	isset($_GET['destination']) ? $service =  $_GET['destination'] : $service = '';
	
	$zones = system_time_zones();
	
	// Account info
	$form['account'] = array(
		'#type' => 'fieldset',
		'#collapsible' => TRUE,
		'#title' => t('Account information'),
	);
	
	$form['account']['mail'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('E-mail'),
	);
		
	$form['account']['pass'] = array(
		'#type' => 'password_confirm',
		'#required' => TRUE,
	);	

	$form['account']['timezone'] = array(
       '#type' => 'select',
       '#required' => TRUE,
       '#title' => t('Time zone'),
       '#default_value' => date_default_timezone(),
       '#options' => $zones,
       '#description' => t('Select your current local time. Dates and times throughout this site will be displayed using this time zone.'),
   );
   	
	// Personal info
	$form['pi'] = array(
		'#type' => 'fieldset',
		'#collapsible' => TRUE,
		'#title' => t('Personal information'),
	);
	
	$form['pi']['salutation'] = array(
		'#type' => 'select',
		'#required' => TRUE,
		'#options' => array(0 => t('Mr'), 1 => t('Ms'), 2 => t('Mrs')),
		'#title' => t('Salutation'),
	);	
	
	$form['pi']['firstname'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('Firstname'),
	);	
	
	$form['pi']['lastname'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('Lastname'),
	);	
		
	$form['actions']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Register'),	
	);
			
	$form['actions']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Register'),	
	);
	
	$form['#theme'] = 'nisr_service_register_form';
	
	$form['#action'] .= '?destination=' . $service;
		
	drupal_set_title(t('Register'));
	
	
	return $form;	
}

/*
 * Register form validate handler
 */
function nisr_service_register_form_validate($form,&$form_state){
	// We need to make sure that no user with the same account email already exists
	$account = user_load_by_mail($form_state['values']['mail']);
	if($account) form_set_error('mail','E-mail account already in use');
}

/*
 * Register form submit handler
 */
function nisr_service_register_form_submit($form,&$form_state){
	$destination = '';
	if(create_account($form,$form_state)){
		drupal_set_message('Registration successsful');	
		// Automatic Login
		user_login_credentials($form_state['values']['mail'],$form_state['values']['pass']);
	}else{
		drupal_set_message('Registration failed');	
	}
}

/**
 * Helper function to login a user. 
 * @param
 * 	string username
 *		string password
 * @return 
 *		boolean
 */
function user_login_credentials($username, $password) {
	if ($uid = user_authenticate($username, $password)) {
		$form_state = array('uid' => $uid);
		user_login_submit(array(),$form_state);
 		return TRUE;
	}else{return FALSE;}

}

/*
 * Helper function to create a user
 * @return 
 *		boolean
 */
function create_account($form,&$form_state){
	// Create user object
	$user_data = array(
				'name' => $form_state['values']['mail'],
				'pass' => $form_state['values']['pass'],
				'mail' => $form_state['values']['mail'],
				'timezone' => $form_state['values']['timezone'],
				'init' => $form_state['values']['mail'],
				'status' => 1,
				'access' => REQUEST_TIME,
					
	);
	
	$user = user_save(NULL,$user_data);	
	
	// Create profile2 entity associated with the newly created user
	if($user){
		$profile = profile2_create(array('type' => 'main','uid' => $user->uid));
		$profile->save();
				
		// Initialize Field collection 
		$fc = entity_create('field_collection_item', array('field_name' => 'field_profile_pi'));
		$fc->setHostEntity('profile2', $profile);
				
		// Populate fields
		$wr = entity_metadata_wrapper('field_collection_item',$fc);
		$wr->field_pi_salutation->set($form_state['values']['salutation']);
		$wr->field_pi_firstname->set($form_state['values']['firstname']);
		$wr->field_pi_lastname->set($form_state['values']['lastname']);
				
		$wr->save();
		
		return TRUE;
			
	}else{
		return FALSE;	
	}
}


