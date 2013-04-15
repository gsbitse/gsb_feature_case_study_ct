<?php
/**
 * @file
 * gsb_feature_case_study_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_case_study_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_person_fac_student_other|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_person_fac_student_other';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-first',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-last',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_person_fac_student_other|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|case_study|business_insight';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'case_study';
  $ds_fieldsetting->view_mode = 'business_insight';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|case_study|business_insight'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|case_study|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'case_study';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_case_study_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Published',
        ),
      ),
    ),
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'green-rounded-button',
          'fis-at' => '',
          'fis-def-at' => TRUE,
        ),
      ),
    ),
    'field_person_fac_student_other' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'By',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|case_study|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|case_study|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'case_study';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_case_study_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_date_published' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'DATE POSTED',
        ),
      ),
    ),
  );
  $export['node|case_study|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_case_study_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_person_fac_student_other|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_person_fac_student_other';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_tags',
        1 => 'group_wrapper_name',
        2 => 'field_first_name',
        3 => 'field_person_fac_student_ref',
        4 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'group_wrapper_tags' => 'ds_content',
      'group_wrapper_name' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_person_fac_student_ref' => 'ds_content',
      'field_last_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'span',
    ),
    'layout_wrapper' => 'span',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['field_collection_item|field_person_fac_student_other|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|business_insight';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'business_insight';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_person_fac_student_other',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_case_study_number',
        3 => 'field_date_published',
      ),
    ),
    'fields' => array(
      'field_person_fac_student_other' => 'left',
      'title' => 'right',
      'field_case_study_number' => 'right',
      'field_date_published' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|case_study|business_insight'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_person_fac_student_other',
        2 => 'field_date_published',
        3 => 'field_case_study_number',
        4 => 'group_tags_wrapper',
        5 => 'field_body',
        6 => 'field_file_single_public',
        7 => 'field_case_study_at_harvard',
        8 => 'field_academic_area_single',
        9 => 'field_business_insight_topic',
        10 => 'field_discipline',
        11 => 'field_region',
        12 => 'field_target_audience',
        13 => 'field_tag',
        14 => 'field_company_organization',
        15 => 'field_industry',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_person_fac_student_other' => 'ds_content',
      'field_date_published' => 'ds_content',
      'field_case_study_number' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_body' => 'ds_content',
      'field_file_single_public' => 'ds_content',
      'field_case_study_at_harvard' => 'ds_content',
      'field_academic_area_single' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_discipline' => 'ds_content',
      'field_region' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_tag' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_industry' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|case_study|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_wrapper',
        1 => 'field_date_published',
        2 => 'title',
        3 => 'field_case_study_number',
        4 => 'field_person_fac_student_other',
        5 => 'field_body',
        6 => 'group_tags_wrapper',
        7 => 'field_target_audience',
        8 => 'field_tag',
        9 => 'field_region',
        10 => 'field_academic_area_single',
        11 => 'field_business_insight_topic',
        12 => 'field_company_organization',
        13 => 'field_industry',
        14 => 'field_discipline',
      ),
    ),
    'fields' => array(
      'group_content_wrapper' => 'ds_content',
      'field_date_published' => 'ds_content',
      'title' => 'ds_content',
      'field_case_study_number' => 'ds_content',
      'field_person_fac_student_other' => 'ds_content',
      'field_body' => 'ds_content',
      'group_tags_wrapper' => 'ds_content',
      'field_target_audience' => 'ds_content',
      'field_tag' => 'ds_content',
      'field_region' => 'ds_content',
      'field_academic_area_single' => 'ds_content',
      'field_business_insight_topic' => 'ds_content',
      'field_company_organization' => 'ds_content',
      'field_industry' => 'ds_content',
      'field_discipline' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|case_study|teaser'] = $ds_layout;

  return $export;
}
