<?php

/**
 * Application view callback.
 */
function application_view($application) {
  drupal_set_title(entity_label('application', $application));
  return entity_view('application', array(entity_id('application', $application) => $application), 'full');
}