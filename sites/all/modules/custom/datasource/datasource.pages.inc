<?php

/**
 * Datasource view callback.
 */
function datasource_view($datasource) {
  drupal_set_title(entity_label('datasource', $datasource));
  return entity_view('datasource', array(entity_id('datasource', $datasource) => $datasource), 'full');
}