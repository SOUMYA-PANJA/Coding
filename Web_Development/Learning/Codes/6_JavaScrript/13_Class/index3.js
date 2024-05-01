function Product(name, price, rating) {
    this.name = name;
    this.price = price;
    this.rating = rating;

    // The below line works here also.
    // return {x: 10, y: 11};
}

const p1 = new Product("NVidia RTX 3070Ti", 15000000, 4.9);
console.log("p1:", p1);

/* 
 * In JavaScript "this" keyword refers to the context which is calling.
 * 
*/

let obj1 = {
    p: Product
};

obj1.p("Mi Camera", 5000, 4.2); // Here the calling context is obj1
console.log("obj1:", obj1);