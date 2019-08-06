'use strict';
function routes(app) {
  var controller = require('../controllers/');

  // Generic list API.
  app.route('/list')
     .get(controller.listAllItems)
     .post(controller.createNewItem);
  
  // Manipulate a specific item.
  app.route('/list/:Id')
     .get(controller.listSingleItem)
     .put(controller.updateSingleItem)
     .delete(controller.deleteSingleItem);

  // Searches for an item based on a term.
  app.route('/find/:term')
     .get(controller.searchForItemWithTerm);
};


module.exports = routes;
