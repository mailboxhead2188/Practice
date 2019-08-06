'use strict';
var mssql = require('../sql');

var Item = function(item) {
    this.Name = item.Name;
    this.Description = item.Description;
    this.Id = item.Id;
};


Item.getAllItems = function (result) {
    mssql.query('select * from dbo.Items', function(err, res) {
        if (err) {
            result(null, err);
            return;
        }

        result(null, res);
    });
};

Item.getSingleItem = function(itemId, result) {
    console.log('select * from dbo.Items where Id=' + itemId);
    mssql.query('select * from dbo.Items where Id=' + itemId, function(err, res) {
        if (err) {
            result(null, err);
            return;
        }

        result(null, res);
    });
};

Item.updateItem = function(itemId, name, desc, result) {
    var query = 
        'update dbo.Items set Name="' + name + '", Description="' + desc + '" where Id=' + itemId;
    mssql.query(query, function(err, res) {
        if (err) {
            result(null, err);
            return;
        }

        result(null, res);      
    });
};

Item.deleteItem = function(itemId, result) {
    var query = 'delete from dbo.Items where Id=' + itemId;
    mssql.query(query, function(err, res) {
        if (err) {
            result(null, err);
            return;
        }

        result(null, res);
    });
};

Item.createItem = function(name, description, result) {
    var query = 'insert into dbo.Items Name="' + name + '", Description="' + description + '"';
    mssql.query(query, function(err, res) {
        if (err) {
            result(null, err);
            return;
        }

        result(null, res.Id);
    });
};

Item.searchForItems = function(term, result) {
    var query = "select * from dbo.Items where [Name] like '%" + term + "%' or [Description] like '%" + term + "%'";
    console.log(query);
    mssql.query(query, function(err, res) {
        if (err) {
            result(null, err);
            return;
        }

        result(null, res);
    });
};

module.exports = Item;