<?php

/**
 * Application view callback.
 */
function application_message_view($application_message) {
  drupal_set_title(entity_label('application_message', $application_message));
  return entity_view('application_message', array(entity_id('application_message', $application_message) => $application_message), 'full');
}