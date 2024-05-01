let arr = [1, 2, 3, 4];
const names = ["alex", "jack", "john", "james"];


// For-Each Loop: Used to perform the action on each element, defined in the callback function. And retunr undefined.

console.log("Using For-Each loop and anonymous function to print the arguments it gets when executed.");
arr.forEach(
    function (element, index, arr) {
        console.log(index, element, arr);
    }
);

console.log("Using For-Each loop and arrow function to print the arguments it gets when executed.");
arr.forEach(
    (element, index, arr) => console.log(index, element, arr)
);

console.log("For-Each and strings.");
names.forEach(
    element => console.log(element.toUpperCase())
);


// Map: Used to perform the action defined in the callback function on each element and return a newly created array. Therefore the callback function should have the return value.

let mappedArray = arr.map(
    (element, index, arr) => [index, element, arr]
);
console.log("Mapped Array:");
console.log(mappedArray);


// Filter: Used to extract elements for which the predicate function gives true. Therefore the predicate funciton should have return value.

let namesStartsWithJ = names.filter(
    // Predicate arguments: value, index, array
    element => element.startsWith("j")
);
console.log("Names starts to letter 'j':", namesStartsWithJ);


// Reduce

let sumOfArray = arr.reduce(
    // The callback arguments: previousValue, currentValue, currentIndex and array
    // The callback return value: accumulated value, intial value
    (prev, curr) => prev + curr, 0
);
console.log("Sum of the array:", sumOfArray);


// Every: Returns true if the predicate gives output true for all elements in the array.

let checkAllNumbers = arr.every(
    // Predicate arguments: value, index and array
    // returns a number
    element => typeof(element) === 'number'
);
console.log("Are all elements are numbers? :", checkAllNumbers);


// Find: Returns the elements which satify the predicate first.

let findEven = arr.find(
    // Predicate arguments: value, index and number
    // return a number
    element => element % 2 === 0
)

console.log("The first even number encountered:", findEven);

// FindIndex
// Some
// Sort