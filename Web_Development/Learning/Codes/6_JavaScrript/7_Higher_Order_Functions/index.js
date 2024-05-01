// A function that takes function as arguments or returns functions are called higher order functions.
// A function that takes variables as arguments or returns variables are first class functions.


// Function taking function as arguments.
const powerTwo = n => n ** 2;

function powerThree(func, n) {
    return func(n) * n;
}

console.log("Power Three:", powerThree(powerTwo, 10));


// Function returning function.

function sayHello() {
    return () => {
        console.log("Hello World...");
    }
}

let displayOutput = sayHello();
console.log("Display Output variable:", displayOutput)
displayOutput();


// Nested Functions

const funcOne = x => {
    const funcTwo = y => {
        const funcThree = z => {
            return x + y + z;
        }
        return funcThree;
    }
    return funcTwo;
}

console.log("Nested Function:", funcOne);
console.log("Value from nested function:", funcOne(10)(20)(30));


// Use of higher order functions.

const arrValues = [1, 2, 3, 4, 5];
const sumArray = arr => {
    let total = 0;
    arr.forEach(element => {
        total += element;
    });
    return total;
}

console.log("Sum Array Function:", sumArray);
console.log("Sum of the array elements:", sumArray(arrValues));

function displayHello() {
    console.log("Hello");
}

// Runs the function displayHello every 1000ms = 1sec.
// setInterval(displayHello, 1000);

// Runs the function displayHello after 2sec for once.
setTimeout(displayHello, 2000);