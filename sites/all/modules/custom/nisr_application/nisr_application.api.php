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
 * Acts on nisr_application being loaded from the database.
 *
 * This hook is invoked during $nisr_application loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $nisr_application entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_nisr_application_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $nisr_application is inserted.
 *
 * This hook is invoked after the $nisr_application is inserted into the database.
 *
 * @param Application $nisr_application
 *   The $nisr_application that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_nisr_application_insert(Application $nisr_application) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('nisr_application', $nisr_application),
      'extra' => print_r($nisr_application, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $nisr_application being inserted or updated.
 *
 * This hook is invoked before the $nisr_application is saved to the database.
 *
 * @param Application $nisr_application
 *   The $nisr_application that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_nisr_application_presave(Application $nisr_application) {
  $nisr_application->name = 'foo';
}

/**
 * Responds to a $nisr_application being updated.
 *
 * This hook is invoked after the $nisr_application has been updated in the database.
 *
 * @param Application $nisr_application
 *   The $nisr_application that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_nisr_application_update(Application $nisr_application) {
  db_update('mytable')
    ->fields(array('extra' => print_r($nisr_application, TRUE)))
    ->condition('id', entity_id('nisr_application', $nisr_application))
    ->execute();
}

/**
 * Responds to $nisr_application deletion.
 *
 * This hook is invoked after the $nisr_application has been removed from the database.
 *
 * @param Application $nisr_application
 *   The $nisr_application that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_nisr_application_delete(Application $nisr_application) {
  db_delete('mytable')
    ->condition('pid', entity_id('nisr_application', $nisr_application))
    ->execute();
}

/**
 * Act on a nisr_application that is being assembled before rendering.
 *
 * @param $nisr_application
 *   The nisr_application entity.
 * @param $view_mode
 *   The view mode the nisr_application is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $nisr_application->content prior to rendering. The
 * structure of $nisr_application->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_nisr_application_view($nisr_application, $view_mode, $langcode) {
  $nisr_application->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for nisr_applications.
 *
 * @param $build
 *   A renderable array representing the nisr_application content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * nisr_application content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the nisr_application rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_nisr_application().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_nisr_application_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on nisr_application_type being loaded from the database.
 *
 * This hook is invoked during nisr_application_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of nisr_application_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_nisr_application_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a nisr_application_type is inserted.
 *
 * This hook is invoked after the nisr_application_type is inserted into the database.
 *
 * @param ApplicationType $nisr_application_type
 *   The nisr_application_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_nisr_application_type_insert(ApplicationType $nisr_application_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('nisr_application_type', $nisr_application_type),
      'extra' => print_r($nisr_application_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a nisr_application_type being inserted or updated.
 *
 * This hook is invoked before the nisr_application_type is saved to the database.
 *
 * @param ApplicationType $nisr_application_type
 *   The nisr_application_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_nisr_application_type_presave(ApplicationType $nisr_application_type) {
  $nisr_application_type->name = 'foo';
}

/**
 * Responds to a nisr_application_type being updated.
 *
 * This hook is invoked after the nisr_application_type has been updated in the database.
 *
 * @param ApplicationType $nisr_application_type
 *   The nisr_application_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_nisr_application_type_update(ApplicationType $nisr_application_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($nisr_application_type, TRUE)))
    ->condition('id', entity_id('nisr_application_type', $nisr_application_type))
    ->execute();
}

/**
 * Responds to nisr_application_type deletion.
 *
 * This hook is invoked after the nisr_application_type has been removed from the database.
 *
 * @param ApplicationType $nisr_application_type
 *   The nisr_application_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_nisr_application_type_delete(ApplicationType $nisr_application_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('nisr_application_type', $nisr_application_type))
    ->execute();
}

/**
 * Define default nisr_application_type configurations.
 *
 * @return
 *   An array of default nisr_application_type, keyed by machine names.
 *
 * @see hook_default_nisr_application_type_alter()
 */
function hook_default_nisr_application_type() {
  $defaults['main'] = entity_create('nisr_application_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default nisr_application_type configurations.
 *
 * @param array $defaults
 *   An array of default nisr_application_type, keyed by machine names.
 *
 * @see hook_default_nisr_application_type()
 */
function hook_default_nisr_application_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}