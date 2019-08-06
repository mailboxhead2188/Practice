var url = require('url');
var http = require('http');
var fs = require('fs');

function serveFile(request, response) {
    var filePath = url.parse(request.url, true);
    var fileName = "." + filePath.pathname;

    fs.readFile(fileName, function(error, data) { return readFileCallback(error, data, response) });
};

function readFileCallback(error, data, response) {
    if (error) {
      response.writeHead(404, {'Content-Type': 'text/html'});
      return response.end("404 Not Found");
    } 
    response.writeHead(200, {'Content-Type': 'text/html'});
    response.write(data);
    return response.end();
    if (error) {
	return '404 not found';
    }
    return data;
};

http.createServer(serveFile).listen(8080);
