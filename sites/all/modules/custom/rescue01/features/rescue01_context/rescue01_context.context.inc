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
  $context->name = 'rescue01_bio';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'our_team' => 'our_team',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['rescue01_bio'] = $context;

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
    'block' => array(
      'blocks' => array(
        'views-dynamic_lead_new-block' => array(
          'module' => 'views',
          'delta' => 'dynamic_lead_new-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'disable_sidebars',
    ),
  );
  $context->condition_mode = 0;
  $export['rescue01_home'] = $context;

  return $export;
}
