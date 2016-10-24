<?php
/**
 * @file
 * campsite_session.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function campsite_session_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|session|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'session';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_session_track',
        1 => 'field_session_experience_level',
        2 => 'field_session_keywords',
      ),
      'left' => array(
        3 => 'field_session_speakers',
      ),
      'right' => array(
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_session_track' => 'header',
      'field_session_experience_level' => 'header',
      'field_session_keywords' => 'header',
      'field_session_speakers' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|session|full'] = $ds_layout;

  return $export;
}
