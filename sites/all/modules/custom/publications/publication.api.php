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
 * Acts on publication being loaded from the database.
 *
 * This hook is invoked during $publication loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $publication entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_publication_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $publication is inserted.
 *
 * This hook is invoked after the $publication is inserted into the database.
 *
 * @param Publication $publication
 *   The $publication that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_publication_insert(Publication $publication) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('publication', $publication),
      'extra' => print_r($publication, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $publication being inserted or updated.
 *
 * This hook is invoked before the $publication is saved to the database.
 *
 * @param Publication $publication
 *   The $publication that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_publication_presave(Publication $publication) {
  $publication->name = 'foo';
}

/**
 * Responds to a $publication being updated.
 *
 * This hook is invoked after the $publication has been updated in the database.
 *
 * @param Publication $publication
 *   The $publication that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_publication_update(Publication $publication) {
  db_update('mytable')
    ->fields(array('extra' => print_r($publication, TRUE)))
    ->condition('id', entity_id('publication', $publication))
    ->execute();
}

/**
 * Responds to $publication deletion.
 *
 * This hook is invoked after the $publication has been removed from the database.
 *
 * @param Publication $publication
 *   The $publication that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_publication_delete(Publication $publication) {
  db_delete('mytable')
    ->condition('pid', entity_id('publication', $publication))
    ->execute();
}

/**
 * Act on a publication that is being assembled before rendering.
 *
 * @param $publication
 *   The publication entity.
 * @param $view_mode
 *   The view mode the publication is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $publication->content prior to rendering. The
 * structure of $publication->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_publication_view($publication, $view_mode, $langcode) {
  $publication->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for publications.
 *
 * @param $build
 *   A renderable array representing the publication content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * publication content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the publication rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_publication().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_publication_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on publication_type being loaded from the database.
 *
 * This hook is invoked during publication_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of publication_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_publication_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a publication_type is inserted.
 *
 * This hook is invoked after the publication_type is inserted into the database.
 *
 * @param PublicationType $publication_type
 *   The publication_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_publication_type_insert(PublicationType $publication_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('publication_type', $publication_type),
      'extra' => print_r($publication_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a publication_type being inserted or updated.
 *
 * This hook is invoked before the publication_type is saved to the database.
 *
 * @param PublicationType $publication_type
 *   The publication_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_publication_type_presave(PublicationType $publication_type) {
  $publication_type->name = 'foo';
}

/**
 * Responds to a publication_type being updated.
 *
 * This hook is invoked after the publication_type has been updated in the database.
 *
 * @param PublicationType $publication_type
 *   The publication_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_publication_type_update(PublicationType $publication_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($publication_type, TRUE)))
    ->condition('id', entity_id('publication_type', $publication_type))
    ->execute();
}

/**
 * Responds to publication_type deletion.
 *
 * This hook is invoked after the publication_type has been removed from the database.
 *
 * @param PublicationType $publication_type
 *   The publication_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_publication_type_delete(PublicationType $publication_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('publication_type', $publication_type))
    ->execute();
}

/**
 * Define default publication_type configurations.
 *
 * @return
 *   An array of default publication_type, keyed by machine names.
 *
 * @see hook_default_publication_type_alter()
 */
function hook_default_publication_type() {
  $defaults['main'] = entity_create('publication_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default publication_type configurations.
 *
 * @param array $defaults
 *   An array of default publication_type, keyed by machine names.
 *
 * @see hook_default_publication_type()
 */
function hook_default_publication_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}