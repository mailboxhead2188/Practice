var arr = ['a','b','c',1,2,3,3,2,1,'c','b','a'];

function filterFromArray(arr) {
    var nwArr = new Array();
    var argArr = Array.from(arguments);
    arr.forEach(function(x) { if (!argArr.includes(x)) nwArr.push(x) });
    return nwArr;
};

var arr2 = filterFromArray(arr, 1,3,'c');
console.log(arr2);
