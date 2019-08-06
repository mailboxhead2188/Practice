var csvItems = '1,2,3,4,Joe,Hello,World';
var arrayOfItems = csvItems.split(',');

var count = 0;
arrayOfItems.forEach(function(x) { console.log(count + ": " + x); count++ });

var csvItemsWithHeaders = 'Header1,Header2\na,b\n1,2';
csvItemsWithHeaders
    .slice(csvItemsWithHeaders.indexOf('\n') + 1)
    .split('\n')
    .map(v => v.split(','));
console.log(csvItemsWithHeaders);


