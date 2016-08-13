<?php
/**
 * @file
 * campsite_account.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campsite_account_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|user|user|attendee';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'attendee';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_first_name',
      1 => 'field_user_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-name field-group-div',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_name|user|user|attendee'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_social_links|user|user|form';
  $field_group->group_name = 'group_user_social_links';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social links',
    'weight' => '24',
    'children' => array(
      0 => 'field_user_social_facebook',
      1 => 'field_user_social_twitter',
      2 => 'field_user_social_linkedin',
      3 => 'field_user_social_dorg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-social-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_social_links|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Name');
  t('Social links');

  return $field_groups;
}
