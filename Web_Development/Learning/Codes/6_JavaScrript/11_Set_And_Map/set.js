// The Set object lets you store unique values of any type, whether primitive values or object references.

let set1 = new Set();
console.log("set1:", set1);
console.log("set1 size:", set1.size);

let set2 = new Set([1, 1, 2, 2, 2, 3, 3, 3]);
console.log("set2:", set2);
console.log("set2 size:", set2.size);
set2.add(4);
console.log("set2:", set2);
console.log("set2 size:", set2.size);

let arr1 = [1, 1, 2, 2, 3, 3, 4, 5, 5];
console.log("arr1:", arr1);
let set3 = new Set(arr1);
console.log("set3:", set3);

let set4 = new Set([...arr1]);
console.log("set4:", set4);

console.log("Does set4 have 2:", set4.has(2));
set4.delete(2);
console.log("Does set4 have 2:", set4.has(2));

set4.clear();
console.log("set4:", set4);


// Set Difference

function setDiff(setA, setB) {
    return new Set([...setA].filter(element => !setB.has(element)));
}

let set5 = new Set([1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8]);
let set6 = new Set([1, 1, 2, 2, 3]);

console.log("set5:", set5);
console.log("set6:", set6);

console.log("Set Difference of set5 and set6:", setDiff(set5, set6));