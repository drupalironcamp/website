<?php
/**
 * @file
 * campsite_schedule.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campsite_schedule_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create schedule content'.
  $permissions['create schedule content'] = array(
    'name' => 'create schedule content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any schedule content'.
  $permissions['delete any schedule content'] = array(
    'name' => 'delete any schedule content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own schedule content'.
  $permissions['delete own schedule content'] = array(
    'name' => 'delete own schedule content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any schedule content'.
  $permissions['edit any schedule content'] = array(
    'name' => 'edit any schedule content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own schedule content'.
  $permissions['edit own schedule content'] = array(
    'name' => 'edit own schedule content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
