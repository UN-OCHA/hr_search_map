<?php
/**
 * @file
 * hr_search_map.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function hr_search_map_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'faceted_search_map';
  $openlayers_maps->title = 'Faceted Search Map';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '78.7499999787073, 32.5468131743708',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'search_map_openlayers_1' => 'search_map_openlayers_1',
        ),
        'panMapIfOutOfView' => 1,
        'keepInMap' => 0,
      ),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'search_map_openlayers_1' => 'search_map_openlayers_1',
          'mapquest_osm' => 0,
          'mapquest_openaerial' => 0,
        ),
        'point_zoom_level' => '2',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'search_map_openlayers_1' => 'search_map_openlayers_1',
    ),
    'layer_weight' => array(
      'search_ps_openlayers_1' => '0',
      'clone_of_gvj_map_openlayers_1' => '0',
      'contacts_openlayers_data' => '0',
      'search_map_openlayers_1' => '0',
      'gvj_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'search_alenchalak_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'operational_presence_map_openlayers_1' => '0',
    ),
    'layer_styles' => array(
      'operational_presence_map_openlayers_1' => '0',
      'search_alenchalak_openlayers_1' => '0',
      'geofield_formatter' => 'default',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'gvj_map_openlayers_1' => '0',
      'search_ps_openlayers_1' => 'humanitarianresponse_default',
      'clone_of_gvj_map_openlayers_1' => '0',
      'contacts_openlayers_data' => '0',
      'search_map_openlayers_1' => 'humanitarianresponse_default',
    ),
    'layer_styles_select' => array(
      'operational_presence_map_openlayers_1' => '0',
      'search_alenchalak_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'gvj_map_openlayers_1' => '0',
      'search_ps_openlayers_1' => 'humanitarianresponse_select',
      'clone_of_gvj_map_openlayers_1' => '0',
      'contacts_openlayers_data' => '0',
      'search_map_openlayers_1' => 'humanitarianresponse_select',
    ),
    'layer_activated' => array(
      'search_map_openlayers_1' => 'search_map_openlayers_1',
      'operational_presence_map_openlayers_1' => 0,
      'search_alenchalak_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'gvj_map_openlayers_1' => 0,
      'search_ps_openlayers_1' => 0,
      'clone_of_gvj_map_openlayers_1' => 0,
      'contacts_openlayers_data' => 0,
    ),
    'layer_switcher' => array(
      'search_map_openlayers_1' => 'search_map_openlayers_1',
      'operational_presence_map_openlayers_1' => 0,
      'search_alenchalak_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'gvj_map_openlayers_1' => 0,
      'search_ps_openlayers_1' => 0,
      'clone_of_gvj_map_openlayers_1' => 0,
      'contacts_openlayers_data' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'humanitarianresponse_default',
      'select' => 'humanitarianresponse_select',
      'temporary' => 'default',
    ),
  );
  $export['faceted_search_map'] = $openlayers_maps;

  return $export;
}
