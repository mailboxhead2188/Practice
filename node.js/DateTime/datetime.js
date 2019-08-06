var date = new Date();
var daysOfWeek = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"];

var day = daysOfWeek[date.getDay()];
console.log("Today is: " + day);

var hours = date.getHours();
var minutes = date.getMinutes();
var seconds = date.getSeconds();
var amPm = "AM ";
if (hours >= 12) {
    amPm = "PM ";
    hours -= 12;
}
console.log("Current time is: " + hours + " " + amPm + ": " + minutes + ": " + seconds);
