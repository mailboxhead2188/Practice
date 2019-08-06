function compareProperties(object1, object2) {
    return Object.keys(object2).every(key => object1.hasOwnProperty(key) && object2[key] == object1[key]);
};

var obj1 = new Object();
obj1["Name"] = "Paul";
obj1["Age"] = 32;
obj1["Blerg"] = "Flarg";

var obj2 = new Object();
obj2["Name"] = "John";
obj2["Age"] = 44;
obj2["Occupation"] = "Engineer";

var obj3 = new Object();
obj3["Name"] = "John";
obj3["Age"] = 44;
obj3["Occupation"] = "Engineer";


var rtn = compareProperties(obj1, obj2);
console.log(rtn);
rtn = compareProperties(obj2, obj3);
console.log(rtn);
