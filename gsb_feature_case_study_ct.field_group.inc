<?php
/**
 * @file
 * gsb_feature_case_study_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_case_study_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_wrapper|node|case_study|teaser';
  $field_group->group_name = 'group_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_case_study_number',
      2 => 'field_date_published',
      3 => 'field_person_fac_student_other',
      4 => 'title',
      5 => 'group_tags_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_wrapper|node|case_study|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|case_study|default';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_business_insight_topic',
      2 => 'field_company_organization',
      3 => 'field_discipline',
      4 => 'field_industry',
      5 => 'field_region',
      6 => 'field_tag',
      7 => 'field_target_audience',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags_wrapper|node|case_study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|case_study|teaser';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_content_wrapper';
  $field_group->data = array(
    'label' => 'Tags:',
    'weight' => '6',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_business_insight_topic',
      2 => 'field_company_organization',
      3 => 'field_discipline',
      4 => 'field_industry',
      5 => 'field_region',
      6 => 'field_tag',
      7 => 'field_target_audience',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Tags:',
      'instance_settings' => array(
        'classes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags_wrapper|node|case_study|teaser'] = $field_group;

  return $export;
}
