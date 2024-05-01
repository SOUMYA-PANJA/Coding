class Product {
    constructor (name, price, rating) {
        this.name = name;
        this.price = price;
        this.rating = rating;

        // Default return
        // return this;

        // The below line will be ignored, as primitive data is returned
        // return 10;

        // If object is returned then it will be considered
        return {x: 10, y: 11};
    }
}

const p1 =  new Product();
console.log("p1:", p1);