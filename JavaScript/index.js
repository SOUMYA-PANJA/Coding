console.log("I am index.js");

var num1 = 23;
var num2 = 32;
num1 = 22;
console.log(num1 + num2);

var name = "Hello";
var bye = 'World';
console.log(name + bye);

var marks = {
    'ravi': 32,
    "john": 23,
    "Kevin": 22
};
console.log(marks);

var a = true;
var b = false;
console.log(a, b);

var und1 = undefined;
var und2;
console.log(und1, und2);

var n = null;
console.log(n);

var arr = [1, 2, 3, 4, 5, "hello", true, null];
console.log(arr[5]);

function avg(a, b) {
    return (a + b) / 2;
};

c = avg(1, 2);
console.log(c);

console.log(3);
console.log('3');

var age = 42;

if (age < 18) {
    console.log("Teen");
}
else if (age < 30) {
    console.log("Twentenn");
}
else {
    console.log("OK");
}

arr = [1, 2, 3, 4, 5, 6];
for (var i = 0; i < arr.length; i++) {
    if(arr[i] == 5){
        break;
    }
    if(arr[i] == 3){
        continue;
    }
    console.log(arr[i]);
}

arr = ["hello", "harry", "bhai"];
arr.forEach(function (element) {
    console.log(element);
})

let l = 12; // Only be available in a scope
const v = 1; // Shows error if we change
// v = v + 1;

let j = 0;
while (j < arr.length) {
    console.log(arr[j]);
    j++;
}

arr = ["Kaise", "ho", "sab"];
do {
    j--;
    console.log(arr[j]);
} while (j > 0);

console.log("array length", arr.length);
arr.pop();
console.log("array length", arr.length);
arr.push("world");
console.log(arr);
console.log(arr.shift());
console.log(arr);
const newlen = arr.unshift("Jack"); // append at first and return the length
console.log(newlen);
console.log(arr);

console.log(arr.toString());
let d = [2,3,2,21,4]
console.log(d.sort()); // sort function changes elements to string and then sort it. If 4 and 21 is compared, the 21 will be first as it have 2

let str = "Hello world there the";
console.log(str.length);
console.log(str.indexOf("the"));
console.log(str.lastIndexOf("the"));
console.log(str.slice(2,7));
str = str.replace("the", "toh");
console.log(str);

let myDate = new Date();
console.log(myDate);
console.log(myDate.getTime());
console.log(myDate.getFullYear());
console.log(myDate.getDay());
console.log(myDate.getMinutes());
console.log(myDate.getHours());

let ele = document.getElementById('click');
// ele.style.background = 'yellow';
ele.classList.add("bg-primary");
console.log(ele.innerHTML);
console.log(ele.innerText);

let divcon = document.getElementsByTagName("div");
console.log(divcon);
let created1 = document.createElement('p');
created1.innerText = "This is created1";
let created2 = document.createElement('b');
created2.innerText = "This is created2";
divcon[1].appendChild(created1);
divcon[1].replaceChild(created2, created1);
divcon[1].removeChild(created2);

let sel = document.querySelector(".container");
console.log(sel);

function clicked(){
    console.log("The button is clicked.");
}

// window.onload = function(){
//     console.log("The document is loaded");
// }

firstcontainer.addEventListener('click', function(){
    console.log("Click hua.");
})
firstcontainer.addEventListener('mouseover', function(){// mouseout mouseup mousedown
    console.log("hover hua.");
})

function sum1(a, b){
    return a+b;
}
let sum2 = (a, b)=>{
    return a+b;
}

console.log(sum1(2, 3), sum2(2, 3));

logKaro = ()=>{
    console.log("Log ho gaya");
}
// clr1 = setTimeout(logKaro, 10000);
// clr = setInterval(logKaro, 2000);
// clearInterval(clr);
// clearTimeout(clr1);

/* 
localStorage.setItem('name':'harray');
localStorage
localStorage.getItem('name');
localStorage.removeItem('name');
localStorrage.clear();
*/

let obj = {name: 'Harr"y', Len: 1};
console.log(typeof(obj));
console.log(obj);
let jso = JSON.stringify(obj);
console.log(typeof(jso));
console.log(jso);

let parsed = JSON.parse(jso); // JSON will be in backticks ``
console.log(parsed);

let bac = 8;
console.log(`This is ${bac}`);