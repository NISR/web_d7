<?php

/**
 * Survey view callback.
 */
function survey_view($survey) {
  drupal_set_title(entity_label('survey', $survey));
  return entity_view('survey', array(entity_id('survey', $survey) => $survey), 'full');
}