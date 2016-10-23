<?php
/**
 * @file
 * campsite_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campsite_schedule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campsite_schedule_node_info() {
  $items = array(
    'schedule' => array(
      'name' => t('Schedule'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function campsite_schedule_paragraphs_info() {
  $items = array(
    'timeslot' => array(
      'name' => 'Timeslot',
      'bundle' => 'timeslot',
      'locked' => '1',
    ),
  );
  return $items;
}
