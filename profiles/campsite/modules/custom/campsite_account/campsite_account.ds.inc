<?php
/**
 * @file
 * campsite_account.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function campsite_account_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function campsite_account_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|attendee';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'attendee';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_picture',
        1 => 'group_name',
        2 => 'field_user_organization',
        3 => 'field_user_first_name',
        4 => 'field_user_last_name',
      ),
    ),
    'fields' => array(
      'field_user_picture' => 'ds_content',
      'group_name' => 'ds_content',
      'field_user_organization' => 'ds_content',
      'field_user_first_name' => 'ds_content',
      'field_user_last_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['user|user|attendee'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'name',
        1 => 'field_user_first_name',
        2 => 'field_user_last_name',
        3 => 'field_user_job_title',
        4 => 'field_user_organization',
        5 => 'field_user_country',
      ),
      'left' => array(
        6 => 'field_user_picture',
        7 => 'field_user_about_me',
      ),
      'right' => array(
        8 => 'field_user_social_facebook',
        9 => 'field_user_social_twitter',
        10 => 'field_user_social_linkedin',
        11 => 'field_user_social_dorg',
        12 => 'field_user_job_speeding_date',
        13 => 'field_user_participate_days',
      ),
    ),
    'fields' => array(
      'name' => 'header',
      'field_user_first_name' => 'header',
      'field_user_last_name' => 'header',
      'field_user_job_title' => 'header',
      'field_user_organization' => 'header',
      'field_user_country' => 'header',
      'field_user_picture' => 'left',
      'field_user_about_me' => 'left',
      'field_user_social_facebook' => 'right',
      'field_user_social_twitter' => 'right',
      'field_user_social_linkedin' => 'right',
      'field_user_social_dorg' => 'right',
      'field_user_job_speeding_date' => 'right',
      'field_user_participate_days' => 'right',
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
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_user_country',
        1 => 'field_user_job_title',
        2 => 'field_user_organization',
      ),
      'left' => array(
        3 => 'field_user_picture',
        4 => 'field_user_about_me',
      ),
      'right' => array(
        5 => 'field_user_social_facebook',
        6 => 'field_user_social_twitter',
        7 => 'field_user_social_linkedin',
        8 => 'field_user_social_dorg',
        9 => 'field_user_participate_days',
      ),
    ),
    'fields' => array(
      'field_user_country' => 'header',
      'field_user_job_title' => 'header',
      'field_user_organization' => 'header',
      'field_user_picture' => 'left',
      'field_user_about_me' => 'left',
      'field_user_social_facebook' => 'right',
      'field_user_social_twitter' => 'right',
      'field_user_social_linkedin' => 'right',
      'field_user_social_dorg' => 'right',
      'field_user_participate_days' => 'right',
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
    'hide_page_title' => '2',
    'page_option_title' => '%user:field_user_first_name %user:field_user_last_name',
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function campsite_account_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'attendee';
  $ds_view_mode->label = 'Attendee';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['attendee'] = $ds_view_mode;

  return $export;
}
