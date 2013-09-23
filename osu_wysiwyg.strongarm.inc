<?php
/**
 * @file
 * osu_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osu_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__file_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv wmv ico';
  $export['media__file_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
  );
  $export['media__wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_browser_plugins';
  $strongarm->value = array(
    0 => 'upload',
    1 => 'media_default--media_browser_1',
    2 => 'media_default--media_browser_my_files',
    3 => 'media_internet',
  );
  $export['media__wysiwyg_browser_plugins'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_upload_directory';
  $strongarm->value = 'media';
  $export['media__wysiwyg_upload_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_array';
  $strongarm->value = array(
    'count' => 0,
    'first' => 0,
    'join' => 0,
    'join-path' => 0,
    'keys' => 0,
    'last' => 0,
    'reversed' => 0,
    'value' => 0,
  );
  $export['token_insert_global_used_tokens_array'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_content-type';
  $strongarm->value = array(
    'description' => 0,
    'edit-url' => 0,
    'machine-name' => 0,
    'name' => 0,
    'node-count' => 0,
  );
  $export['token_insert_global_used_tokens_content-type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_current-date';
  $strongarm->value = array(
    'panopoly_day' => 'panopoly_day',
    'panopoly_time' => 'panopoly_time',
    'custom' => 0,
    'long' => 0,
    'medium' => 0,
    'raw' => 0,
    'short' => 0,
    'since' => 0,
  );
  $export['token_insert_global_used_tokens_current-date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_current-page';
  $strongarm->value = array(
    'page-number' => 0,
    'query' => 0,
    'title' => 0,
    'url' => 0,
  );
  $export['token_insert_global_used_tokens_current-page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_current-user';
  $strongarm->value = array(
    'field_user_about' => 0,
    'cancel-url' => 0,
    'created' => 0,
    'edit-url' => 0,
    'mail' => 0,
    'ip-address' => 0,
    'last-login' => 0,
    'name' => 0,
    'one-time-login-url' => 0,
    'original' => 0,
    'field_user_picture' => 0,
    'roles' => 0,
    'url' => 0,
    'uid' => 0,
  );
  $export['token_insert_global_used_tokens_current-user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_date';
  $strongarm->value = array(
    'custom' => 0,
    'panopoly_day' => 0,
    'long' => 0,
    'medium' => 0,
    'raw' => 0,
    'short' => 0,
    'panopoly_time' => 0,
    'since' => 0,
  );
  $export['token_insert_global_used_tokens_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_date-field-value';
  $strongarm->value = array(
    'date' => 0,
    'to-date' => 0,
  );
  $export['token_insert_global_used_tokens_date-field-value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_facetapi_active';
  $strongarm->value = array(
    'facet-label' => 0,
    'facet-name' => 0,
    'active-value' => 0,
    'active-pos' => 0,
    'active-value-raw' => 0,
  );
  $export['token_insert_global_used_tokens_facetapi_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_facetapi_facet';
  $strongarm->value = array(
    'facet-label' => 0,
    'facet-name' => 0,
  );
  $export['token_insert_global_used_tokens_facetapi_facet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_facetapi_results';
  $strongarm->value = array(
    'end-count' => 0,
    'offset' => 0,
    'page-limit' => 0,
    'page-number' => 0,
    'page-total' => 0,
    'result-count' => 0,
    'keys' => 0,
    'start-count' => 0,
  );
  $export['token_insert_global_used_tokens_facetapi_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_file';
  $strongarm->value = array(
    'field_file_image_alt_text' => 0,
    'basename' => 0,
    'download-url' => 0,
    'extension' => 0,
    'fid' => 0,
    'size-raw' => 0,
    'name' => 0,
    'size' => 0,
    'type' => 0,
    'mime' => 0,
    'original' => 0,
    'owner' => 0,
    'path' => 0,
    'timestamp' => 0,
    'field_file_image_title_text' => 0,
    'url' => 0,
  );
  $export['token_insert_global_used_tokens_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_file-type';
  $strongarm->value = array(
    'edit-url' => 0,
    'count' => 0,
    'machine-name' => 0,
    'name' => 0,
  );
  $export['token_insert_global_used_tokens_file-type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_menu';
  $strongarm->value = array(
    'description' => 0,
    'edit-url' => 0,
    'machine-name' => 0,
    'menu-link-count' => 0,
    'name' => 0,
  );
  $export['token_insert_global_used_tokens_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_menu-link';
  $strongarm->value = array(
    'edit-url' => 0,
    'mlid' => 0,
    'menu' => 0,
    'parent' => 0,
    'parents' => 0,
    'root' => 0,
    'title' => 0,
    'url' => 0,
  );
  $export['token_insert_global_used_tokens_menu-link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_node';
  $strongarm->value = array(
    'author' => 0,
    'body' => 0,
    'field_featured_categories' => 0,
    'nid' => 0,
    'content-type' => 0,
    'changed' => 0,
    'created' => 0,
    'edit-url' => 0,
    'field_featured_status' => 0,
    'language' => 0,
    'menu-link' => 0,
    'original' => 0,
    'field_featured_image' => 0,
    'vid' => 0,
    'log' => 0,
    'summary' => 0,
    'title' => 0,
    'source' => 0,
    'url' => 0,
  );
  $export['token_insert_global_used_tokens_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_random';
  $strongarm->value = array(
    'number' => 'number',
    'hash' => 0,
  );
  $export['token_insert_global_used_tokens_random'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_site';
  $strongarm->value = array(
    'mail' => 0,
    'login-url' => 0,
    'name' => 0,
    'slogan' => 0,
    'url' => 0,
    'url-brief' => 0,
  );
  $export['token_insert_global_used_tokens_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_term';
  $strongarm->value = array(
    'description' => 0,
    'edit-url' => 0,
    'name' => 0,
    'node-count' => 0,
    'original' => 0,
    'parents' => 0,
    'parent' => 0,
    'field_featured_image' => 0,
    'root' => 0,
    'tid' => 0,
    'url' => 0,
    'vocabulary' => 0,
  );
  $export['token_insert_global_used_tokens_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_url';
  $strongarm->value = array(
    'absolute' => 0,
    'args' => 0,
    'brief' => 0,
    'path' => 0,
    'relative' => 0,
    'unaliased' => 0,
  );
  $export['token_insert_global_used_tokens_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_user';
  $strongarm->value = array(
    'field_user_about' => 0,
    'cancel-url' => 0,
    'created' => 0,
    'edit-url' => 0,
    'mail' => 0,
    'last-login' => 0,
    'name' => 0,
    'one-time-login-url' => 0,
    'original' => 0,
    'field_user_picture' => 0,
    'roles' => 0,
    'url' => 0,
    'uid' => 0,
  );
  $export['token_insert_global_used_tokens_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_view';
  $strongarm->value = array(
    'description' => 0,
    'machine-name' => 0,
    'name' => 0,
    'title' => 0,
    'url' => 0,
  );
  $export['token_insert_global_used_tokens_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_global_used_tokens_vocabulary';
  $strongarm->value = array(
    'description' => 0,
    'edit-url' => 0,
    'machine-name' => 0,
    'name' => 0,
    'node-count' => 0,
    'original' => 0,
    'term-count' => 0,
    'vid' => 0,
  );
  $export['token_insert_global_used_tokens_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_insert_use_tokens_per_role';
  $strongarm->value = 0;
  $export['token_insert_use_tokens_per_role'] = $strongarm;

  return $export;
}
