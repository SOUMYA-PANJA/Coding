function greet1(x, y) {
    console.log("Greet1:", x + y);
}
function greet2(x, y) {
    console.log("Greet2:", x + y);
    return;
}
function greet3(x, y) {
    // console.log(x * y);
    return x * y;
}
function greet4(x, y = 10) {
    // console.log(x * y);
    return x * y;
}

console.log("Return value of greet1 (By default returns undefined):", greet1(10, 20));
console.log("Return value of greet2 (By default returns undefined):", greet2(10, 20));
console.log("Return value of greet3:", greet3(10, 20));
console.log("Return value of greet4:", greet4(10, 20));
console.log("Return value of greet4:", greet4(10));


function special() {
    let sum = 0;
    for (let index = 0; index < arguments.length; index++) {
        sum += arguments[index];
    }

    return sum;
}

console.log("Unlimited arguments function:", special(1, 2, 3, 4, 5));


// Arrow Functions

// It is not mandatory to use const.
// const square = (x) => x * x; // Valid
const square = x => x * x; // Valid

const sumOfTwoNumbers = (x, y) => x + y;

const sum = (x, y) => {
    console.log(`Successfully added ${x} and ${y}.`);
    return x + y;
};

console.log("Square of a number:", square(10));
console.log("Added two numbers:", sumOfTwoNumbers(10, 20));
let var1 = sum(10, 100);
console.log("Sum value is:", var1);

// Returning an object using arrow functions.
const sumAndDifference = (x, y) => ({sum: x + y, difference: x - y});

console.log("Sum and difference of number:")
console.log(sumAndDifference(10, 9));


// Anonymous Function

let func1 = function () {
    console.log("Hello Anonymous Function.");
};

console.log("Calling Anonymous function...");
func1();


// Immediately Invoked Function: Used to invoke a function which is needed only once, or at the time of creating. These are also called self-invoking functions.

console.log("Calling Immediately Invoked Function.");
(
    // We can pass names to this functions also.
    function exec() {
    // function () {
        console.log("Immediately Invoked Function");
    }
)();

console.log("Calling Immediately Invoked Function with Arguments.");
(
    function (x, y) {
        console.log("Immediately Invoked Function with Arguments:", x * y);
    }
)(10, 20);


// Function Expression: All the definition of functions are function expression (Can be named or non-named function expression).