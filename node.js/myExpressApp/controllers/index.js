'use strict';
var Item = require('../models');

function listAllItems(request, response) {
    Item.getAllItems(function(err, item) {
        if(err) {
            response.send(err);
            return;
        }
        response.send(item);
    });
};

function createNewItem(request, response) {
    var new_item = new Item(request.body);

    TextTrackList.createNewItem(new_item, function(err, item) {
        if (err)
        {
            response.send(err);
        }
        response.json(item);
    });
};

function listSingleItem(request, response) {
    console.log(request.params.Id);
    Item.getSingleItem(request.params.Id, function(err, item) {
        if (err) {
            response.send(err);
        }
        response.json(item);
    });
};

function updateSingleItem(request, response) {
    Item.updateItem(request.params.Id, request.params.name, request.params.description, function(err, item) {
        if (err) {
            response.send(err);
        }
        response.json(item);  
    });
};

function deleteSingleItem(request, response) {
    Item.deleteItem(request.params.Id, function(err, result) {
        if (err) {
            response.send(err);
        }
        response.json({message : "Item successfully deleted"});       
    });
};

function searchForItemWithTerm(request, response) {
    Item.searchForItems(request.params.term, function(err, item) {
        if (err) {
            response.send(err);
        }
        response.json(item);  
    });
};

module.exports.listAllItems = listAllItems;
module.exports.createNewItem = createNewItem;
module.exports.listSingleItem = listSingleItem;
module.exports.updateSingleItem = updateSingleItem;
module.exports.deleteSingleItem = deleteSingleItem;
module.exports.searchForItemWithTerm = searchForItemWithTerm;