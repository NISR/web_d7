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
 * Acts on datasource being loaded from the database.
 *
 * This hook is invoked during $datasource loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $datasource entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_datasource_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $datasource is inserted.
 *
 * This hook is invoked after the $datasource is inserted into the database.
 *
 * @param Datasource $datasource
 *   The $datasource that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_datasource_insert(Datasource $datasource) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('datasource', $datasource),
      'extra' => print_r($datasource, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $datasource being inserted or updated.
 *
 * This hook is invoked before the $datasource is saved to the database.
 *
 * @param Datasource $datasource
 *   The $datasource that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_datasource_presave(Datasource $datasource) {
  $datasource->name = 'foo';
}

/**
 * Responds to a $datasource being updated.
 *
 * This hook is invoked after the $datasource has been updated in the database.
 *
 * @param Datasource $datasource
 *   The $datasource that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_datasource_update(Datasource $datasource) {
  db_update('mytable')
    ->fields(array('extra' => print_r($datasource, TRUE)))
    ->condition('id', entity_id('datasource', $datasource))
    ->execute();
}

/**
 * Responds to $datasource deletion.
 *
 * This hook is invoked after the $datasource has been removed from the database.
 *
 * @param Datasource $datasource
 *   The $datasource that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_datasource_delete(Datasource $datasource) {
  db_delete('mytable')
    ->condition('pid', entity_id('datasource', $datasource))
    ->execute();
}

/**
 * Act on a datasource that is being assembled before rendering.
 *
 * @param $datasource
 *   The datasource entity.
 * @param $view_mode
 *   The view mode the datasource is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $datasource->content prior to rendering. The
 * structure of $datasource->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_datasource_view($datasource, $view_mode, $langcode) {
  $datasource->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for datasources.
 *
 * @param $build
 *   A renderable array representing the datasource content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * datasource content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the datasource rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_datasource().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_datasource_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on datasource_type being loaded from the database.
 *
 * This hook is invoked during datasource_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of datasource_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_datasource_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a datasource_type is inserted.
 *
 * This hook is invoked after the datasource_type is inserted into the database.
 *
 * @param DatasourceType $datasource_type
 *   The datasource_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_datasource_type_insert(DatasourceType $datasource_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('datasource_type', $datasource_type),
      'extra' => print_r($datasource_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a datasource_type being inserted or updated.
 *
 * This hook is invoked before the datasource_type is saved to the database.
 *
 * @param DatasourceType $datasource_type
 *   The datasource_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_datasource_type_presave(DatasourceType $datasource_type) {
  $datasource_type->name = 'foo';
}

/**
 * Responds to a datasource_type being updated.
 *
 * This hook is invoked after the datasource_type has been updated in the database.
 *
 * @param DatasourceType $datasource_type
 *   The datasource_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_datasource_type_update(DatasourceType $datasource_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($datasource_type, TRUE)))
    ->condition('id', entity_id('datasource_type', $datasource_type))
    ->execute();
}

/**
 * Responds to datasource_type deletion.
 *
 * This hook is invoked after the datasource_type has been removed from the database.
 *
 * @param DatasourceType $datasource_type
 *   The datasource_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_datasource_type_delete(DatasourceType $datasource_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('datasource_type', $datasource_type))
    ->execute();
}

/**
 * Define default datasource_type configurations.
 *
 * @return
 *   An array of default datasource_type, keyed by machine names.
 *
 * @see hook_default_datasource_type_alter()
 */
function hook_default_datasource_type() {
  $defaults['main'] = entity_create('datasource_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default datasource_type configurations.
 *
 * @param array $defaults
 *   An array of default datasource_type, keyed by machine names.
 *
 * @see hook_default_datasource_type()
 */
function hook_default_datasource_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}