console.log(this); // Try to run this in brwser and see.

let var1 = "Hello";
let var2 = 12;
let var3 = 12.834123;
let var4 = true;
let var5 = null;
let var6 = undefined;

console.log(var1, var2, var3, var4, var5, var6);

let values = ["hello", 12, var3, var4, null, undefined, false];

console.log(values);

// Variables declared by let are only available inside the block where they're defined. Variables declared by var are available throughout the function in which they're declared.
var var7 = 100;

const var8 = 10000;
// The below line will provide error.
// var8 = 100;
console.log(var8);

let var10 = 5;
let var11 = 2;
console.log(var10 + var11);
console.log(var10 - var11);
console.log(var10 * var11);
console.log(var10 / var11); // Watch the ouput carefully.
console.log(var10 ** var11);
console.log(var10 % var11);


console.log(var10 = var11);

let name1 = "Hello";
let name2 = "Hello";
let var12 = 200;
let var13 = "200";
let var14 = "300"

console.log(name1 == name2);
console.log(name1 === name2);
console.log(var12 == var13); // Converts the string in var13 to number
console.log(var12 === var13);
console.log(var12 == var14);
console.log(var12 === var14);
