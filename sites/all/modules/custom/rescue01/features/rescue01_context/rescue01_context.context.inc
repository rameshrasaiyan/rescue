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
    'path' => array(
      'values' => array(
        'content/our-team' => 'content/our-team',
        'content/our-team/*' => 'content/our-team/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'disable_left_sidebar',
    ),
  );
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
        'content/home' => 'content/home',
        'content/home/*' => 'content/home/*',
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
        'views-featured_articles-block' => array(
          'module' => 'views',
          'delta' => 'featured_articles-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-home_content-block' => array(
          'module' => 'views',
          'delta' => 'home_content-block',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer_fouth',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rescue01_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/contact-us' => 'content/contact-us',
        'content/contact-us/*' => 'content/contact-us/*',
        'content/our-services' => 'content/our-services',
        'content/our-services/*' => 'content/our-services/*',
        'content/strategic-alliances' => 'content/strategic-alliances',
        'content/strategic-alliances/*' => 'content/strategic-alliances/*',
        'content/product-services' => 'content/product-services',
        'content/product-services/*' => 'content/product-services/*',
        'content/news' => 'content/news',
        'content/news/*' => 'content/news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'disable_left_sidebar',
    ),
  );
  $context->condition_mode = 0;
  $export['rescue01_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rescue01_sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'content',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'views-whats_going_on-block' => array(
          'module' => 'views',
          'delta' => 'whats_going_on-block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'contactinfo-hcard' => array(
          'module' => 'contactinfo',
          'delta' => 'hcard',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer_fouth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['rescue01_sitewide'] = $context;

  return $export;
}
