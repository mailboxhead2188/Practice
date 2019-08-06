var exec = require('child_process').exec;

function getClipboard(func) {
    exec('/usr/bin/xclipboard -o -selection clipboard', function(err, stdout, stderr) {
	if (err || stderr) return func(err || new Error(stderr));
	func(null, stdout);
    });
};

function clipFunc(err, text) {
    if (err) throw err;
    console.log(text);
};

getClipboard(clipFunc);
