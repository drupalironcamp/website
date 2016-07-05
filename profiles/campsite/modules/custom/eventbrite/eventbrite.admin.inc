<?php

/**
 * {@inheritdoc}
 */
function eventbrite_admin_config_form($form, &$form_state) {
  $form = array();
  $form['oauth_token'] = array(
    '#type' => 'textfield',
    '#title' => t('oAuth token'),
    '#default_value' => variable_get('eventbrite_oauth_token', ''),
    '#required' => TRUE,
  );
  $form['role'] = array(
    '#type' => 'select',
    '#title' => t('User role for new users'),
    '#options' => user_roles(TRUE),
    '#default_value' => variable_get('eventbrite_role', ''),
    '#description' => t('This role will be automatically assigned to all imported users.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * {@inheritdoc}
 */
function eventbrite_admin_config_form_submit(&$form, &$form_state) {
  variable_set('eventbrite_oauth_token', $form_state['values']['oauth_token']);
  variable_set('eventbrite_role', $form_state['values']['role']);
  $roles = user_roles(TRUE);
  variable_set('eventbrite_role_name', $roles[$form_state['values']['role']]);
  drupal_set_message(t('Settings has been saved.'));
  drupal_goto('/');
}