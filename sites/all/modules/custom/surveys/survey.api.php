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
 * Acts on survey being loaded from the database.
 *
 * This hook is invoked during $survey loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $survey entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_survey_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $survey is inserted.
 *
 * This hook is invoked after the $survey is inserted into the database.
 *
 * @param Survey $survey
 *   The $survey that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_survey_insert(Survey $survey) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('survey', $survey),
      'extra' => print_r($survey, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $survey being inserted or updated.
 *
 * This hook is invoked before the $survey is saved to the database.
 *
 * @param Survey $survey
 *   The $survey that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_survey_presave(Survey $survey) {
  $survey->name = 'foo';
}

/**
 * Responds to a $survey being updated.
 *
 * This hook is invoked after the $survey has been updated in the database.
 *
 * @param Survey $survey
 *   The $survey that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_survey_update(Survey $survey) {
  db_update('mytable')
    ->fields(array('extra' => print_r($survey, TRUE)))
    ->condition('id', entity_id('survey', $survey))
    ->execute();
}

/**
 * Responds to $survey deletion.
 *
 * This hook is invoked after the $survey has been removed from the database.
 *
 * @param Survey $survey
 *   The $survey that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_survey_delete(Survey $survey) {
  db_delete('mytable')
    ->condition('pid', entity_id('survey', $survey))
    ->execute();
}

/**
 * Act on a survey that is being assembled before rendering.
 *
 * @param $survey
 *   The survey entity.
 * @param $view_mode
 *   The view mode the survey is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $survey->content prior to rendering. The
 * structure of $survey->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_survey_view($survey, $view_mode, $langcode) {
  $survey->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for surveys.
 *
 * @param $build
 *   A renderable array representing the survey content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * survey content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the survey rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_survey().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_survey_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on survey_type being loaded from the database.
 *
 * This hook is invoked during survey_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of survey_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_survey_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a survey_type is inserted.
 *
 * This hook is invoked after the survey_type is inserted into the database.
 *
 * @param SurveyType $survey_type
 *   The survey_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_survey_type_insert(SurveyType $survey_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('survey_type', $survey_type),
      'extra' => print_r($survey_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a survey_type being inserted or updated.
 *
 * This hook is invoked before the survey_type is saved to the database.
 *
 * @param SurveyType $survey_type
 *   The survey_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_survey_type_presave(SurveyType $survey_type) {
  $survey_type->name = 'foo';
}

/**
 * Responds to a survey_type being updated.
 *
 * This hook is invoked after the survey_type has been updated in the database.
 *
 * @param SurveyType $survey_type
 *   The survey_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_survey_type_update(SurveyType $survey_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($survey_type, TRUE)))
    ->condition('id', entity_id('survey_type', $survey_type))
    ->execute();
}

/**
 * Responds to survey_type deletion.
 *
 * This hook is invoked after the survey_type has been removed from the database.
 *
 * @param SurveyType $survey_type
 *   The survey_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_survey_type_delete(SurveyType $survey_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('survey_type', $survey_type))
    ->execute();
}

/**
 * Define default survey_type configurations.
 *
 * @return
 *   An array of default survey_type, keyed by machine names.
 *
 * @see hook_default_survey_type_alter()
 */
function hook_default_survey_type() {
  $defaults['main'] = entity_create('survey_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default survey_type configurations.
 *
 * @param array $defaults
 *   An array of default survey_type, keyed by machine names.
 *
 * @see hook_default_survey_type()
 */
function hook_default_survey_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}