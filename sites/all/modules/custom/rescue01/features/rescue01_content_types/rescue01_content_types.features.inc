<?php
/**
 * @file
 * rescue01_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rescue01_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rescue01_content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bios' => array(
      'name' => t('Bios'),
      'base' => 'node_content',
      'description' => t('This content type is for the Team page, The bio will get added in the Team page automatically.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dynamic_lead_slide' => array(
      'name' => t('Dynamic Lead Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}