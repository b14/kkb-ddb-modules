<?php
/**
 * @file
 * kkb_event.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function kkb_event_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_ding_event_files.settings|display_default"] = 1;
  $overrides["field_base.field_ding_event_files.settings|display_field"] = 1;

 return $overrides;
}