const Product = (name, price, rating) => {
    this.name = name;
    this.price = price;
    this.rating = rating;
};

// The theory of "this" keyword of pointing to the calling context is not applicable with arrow functions.

const p1 = new Product("iPhone", 100000, 4.7);
console.log("p1:", p1);