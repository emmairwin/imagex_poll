<?php
/**
 * @file
 * imagex_poll_addthis.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function imagex_poll_addthis_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-advpoll-field_addthis'
  $field_instances['node-advpoll-field_addthis'] = array(
    'bundle' => 'advpoll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addthis',
        'settings' => array(),
        'type' => 'addthis_disabled',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_addthis',
    'label' => 'Addthis',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Addthis');

  return $field_instances;
}
