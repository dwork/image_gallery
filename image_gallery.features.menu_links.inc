<?php
/**
 * @file
 * image_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function image_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:albums
  $menu_links['main-menu:albums'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'albums',
    'router_path' => 'albums',
    'link_title' => 'Albums',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Albums');


  return $menu_links;
}
