const arr1 = [1, 2, 3, 4];
console.log("Type of arr1:", typeof arr1);

const arr2 = [5, 6, 7, 8];

const arr3 = arr1.concat(arr2);
console.log("arr3:", arr3);

const arr4 = [arr1, arr2];
console.log("arr4:", arr4);

const arr5 = [...arr1, ...arr2];
console.log("arr5:", arr5);

console.log("arr1:", arr1);
console.log("arr1 (using spread operator):", ...arr1);

// "..." is Rest as well as Spread operator. It depends on the usage.

function func1() {
    console.log("Inside func1:");
    console.log("Arguments:", arguments);
    console.log("Type of arguments:", typeof arguments);
    console.log("Executed func1...");
}

// Execute the function in browser console.
func1(1, 2, 3, 4);

function func2() {
    console.log("Inside func2:");
    // "arguments" is not an array. Therfore it is not iterable.
    // let args = arguments.map(element => element*2);
    let args = Array.from(arguments);
    console.log("Type of args:", typeof arguments);
    console.log("args:", args);
    let finalArray = args.map(element => element * 2);
    console.log("Type of finalArray:", typeof finalArray);
    console.log("finalArray:", finalArray);
    console.log("Executed func2...");
}

func2(1, 2, 3, 4);
func2(1, 2, 3, 4, 5, 6, 7, 8);


// Rest operator

function func3(...args) {
    console.log("Inside func3:");
    console.log("Type of args:", typeof arguments);
    console.log("args:", args);
    let finalArray = args.map(element => element * 2);
    console.log("Type of finalArray:", typeof finalArray);
    console.log("finalArray:", finalArray);
    console.log("Executed func3...");
}

func3(1, 2, 3, 4);
func3(1, 2, 3, 4, 5, 6, 7, 8);


// Spread operator on strings.

const var1 = "hello world";
const arr6 = [...var1];
console.log("var1:", var1);
console.log("arr6:", arr6);