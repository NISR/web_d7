<?php

class ApplicationMessageController extends EntityAPIController {

  public function create(array $values = array()) {
    global $user;
    $values += array(
      'message' => '',
      'aid' => '',
      'uid' => $user->uid,
      'created' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
    );
    return parent::create($values);
  }

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $wrapper = entity_metadata_wrapper('application_message', $entity);
    //$content['author'] = array('#markup' => t('Created by: !author', array('!author' => $wrapper->uid->name->value(array('sanitize' => TRUE)))));
    /*
    // Make Description and Status themed like default fields.
    $content['description'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' =>t('Description'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_pub_description',
      '#field_type' => 'text',
      '#entity_type' => 'application_message',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->description)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->description))
    );
    */
    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}

/**
 * Application class.
 */
class ApplicationMessage extends Entity {
  protected function defaultUri() {
    return array('path' => 'application_message/' . $this->identifier());
  }
}

