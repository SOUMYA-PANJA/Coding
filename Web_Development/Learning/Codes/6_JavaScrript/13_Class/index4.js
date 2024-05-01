const Product = function (name, price, rating) {
    this.name = name;
    this.price = price;
    this.rating = rating;
};

const p1 = new Product("iPhone", 100000, 4.7);
console.log("p1:", p1);