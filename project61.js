//а)
function A(a) {
    let a2 = a * a;
    let a4 = a2 * a2;

    console.log("a^4 за две операции = ", a4);
}

//б)
function B(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a6 = a4 * a2;

    console.log("a^6 за три операции = ", a6);
}

//в)
function C(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a6 = a4 * a2;
    let a7 = a6 * a;

    console.log("a^7 за четыре операции = ", a7);
}

//г)
function D(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a8 = a4 * a4;

    console.log("a^8 за три операции = ", a8);
}

//д)
function E(a) {
    let a3 = a * a * a;
    let a4 = a3 * a;
    let a8 = a4 * a4;
    let a9 = a8 * a;

    console.log("a^9 за четыре операции = ", a9);
}

//е)
function F(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a8 = a4 * a4;
    let a10 = a8 * a2;

    console.log("a^10 за четыре операции = ", a10);
}

//ж)
function G(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a8 = a4 * a4;
    let a12 = a8 * a4;
    let a13 = a12 * a;

    console.log("a^13 за пять операции = ", a13);
}

//з)
function H(a) {
    let a3 = a * a * a;
    let a4 = a3 * a;
    let a8 = a4 * a4;
    let a12 = a8 * a4;
    let a15 = a12 * a3;

    console.log("a^15 за пять операции = ", a15);
}

//и)
function I(a) {
    let a3 = a * a * a;
    let a6 = a3 * a3;
    let a9 = a6 * a3;
    let a12 = a9 * a3;
    let a15 = a12 * a3;
    let a21 = a15 * a6;

    console.log("a^21 за шесть операции = ", a21);
}

//к)
function J(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a8 = a4 * a4;
    let a12 = a8 * a4;
    let a20 = a12 * a8;
    let a28 = a20 * a8;

    console.log("a^28 за шесть операции = ", a28);
}

//л)
function K(a) {
    let a2 = a * a;
    let a4 = a2 * a2;
    let a8 = a4 * a4;
    let a16 = a8 * a8;
    let a32 = a16 * a16;
    let a64 = a32 * a32;

    console.log("a^64 за шесть операции = ", a64);
}

let a = Number(prompt("a = "));
if (isNaN(a)) {
    alert("Пожалуйста, введите число!");
}

let func1 = A(a);
let func2 = B(a);
let func3 = C(a);
let func4 = D(a);
let func5 = E(a);
let func6 = F(a);
let func7 = G(a);
let func8 = H(a);
let func9 = I(a);
let func10 = J(a);
let func11 = K(a);

console.log(func1);
console.log(func2);
console.log(func3);
console.log(func4);
console.log(func5);
console.log(func6);
console.log(func7);
console.log(func8);
console.log(func9);
console.log(func10);
console.log(func11);
