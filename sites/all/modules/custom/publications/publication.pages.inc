<?php

/**
 * Publication view callback.
 */
function publication_view($pub) {
  drupal_set_title(entity_label('publication', $pub));
  return entity_view('publication', array(entity_id('publication', $pub) => $pub), 'full');
}