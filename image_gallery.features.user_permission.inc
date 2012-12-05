<?php
/**
 * @file
 * image_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function image_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create album content.
  $permissions['create album content'] = array(
    'name' => 'create album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create photo content.
  $permissions['create photo content'] = array(
    'name' => 'create photo content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create slideshow content.
  $permissions['create slideshow content'] = array(
    'name' => 'create slideshow content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any album content.
  $permissions['delete any album content'] = array(
    'name' => 'delete any album content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any photo content.
  $permissions['delete any photo content'] = array(
    'name' => 'delete any photo content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slideshow content.
  $permissions['delete any slideshow content'] = array(
    'name' => 'delete any slideshow content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own album content.
  $permissions['delete own album content'] = array(
    'name' => 'delete own album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own photo content.
  $permissions['delete own photo content'] = array(
    'name' => 'delete own photo content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slideshow content.
  $permissions['delete own slideshow content'] = array(
    'name' => 'delete own slideshow content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any album content.
  $permissions['edit any album content'] = array(
    'name' => 'edit any album content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any photo content.
  $permissions['edit any photo content'] = array(
    'name' => 'edit any photo content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any slideshow content.
  $permissions['edit any slideshow content'] = array(
    'name' => 'edit any slideshow content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own album content.
  $permissions['edit own album content'] = array(
    'name' => 'edit own album content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own photo content.
  $permissions['edit own photo content'] = array(
    'name' => 'edit own photo content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slideshow content.
  $permissions['edit own slideshow content'] = array(
    'name' => 'edit own slideshow content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
