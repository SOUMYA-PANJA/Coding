let obj1 = {
    x: 10,
    func () {
        console.log("Hello:", this.x);
    }
};

obj1.func();