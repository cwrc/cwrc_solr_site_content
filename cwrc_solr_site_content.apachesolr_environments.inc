<?php
/**
 * @file
 * cwrc_solr_site_content.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function cwrc_solr_site_content_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Drupal site content search';
  $environment->url = 'http://solr:8080/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 1,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'page',
      2 => 'webform',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
