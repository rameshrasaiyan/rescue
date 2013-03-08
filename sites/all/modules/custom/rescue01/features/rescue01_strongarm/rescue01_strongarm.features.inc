<?php
/**
 * @file
 * rescue01_strongarm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rescue01_strongarm_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
