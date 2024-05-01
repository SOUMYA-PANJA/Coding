let pattern = "he";

let regexOne = new RegExp(pattern);

// g(global): find in the complete string.
// i(case-in-sensitive)
let flag = "gi";

let regexTwo = new RegExp(pattern, flag);

// Shorthand for RegExp: /pattern/flag
let regexThree = /he/gi;

const stringToCheck1 = "Hello world. he is there. I am fine. hellowhe ai";
const stringToCheck2 = "wello world. me is tkere. I am fine. jellowke ai";

const result1 = regexThree.test(stringToCheck1);
const result2 = regexThree.test(stringToCheck2);
const result3 = stringToCheck1.match(regexTwo);
const result4 = stringToCheck2.match(regexThree);
const result5 = stringToCheck1.replace(regexThree, "[--]");
console.log("Result1:", result1);
console.log("Result2:", result2);
console.log("Result3:", result3);
console.log("Result4:", result4);
console.log("Result5:", result5);

let url = "https://google.com/soumya%20panja%30machine%41learning%123deep%401learning";

// \d: Integer
const result6 = url.replace(/%\d\d/g, '_');
console.log("Return6:", result6);