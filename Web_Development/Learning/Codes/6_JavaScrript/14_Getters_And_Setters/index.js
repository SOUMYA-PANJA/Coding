class Complex {
    #real;
    #img;

    constructor (real, img) {
        this.#real = real;
        this.#img = img;
    }

    get real() {
        return this.#real;
    }

    set real(real) {
        this.#real = real;
    }

    get img() {
        return this.#img;
    }

    set img(img) {
        this.#img = img;
    }

    display() {
        console.log(this.#real, "+", this.#img, "\bi");
    }

    add(c) {
        this.#real += c.real;
        this.#img += c.img;
    }
    
    subtract(c) {
        this.#real -= c.real;
        this.#img -= c.img;
    }
}

c1 = new Complex(10, 20);
console.log("C1: ");
c1.display();
c2 = new Complex(5, 5);
console.log("C2: ");
c2.display();


console.log("Adding C2 to C1:");
c1.add(c2);
console.log("C1: ");
c1.display();

console.log("Setting new values for C2:");
c2.real = 100;
c2.img = 200;
console.log("C2: ");
c2.display();