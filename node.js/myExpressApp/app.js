var createError = require('http-errors');
var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
var routes = require('./routes');
var urlencoded = require('body-parser');

var app = express();
var port = process.env.PORT || 3000;

app.use(logger('dev'));
app.use(urlencoded.json());
app.use(cookieParser());

// Setup the routes
routes(app);

module.exports = app;