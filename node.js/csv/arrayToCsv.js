var arrayOfItems2D = [['Header1','Header2'], ['a','b'], ['1','2']];

var arrayOfItems = arrayOfItems2D.map(function(row) { return row.join() }).join();

console.log(arrayOfItems);
