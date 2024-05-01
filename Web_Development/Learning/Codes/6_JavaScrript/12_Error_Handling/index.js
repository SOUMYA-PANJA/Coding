console.log("Try catch 1...\n");
try {
    console.log("Executing try block...");
    let var1 = undefined;
    console.log(var1[0]);
    console.log("No error occured...");
} catch (error) {
    console.log("Error occured...");
    console.log(error);
    console.log("Catch block complete...");
}
finally {
    console.log("Always executed...");
}
console.log("\n++++++++++++++++++++++++++++++++++++++\n");

console.log("Try catch 2...\n");
try {
    console.log("Executing try block...");
    let var1 = undefined;
    console.log(var1[0]);
    console.log("No error occured...");
} catch {
    console.log("Error occured...");
    console.log("Catch block complete...");
}
finally {
    console.log("Always executed...");
}
console.log("\n++++++++++++++++++++++++++++++++++++++\n");