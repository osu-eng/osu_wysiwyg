<?php
/**
 * @file
 * osu_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function osu_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format osu_wysiwyg_wysiwyg'.
  $permissions['use text format osu_wysiwyg_wysiwyg'] = array(
    'name' => 'use text format osu_wysiwyg_wysiwyg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
