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
 * Acts on notice being loaded from the database.
 *
 * This hook is invoked during $notice loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $notice entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_notice_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $notice is inserted.
 *
 * This hook is invoked after the $notice is inserted into the database.
 *
 * @param Notice $notice
 *   The $notice that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_notice_insert(Notice $notice) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('notice', $notice),
      'extra' => print_r($notice, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $notice being inserted or updated.
 *
 * This hook is invoked before the $notice is saved to the database.
 *
 * @param Notice $notice
 *   The $notice that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_notice_presave(Notice $notice) {
  $notice->name = 'foo';
}

/**
 * Responds to a $notice being updated.
 *
 * This hook is invoked after the $notice has been updated in the database.
 *
 * @param Notice $notice
 *   The $notice that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_notice_update(Notice $notice) {
  db_update('mytable')
    ->fields(array('extra' => print_r($notice, TRUE)))
    ->condition('id', entity_id('notice', $notice))
    ->execute();
}

/**
 * Responds to $notice deletion.
 *
 * This hook is invoked after the $notice has been removed from the database.
 *
 * @param Notice $notice
 *   The $notice that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_notice_delete(Notice $notice) {
  db_delete('mytable')
    ->condition('pid', entity_id('notice', $notice))
    ->execute();
}

/**
 * Act on a notice that is being assembled before rendering.
 *
 * @param $notice
 *   The notice entity.
 * @param $view_mode
 *   The view mode the notice is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $notice->content prior to rendering. The
 * structure of $notice->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_notice_view($notice, $view_mode, $langcode) {
  $notice->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for notices.
 *
 * @param $build
 *   A renderable array representing the notice content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * notice content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the notice rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_notice().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_notice_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on notice_type being loaded from the database.
 *
 * This hook is invoked during notice_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of notice_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_notice_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a notice_type is inserted.
 *
 * This hook is invoked after the notice_type is inserted into the database.
 *
 * @param NoticeType $notice_type
 *   The notice_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_notice_type_insert(NoticeType $notice_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('notice_type', $notice_type),
      'extra' => print_r($notice_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a notice_type being inserted or updated.
 *
 * This hook is invoked before the notice_type is saved to the database.
 *
 * @param NoticeType $notice_type
 *   The notice_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_notice_type_presave(NoticeType $notice_type) {
  $notice_type->name = 'foo';
}

/**
 * Responds to a notice_type being updated.
 *
 * This hook is invoked after the notice_type has been updated in the database.
 *
 * @param NoticeType $notice_type
 *   The notice_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_notice_type_update(NoticeType $notice_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($notice_type, TRUE)))
    ->condition('id', entity_id('notice_type', $notice_type))
    ->execute();
}

/**
 * Responds to notice_type deletion.
 *
 * This hook is invoked after the notice_type has been removed from the database.
 *
 * @param NoticeType $notice_type
 *   The notice_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_notice_type_delete(NoticeType $notice_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('notice_type', $notice_type))
    ->execute();
}

/**
 * Define default notice_type configurations.
 *
 * @return
 *   An array of default notice_type, keyed by machine names.
 *
 * @see hook_default_notice_type_alter()
 */
function hook_default_notice_type() {
  $defaults['main'] = entity_create('notice_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default notice_type configurations.
 *
 * @param array $defaults
 *   An array of default notice_type, keyed by machine names.
 *
 * @see hook_default_notice_type()
 */
function hook_default_notice_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}