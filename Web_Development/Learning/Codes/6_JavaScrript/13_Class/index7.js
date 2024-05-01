let obj1 = {
    x: 10,
    func: () => {
        console.log("Hello:", this.x);
    }
};

obj1.func(); // Gives undefined as the for the arrow function the scope resolution occurs and the default scope is global. But global scope don't have variable "x"


let obj2 = {
    x: 10,
    func1 () {
        y = {
            func2: () => {
                console.log("Hello:", this.x);
            }
        }
        y.func2();
    }
};

obj2.func1(); // Here scope resolution occurs and get the reference of the obj2 as func1 is not an arrow function.