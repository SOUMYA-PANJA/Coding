class Product {
    // As defined in the constructor the below given declarations are not required. But to provide default values we can set it.
    // name = null;
    // price = 0;

    // private data-member
    #rating;

    // In JavaScript constructors can't be overloaded
    constructor (name, price, rating) {
        console.log("Calling the constructor...");
        this.name = name;
        this.price = price;
        this.#rating = rating;
        console.log("Executed the constructor...");
    }

    display1 () {
        console.log("\n++++++++++++++++++++++++++++++++++++++");
        console.log(this);
        console.log("Displaying", this.name, "having price", this.price, "and rating", this.rating);
        console.log("++++++++++++++++++++++++++++++++++++++\n");
    }
    
    static display2 () {
        console.log("++++++++++++++++++++++++++++++++++++++");
        console.log("Display 2.");
        console.log("++++++++++++++++++++++++++++++++++++++");

    }
}

const p1 = new Product();

// As rating is a private memebers it will not be printed.
console.log("p1:", p1);
p1.display1();

const p2 = new Product("Raspberry", 6000, 4.5);
console.log("p2:", p2);
p2.display1();

Product.display2();

console.log("Accessing private memebers p2.rating:", p2.rating);