<?php
/**
 * @file
 * rescue01_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rescue01_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rescue01_home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'disable_sidebars',
    ),
  );
  $context->condition_mode = 0;
  $export['rescue01_home'] = $context;

  return $export;
}
