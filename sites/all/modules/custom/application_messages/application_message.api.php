<?php
/**
 * @file
 * Hooks provided by this module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Acts on application_message being loaded from the database.
 *
 * This hook is invoked during $application_message loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $application_message entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_application_message_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $application_message is inserted.
 *
 * This hook is invoked after the $application_message is inserted into the database.
 *
 * @param Application $application_message
 *   The $application_message that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_application_message_insert(Application $application_message) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('application_message', $application_message),
      'extra' => print_r($application_message, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $application_message being inserted or updated.
 *
 * This hook is invoked before the $application_message is saved to the database.
 *
 * @param Application $application_message
 *   The $application_message that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_application_message_presave(Application $application_message) {
  $application_message->name = 'foo';
}

/**
 * Responds to a $application_message being updated.
 *
 * This hook is invoked after the $application_message has been updated in the database.
 *
 * @param Application $application_message
 *   The $application_message that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_application_message_update(Application $application_message) {
  db_update('mytable')
    ->fields(array('extra' => print_r($application_message, TRUE)))
    ->condition('id', entity_id('application_message', $application_message))
    ->execute();
}

/**
 * Responds to $application_message deletion.
 *
 * This hook is invoked after the $application_message has been removed from the database.
 *
 * @param Application $application_message
 *   The $application_message that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_application_message_delete(Application $application_message) {
  db_delete('mytable')
    ->condition('pid', entity_id('application_message', $application_message))
    ->execute();
}

/**
 * Act on a application_message that is being assembled before rendering.
 *
 * @param $application_message
 *   The application_message entity.
 * @param $view_mode
 *   The view mode the application_message is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $application_message->content prior to rendering. The
 * structure of $application_message->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_application_message_view($application_message, $view_mode, $langcode) {
  $application_message->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for application_messages.
 *
 * @param $build
 *   A renderable array representing the application_message content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * application_message content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the application_message rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_application_message().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_application_message_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on application_message_type being loaded from the database.
 *
 * This hook is invoked during application_message_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of application_message_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_application_message_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a application_message_type is inserted.
 *
 * This hook is invoked after the application_message_type is inserted into the database.
 *
 * @param ApplicationType $application_message_type
 *   The application_message_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_application_message_type_insert(ApplicationType $application_message_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('application_message_type', $application_message_type),
      'extra' => print_r($application_message_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a application_message_type being inserted or updated.
 *
 * This hook is invoked before the application_message_type is saved to the database.
 *
 * @param ApplicationType $application_message_type
 *   The application_message_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_application_message_type_presave(ApplicationType $application_message_type) {
  $application_message_type->name = 'foo';
}

/**
 * Responds to a application_message_type being updated.
 *
 * This hook is invoked after the application_message_type has been updated in the database.
 *
 * @param ApplicationType $application_message_type
 *   The application_message_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_application_message_type_update(ApplicationType $application_message_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($application_message_type, TRUE)))
    ->condition('id', entity_id('application_message_type', $application_message_type))
    ->execute();
}

/**
 * Responds to application_message_type deletion.
 *
 * This hook is invoked after the application_message_type has been removed from the database.
 *
 * @param ApplicationType $application_message_type
 *   The application_message_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_application_message_type_delete(ApplicationType $application_message_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('application_message_type', $application_message_type))
    ->execute();
}

/**
 * Define default application_message_type configurations.
 *
 * @return
 *   An array of default application_message_type, keyed by machine names.
 *
 * @see hook_default_application_message_type_alter()
 */
function hook_default_application_message_type() {
  $defaults['main'] = entity_create('application_message_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default application_message_type configurations.
 *
 * @param array $defaults
 *   An array of default application_message_type, keyed by machine names.
 *
 * @see hook_default_application_message_type()
 */
function hook_default_application_message_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}