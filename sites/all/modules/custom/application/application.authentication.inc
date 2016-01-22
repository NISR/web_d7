<?php


/*
 * Application login
 */
function application_login_form($form,&$form_state,$application_type){
	
	$form['username'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('Username'),
	);	
	
	$form['password'] = array(
		'#type' => 'password',
		'#required' => TRUE,
		'#title' => t('Password'),
	);	
	
	$form['application_type'] = array(
		'#type' => 'hidden',
		'#value' => $application_type,
	);	
	
	$form['actions']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Connect'),	
	);
	
	$form['new_user_register'] = array(
		'#markup'=> "<br/>New user,register <a href='/application/register/" . $application_type . "'>here</a>",
	);	
	
	drupal_set_title(t('Login'));
	
	return $form;	
}

/*
 * Login form validate handler
 */
function application_login_form_validate($form,&$form_state){
	if(!user_login_credentials($form_state['values']['username'],$form_state['values']['password'])){
		drupal_set_message(t('Wrong username or password'),'error');
	}	
}

/*
 * Login form submit handler
 */
function application_login_form_submit($form,&$form_state){
	
}



/*
 * Register form 
 */
function application_register_form($form,&$form_state,$application_type){

	// Account info
	$form['account'] = array(
		'#type' => 'fieldset',
		'#collapsible' => TRUE,
		'#title' => t('Account information'),
	);
	
	$form['account']['username'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('Username'),
	);	

	$form['account']['email'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('E-mail'),
	);	
		
	$form['account']['password'] = array(
		'#type' => 'password_confirm',
		'#required' => TRUE,
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
		'#options' => array(0 => t('Mr.'), 1 => t('Ms.'), 2 => t('Mrs.')),
		'#title' => t('Salutation'),
	);	
	
	$form['pi']['firstname'] = array(
		'#type' => 'textfield',
		'#required' => TRUE,
		'#title' => t('Firsttname'),
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
	
	$form['application_type'] = array(
		'#type' => 'hidden',
		'#value' => $application_type,
	);	$form['actions']['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Register'),	
	);
	
	$form['application_type'] = array(
		'#type' => 'hidden',
		'#value' => $application_type,
	);
	
	drupal_set_title(t('Register'));
	
	return $form;	
}

/*
 * Register form submit handler
 */
function application_register_form_submit($form,&$form_state){
	
}