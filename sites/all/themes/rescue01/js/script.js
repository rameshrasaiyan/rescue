/**
 * @file
 * A JavaScript file for the Rescue theme.
 *
 * @TODO Organize!
 */
(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.rescue01 = {
    attach: function (context, settings) {
    
	      $(".section-featured-content .block-featured-articles-block .view-featured-articles .views-row .views-field-body .field-content").ellipsis();
	    
    }
  };
})(jQuery, Drupal, this, this.document);
