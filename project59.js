let a = prompt("a = ");
let b = prompt("b = ");

console.log("До обмена:");
console.log("a = ", a);
console.log("b = ", b);

console.log(" ");

let temp = a;
a = b;
b = temp;

console.log("После обмена:");
console.log("a = ", a);
console.log("b = ", b);
