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
 * Implements hook_flag_default_flags().
 */
function message_config_flag_default_flags() {
  $flags = array();
  // Exported flag: "Publication subjects".
  $flags['publication_subjects'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Publication subjects',
    'global' => 0,
    'types' => array(
      0 => 'document_subjects',
      1 => 'statistical_publication_subjects',
    ),
    'flag_short' => '<span class="btn btn-default btn-success"><i class=\'fa fa-check\'></i>&nbsp;Follow</span>',
    'flag_long' => 'Get e-mail updates',
    'flag_message' => 'You\'re following this topic now',
    'unflag_short' => '<span class="btn btn-default btn-danger"><i class=\' fa fa-close\'></i>&nbsp;Unfollow</span>',
    'unflag_long' => 'Stop e-mail updates',
    'unflag_message' => 'You\'re detached',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'message_config',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function message_config_default_message_type() {
  $items = array();
  $items['publication_new'] = entity_import('message_type', '{
    "name" : "publication_new",
    "description" : "Publication - New",
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
          "value" : "Publication update",
          "format" : "1",
          "safe_value" : "\\u003Cp\\u003EPublication update\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Dear [current-user:name],\\r\\nA new publication has been posted on the website : \\r\\n\\u003Cblockquote\\u003E\\u003Ca href=\\u0022[message:field-message-publication:url]\\u0022\\u003E[message:field-message-publication:title]\\u003C\\/a\\u003E\\u003C\\/blockquote\\u003E\\r\\n\\r\\nCheers",
          "format" : "2",
          "safe_value" : "Dear [current-user:name],\\nA new publication has been posted on the website : \\n\\u003Cblockquote\\u003E\\u003Ca href=\\u0022[message:field-message-publication:url]\\u0022\\u003E[message:field-message-publication:title]\\u003C\\/a\\u003E\\u003C\\/blockquote\\u003E\\n\\nCheers"
        }
      ]
    }
  }');
  $items['visa_new'] = entity_import('message_type', '{
    "name" : "visa_new",
    "description" : "Visa - New",
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
  $items['visa_new_comment'] = entity_import('message_type', '{
    "name" : "visa_new_comment",
    "description" : "Visa - New comment",
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
          "value" : "A comment has been posted on your visa request",
          "format" : "4",
          "safe_value" : "\\u003Cp\\u003EA comment has been posted on your visa request\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "A comment has been posted about the visa request you submitted on behalf of [message:field-message-visa:field-visa-organization:field-visa-org-name].",
          "format" : "4",
          "safe_value" : "\\u003Cp\\u003EA comment has been posted about the visa request you submitted on behalf of [message:field-message-visa:field-visa-organization:field-visa-org-name].\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
