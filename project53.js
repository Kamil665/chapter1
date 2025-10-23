function calculateComputerCost(monitorPrice, systemUnitPrice, keyboardPrice, mousePrice, numberOfComputers = 1) {
    const costPerComputer = monitorPrice + systemUnitPrice + keyboardPrice + mousePrice;
    return costPerComputer * numberOfComputers;
}

const monitor = 15000;
const systemUnit = 45000;
const keyboard = 2000;
const mouse = 800;

console.log(`Цена монитора: ${monitor}`);
console.log(`Цена системного блока: ${systemUnit}`);
console.log(`Цена клавиатуры: ${keyboard}`);
console.log(`Цена мышки: ${mouse}`);
console.log(``);

const cost3Computers = calculateComputerCost(monitor, systemUnit, keyboard, mouse, 3);
console.log(`Стоимость 3 компьютеров: ${cost3Computers} руб`);

console.log(``);

const N = prompt(`N = `);
const costNComputers = calculateComputerCost(monitor, systemUnit, keyboard, mouse, N);
console.log(`Стоимость N(${N}) компьютеров: ${costNComputers} руб`);
