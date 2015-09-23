var express = require('express');
var path = require('path');
var favicon = require('serve-favicon');
var logger = require('morgan');
var cookieParser = require('cookie-parser');
var bodyParser = require('body-parser');
var five = require("johnny-five");

var app = express();
var http = require('http').Server(app);   

// view engine setup
app.set('views','./views');
app.set('view engine', 'jade');

// uncomment after placing your favicon in /public
//app.use(favicon(__dirname + '/public/favicon.ico'));
app.use(logger('dev'));
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(__dirname+ '/public'));


require('./routes/routes_www')(app);
require('./routes/routes_API')(app,five);



http.listen(3141,function () {
   
   console.log ('Escuchando por el puerto PI');

});