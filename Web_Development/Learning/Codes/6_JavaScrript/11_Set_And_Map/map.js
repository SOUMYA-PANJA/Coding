// The Map object holds key-value pairs and remembers the original insertion order of the keys. Any value (both objects and primitive values) may be used as either a key or a value. 

let map1 = new Map();
console.log("map1:", map1);
console.log("map1 size:", map1.size);

let arr1 = [
    [1, "Artificial"],
    [2, "Intelligence"],
    [3, "Machine"],
    [4, "Learning"],
    [5, "Deep"],
    [6, "Computer"],
    [7, "Vision"],
    [8, "Language"]
];

console.log("Added elements using constructor:");
let map2 = new Map(arr1);
console.log("map2:", map2);
console.log("map2 size:", map2.size);


console.log("Added elements using forEach:");
arr1.forEach(element => map1.set(element[0], element[1]));

console.log("map1:", map1);
console.log("map1 size:", map1.size);