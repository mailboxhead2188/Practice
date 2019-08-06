var http = require('http');

function sleep(ms) {
    var now = new Date().getTime();

    while ( new Date().getTime() < now + millisecondsToWait )
    {
    }
};

function delayTwoSeconds() {
    sleep(2000);
};

function timeOutReached() {
    console.log('Timed out!');
};

setTimeout(timeOutReached, 1000);

//http.createServer(writeHelloWorld).listen(8124);

//console.log('Server listening at http://localhost:8124');
