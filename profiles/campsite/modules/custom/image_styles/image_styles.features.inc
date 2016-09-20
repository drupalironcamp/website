<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: sponsors_large.
  $styles['sponsors_large'] = array(
    'label' => 'Sponsors - large',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: users_attendee.
  $styles['users_attendee'] = array(
    'label' => 'Users - attendee',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 141,
          'height' => 141,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
