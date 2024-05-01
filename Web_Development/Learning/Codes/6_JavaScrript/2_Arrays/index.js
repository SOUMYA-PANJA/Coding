let arr1 = ["hello", 123, 43.22, true];
let arr2 = new Array();
let arr3 = new Array(5);

console.log("arr1: ", arr1);
console.log("arr2: ", arr2);
console.log("arr3: ", arr3);


console.log("New size of arr1: ", arr1.push(12, 3, "HEllo")); // Add element at the end and returns a new length.
console.log("arr1: ", arr1);

console.log("Removed element at the end: ", arr1.pop()); // Removes the last element and returns it.
console.log("arr1: ", arr1);

console.log("Removed element at the first: ", arr1.shift()); // Removes the first element and returns it.
console.log("arr1: ", arr1);

console.log("Add elements at the first: ", arr1.unshift(1, 2, 3, 4)); // Add elements at the first and returns the new length.
console.log("arr1: ", arr1);

let arr4 = [1, 2, 3];
let arr5 = [4, 5, 6];
let arr6 = arr4.concat(arr5);
console.log("arr4: ", arr4, "\narr5: ", arr5, "\narr6: ", arr6);

console.log("arr1: ", arr1);
console.log("String: ", arr1.join("__"));

console.log("arr4:", arr4);
arr4.reverse(); // Returns the reference of the same array.
console.log("arr4: ", arr4); 
console.log("Index of 2: ", arr4.indexOf(2)); 
console.log("Index of 8: ", arr4.indexOf(8));
console.log("arr1:", arr1);
console.log("index 2 to 6:", arr1.slice(2, 7));
console.log("arr1:", arr1);
console.log("Add 11 at index 2 by deleting no element:", arr1.splice(2, 0, 11));
console.log("arr1:", arr1);
console.log("Add 11 at index 2 by deleting 2 element:", arr1.splice(2, 2, 13));
console.log("arr1:", arr1);
console.log("Delete 3 elements from index 2:", arr1.splice(2, 3));
console.log("arr1:", arr1);
console.log("Adding 3 elements at index 2: ", arr1.splice(2, 0, 10, 20, 30));
console.log("arr1:", arr1);