var number = 12345;
var numStr = number.toString();
var arr = new Array();

[...numStr].forEach(x => arr.push(x));
console.log(arr);
