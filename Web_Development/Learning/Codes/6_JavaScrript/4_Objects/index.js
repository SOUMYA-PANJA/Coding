let obj1 = {id: 101, name: "Alex", salary: 12000}
console.log("Object1:", obj1);

let obj2 = new Object();
console.log("Object2:", obj2);
obj2.id = 102;
obj2.name = "John";
obj2.salary = 20000;
obj2["Skill"] = "JavaScript";
console.log("Object2:", obj2);

function Employee(id, name, salary) {
    this.id = id;
    this.name = name;
    this.salary = salary;
}

let obj3 = new Employee(103, "James", 25000);
console.log("Object3:", obj3);
console.log("Id of object3 using dot operator:", obj3.id);
console.log("Id of object2 using dot operator:", obj2.id);
console.log("Id of object1 using dot operator:", obj1.id);
console.log("Id of object3 using square brackets:", obj3['id']);
console.log("Id of object2 using square brackets:", obj2["id"]);
console.log("Id of object1 using square brackets:", obj1["id"]);

delete obj2.Skill;
console.log("Object2(deleted key skill):", obj2);

console.log("Keys in object2:", Object.keys(obj2));
console.log("Values in object2:", Object.values(obj2));
console.log("Entries in object2:", Object.entries(obj2));


console.log("Object2:", obj2);
Object.freeze(obj2); // Used to prevent any changes in the object like adding new key or updating a new key.
obj2["id"] = 1000;
console.log("Object2(The value of id didn't change):", obj2);

console.log("Object2:", obj2);
Object.seal(obj2); // Used to prevent adding new key or deleting keys.
obj2.Skill = "JavaScript"
obj2["id"] = 1000;
console.log("Object2(The key skill is can't be added):", obj2);

let obj4 = Object.assign({x: 10, y: 100}, obj2);
console.log("Object4:", obj4);
