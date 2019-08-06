var http = require('http');

// Note that doing something like
// var someFunction = new function(req, resp) { ... };
// Does not work, as the parameters won't be passed
//
function writeHelloWorld(request, response) {
    response.writeHead(200, {'content-type': 'text/plain'});
    response.end('Hello World!\n');
};


http.createServer(writeHelloWorld).listen(8124);

console.log('Server listening at http://localhost:8124');
