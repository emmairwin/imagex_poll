<?php
/**
 * @file
 * imagex_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: access electoral list.
  $permissions['access electoral list'] = array(
    'name' => 'access electoral list',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: add write-ins.
  $permissions['add write-ins'] = array(
    'name' => 'add write-ins',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: administer polls.
  $permissions['administer polls'] = array(
    'name' => 'administer polls',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: cancel own vote.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(),
    'module' => 'advpoll',
  );

  // Exported permission: create advpoll content.
  $permissions['create advpoll content'] = array(
    'name' => 'create advpoll content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any advpoll content.
  $permissions['delete any advpoll content'] = array(
    'name' => 'delete any advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own advpoll content.
  $permissions['delete own advpoll content'] = array(
    'name' => 'delete own advpoll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any advpoll content.
  $permissions['edit any advpoll content'] = array(
    'name' => 'edit any advpoll content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own advpoll content.
  $permissions['edit own advpoll content'] = array(
    'name' => 'edit own advpoll content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: inspect all votes.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: show vote results.
  $permissions['show vote results'] = array(
    'name' => 'show vote results',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: show write-ins.
  $permissions['show write-ins'] = array(
    'name' => 'show write-ins',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'advpoll',
  );

  // Exported permission: vote on polls.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'advpoll',
  );

  return $permissions;
}
