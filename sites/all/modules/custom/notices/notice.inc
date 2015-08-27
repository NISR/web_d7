<?php

/**
 * Publication view callback.
 */
function notice_view($notice) {
  drupal_set_title(entity_label('notice', $notice));
  return entity_view('notice', array(entity_id('notice', $notice) => $notice), 'full');
}