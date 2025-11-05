let a = prompt("a = ");
let b = prompt("b = ");
let c = prompt("c = ");

console.log("До первого обмена: ");
console.log("a = ", a);
console.log("b = ", b);
console.log("c = ", c);

//1 обмен
let temp1 = a;
a = b;
b = c;
c = temp1;

console.log("После первого обмена:");
console.log("a = ", a);
console.log("b = ", b);
console.log("c = ", c);

console.log(" ");

let a1 = prompt("a = ");
let b1 = prompt("b = ");
let c1 = prompt("c = ");

console.log("До второго обмена: ");
console.log("a = ", a1);
console.log("b = ", b1);
console.log("c = ", c1);

//2 обмен
let temp2 = a1;
a1 = c1;
c1 = b1;
b1 = temp2;

console.log("После второго обмена:");
console.log("a = ", a1);
console.log("b = ", b1);
console.log("c = ", c1);
