// Create element

let title = document.createElement("h1");
title.className = "class1";
title.style.color = "red";
title.style.fontSize = "25px";
title.textContent = "Hello World";
console.log(title);
document.body.appendChild(title);


// Remove element

let ul = document.querySelector("ul");
console.log(ul);
let liList = document.querySelectorAll("li");
console.log(liList);
for (const liElement of liList) {
    ul.removeChild(liElement);
}