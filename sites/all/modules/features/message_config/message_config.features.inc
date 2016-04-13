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
  // Exported flag: "Publication subjects subscription".
  $flags['subscribe_publication_subjects'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Publication subjects subscription',
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
          "value" : "New publication update",
          "format" : "1",
          "safe_value" : "\\u003Cp\\u003ENew publication update\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hello,\\r\\n\\u003Cbr\\u003E\\r\\nA new publication has been posted on the website : \\u003Ca href=\\u0022[message:field-message-publication:url]\\u0022\\u003E[message:field-message-publication:title]\\u003C\\/a\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nCheers",
          "format" : "2",
          "safe_value" : "Hello,\\n\\u003Cbr \\/\\u003E\\nA new publication has been posted on the website : \\u003Ca href=\\u0022[message:field-message-publication:url]\\u0022\\u003E[message:field-message-publication:title]\\u003C\\/a\\u003E\\n\\u003Cbr \\/\\u003E\\nCheers"
        }
      ]
    }
  }');
  $items['visa_new_application'] = entity_import('message_type', '{
    "name" : "visa_new_application",
    "description" : "Visa - New application",
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
  $items['visa_report_reminder'] = entity_import('message_type', '{
    "name" : "visa_report_reminder",
    "description" : "Visa - Report submission reminder",
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
          "value" : "Survey report submission reminder",
          "format" : "2",
          "safe_value" : "Survey report submission reminder"
        },
        {
          "value" : "You are kindly reminded to submit to report(s) related to the survey conducted on behalf of ... from ... to as required by \\u003Ca href=\\u0022http:\\/\\/statistics.gov.rw\\/publication\\/visa-instruction-manual\\u0022\\u003Ethe instruction manual\\u003C\\/a\\u003E.",
          "format" : "2",
          "safe_value" : "You are kindly reminded to submit to report(s) related to the survey conducted on behalf of ... from ... to as required by \\u003Ca href=\\u0022http:\\/\\/statistics.gov.rw\\/publication\\/visa-instruction-manual\\u0022\\u003Ethe instruction manual\\u003C\\/a\\u003E."
        }
      ]
    }
  }');
  $items['visa_visa_awarded'] = entity_import('message_type', '{
    "name" : "visa_visa_awarded",
    "description" : "Visa - Visa awarded",
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
          "value" : "Visa awarded",
          "format" : "4",
          "safe_value" : "\\u003Cp\\u003EVisa awarded\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Dear [message:field-message-visa:field-visa-contact:field-visa-contact-firstname],\\r\\nCongratulations,the visa you applied for on behalf of  [message:field-message-visa:field-visa-organization:field_visa_org_name] has been approved.\\r\\nYou can click \\u003Ca href=\\u0022\\u0022\\u003Ehere\\u003C\\/a\\u003E to automatically log into the website and download it.\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nBest\\r\\n\\r\\n",
          "format" : "2",
          "safe_value" : "Dear [message:field-message-visa:field-visa-contact:field-visa-contact-firstname],\\nCongratulations,the visa you applied for on behalf of  [message:field-message-visa:field-visa-organization:field_visa_org_name] has been approved.\\nYou can click \\u003Ca href=\\u0022\\u0022\\u003Ehere\\u003C\\/a\\u003E to automatically log into the website and download it.\\n\\u003Cbr \\/\\u003E\\u003Cbr \\/\\u003E\\nBest\\n\\n"
        }
      ]
    }
  }');
  return $items;
}
