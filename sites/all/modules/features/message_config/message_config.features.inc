<?php
/**
 * @file
 * message_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function message_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function message_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function message_config_default_message_type() {
  $items = array();
  $items['visa_item_comment'] = entity_import('message_type', '{
    "name" : "visa_item_comment",
    "description" : "Visa item comment",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A comment has been posted on a visa request",
          "format" : "4",
          "safe_value" : "\\u003Cp\\u003EA comment has been posted on a visa request\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "A comment has been posted concerning the visa you requested on behalf of [message:field-message-visa:field-visa-organization:field-visa-org-name].",
          "format" : "4",
          "safe_value" : "\\u003Cp\\u003EA comment has been posted concerning the visa you requested on behalf of [message:field-message-visa:field-visa-organization:field-visa-org-name].\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['visa_item_creation'] = entity_import('message_type', '{
    "name" : "visa_item_creation",
    "description" : "Visa item creation",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A visa request has been submitted",
          "format" : "2",
          "safe_value" : "A visa request has been submitted"
        },
        {
          "value" : "A visa request on behalf of [message:field-visa:field-visa-organization:field-visa-org-name] has been submitted by [current-user:name]",
          "format" : "2",
          "safe_value" : "A visa request on behalf of [message:field-visa:field-visa-organization:field-visa-org-name] has been submitted by [current-user:name]"
        }
      ]
    }
  }');
  return $items;
}
