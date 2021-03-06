<?php
/**
 * @file
 * views_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_sessions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
