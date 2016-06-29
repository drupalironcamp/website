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
  drupal_set_message(t('Token has been saved.'));
  drupal_goto('/');
}