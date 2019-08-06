'use strict';
var mssql = require('mssql');

var config = {
    user: 'mailboxhead',
    password: 'big_mac88',
    server: 'nodejssqlsvr.database.windows.net',
    database: 'nodejstestdb',
    options : {
        encrypt: true
    }
};

mssql.connect(config, function(err) {
    if (err) {
        throw err;
    }
});

module.exports = mssql;
