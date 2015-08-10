<?php
/**
 * @file
 * feedback_request_form.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feedback_request_form_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feedback_request_form_node_info() {
  $items = array(
    'feedback_request' => array(
      'name' => t('Feedback Request'),
      'base' => 'node_content',
      'description' => t('Feedback on how to improve this calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
