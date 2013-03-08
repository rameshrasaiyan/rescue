<?php
/**
 * @file
 * rescue01_delta.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rescue01_delta_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
