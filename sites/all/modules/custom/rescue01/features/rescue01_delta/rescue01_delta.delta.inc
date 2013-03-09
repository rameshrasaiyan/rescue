<?php
/**
 * @file
 * rescue01_delta.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function rescue01_delta_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'disable_sidebars';
  $delta->name = 'Disable Sidebars';
  $delta->description = 'This will disable the sidebars.';
  $delta->theme = 'rescue01';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_rescue01_settings' => array(
      'alpha_region_preface_first_zone' => NULL,
      'alpha_region_preface_first_equal_height_element' => FALSE,
      'alpha_region_user_first_zone' => NULL,
      'alpha_region_user_first_equal_height_element' => FALSE,
      'alpha_region_header_first_zone' => NULL,
      'alpha_region_header_first_equal_height_element' => FALSE,
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_footer_second_zone' => NULL,
      'alpha_region_footer_second_equal_height_element' => FALSE,
      'alpha_region_postscript_second_zone' => NULL,
      'alpha_region_postscript_second_equal_height_element' => FALSE,
      'alpha_region_preface_second_zone' => NULL,
      'alpha_region_preface_second_equal_height_element' => FALSE,
      'alpha_region_user_second_zone' => NULL,
      'alpha_region_user_second_equal_height_element' => FALSE,
      'alpha_region_header_second_zone' => NULL,
      'alpha_region_header_second_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_preface_third_zone' => NULL,
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_postscript_third_zone' => NULL,
      'alpha_region_postscript_third_equal_height_element' => FALSE,
      'alpha_region_postscript_fourth_zone' => NULL,
      'alpha_region_postscript_fourth_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '12',
      'alpha_region_postscript_first_columns' => '12',
    ),
    'color_rescue01_files' => NULL,
    'color_rescue01_logo' => NULL,
    'color_rescue01_palette' => NULL,
    'color_rescue01_stylesheets' => NULL,
    'color_rescue01_screenshot' => NULL,
  );
  $export['disable_sidebars'] = $delta;

  return $export;
}
