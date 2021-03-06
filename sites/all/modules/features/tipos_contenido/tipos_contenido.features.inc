<?php
/**
 * @file
 * tipos_contenido.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tipos_contenido_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tipos_contenido_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tipos_contenido_node_info() {
  $items = array(
    'compromiso_de_gestion' => array(
      'name' => t('Compromiso de gestión'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Compromiso de gestión'),
      'help' => '',
    ),
    'evaluacion_de_metas' => array(
      'name' => t('Evaluacion de metas'),
      'base' => 'node_content',
      'description' => t('Content type de evaluacion de metas'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'instancia_coordinacion' => array(
      'name' => t('Instancia de Coordinación'),
      'base' => 'node_content',
      'description' => t('El Sistema Nacional de Gestión del Riesgo se estructura por medio de las siguientes "instancias de coordinación". '),
      'has_title' => '1',
      'title_label' => t('Nombre de la instancia '),
      'help' => '',
    ),
    'miembros' => array(
      'name' => t('Integrantes Comités / Asistentes Foro'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre representante'),
      'help' => '',
    ),
    'productos_adicionales' => array(
      'name' => t('Productos adicionales'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
