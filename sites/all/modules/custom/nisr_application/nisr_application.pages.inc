<?php

/**
 * Application view callback.
 */
function nisr_application_view($nisr_application) {
  drupal_set_title(entity_label('nisr_application', $nisr_application));
  return entity_view('nisr_application', array(entity_id('nisr_application', $nisr_application) => $nisr_application), 'full');
}