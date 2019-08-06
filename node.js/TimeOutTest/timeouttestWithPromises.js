var http = require('http');

function ResolveTimeoutFunc() {
    console.log('Hey hey hey');
};

function sleep(ms) {
    return new Promise(function (resolve, reject) {
	if (ms > 5000) {
	    console.error('Too long of a wait');
	    return Promise.fail();
	}

	setTimeout(resolve, ms);
      }
    );
};

async function demo() {
    console.log('Taking a 2 second break...');
    await sleep(2000).then(ResolveTimeoutFunc);
    console.log('Taking a 3 second break...');
    await sleep(3000).then(ResolveTimeoutFunc);
    console.log('Taking a 7 second break...');
    await sleep(7000)
        .then(ResolveTimeoutFunc)
	.catch(err => console.log('Whoa there buddy!'));
    ;
};

demo();
