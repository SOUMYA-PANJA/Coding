// Id
let var1 = document.getElementById("id1");

// Selects the text as well as the HTML tags inside it.
console.log("Inner HTML:", var1.innerHTML);
// Selects the text only.
console.log("Inner Text:", var1.innerText);


// Class
let var2 = document.getElementsByClassName('class1');
console.log("var2:", var2);
console.log("var2[2] innerText:", var2[2].innerText);

// Changing innerText
var2[1].innerText = "NodeJS";


// TagName
let var3 = document.getElementsByTagName("h4");
console.log("var3.length", var3.length);

// Changing Color
var3[1].style.color = "red";


// Query Selector
let var4 = document.querySelector(".class2");
let var5 = document.querySelector("#id2");

var4.className = "class3";
var5.classList = "class4 class5 class6";

let var6 = document.querySelector(".class7");
var6.setAttribute("color", "blue");
var6.style.backgroundColor = "green";