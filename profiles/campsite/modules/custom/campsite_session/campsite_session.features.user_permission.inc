<?php
/**
 * @file
 * campsite_session.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campsite_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
