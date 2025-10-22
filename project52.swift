import Foundation

func readDouble(_ prompt: String) -> Double {
    print(prompt, terminator: ": ")
    return Double(readLine() ?? "") ?? 0.0
}

print("=== КАЛЬКУЛЯТОР СТОИМОСТИ ПОКУПКИ ===")

let candyPrice = readDouble("Введите стоимость 1 кг конфет (руб)")
let cookiePrice = readDouble("Введите стоимость 1 кг печенья (руб)")
let applePrice = readDouble("Введите стоимость 1 кг яблок (руб)")

let candyWeight = readDouble("Введите количество конфет (кг)")
let cookieWeight = readDouble("Введите количество печенья (кг)")
let appleWeight = readDouble("Введите количество яблок (кг)")

let candyCost = candyPrice * candyWeight
let cookieCost = cookiePrice * cookieWeight
let appleCost = applePrice * appleWeight
let totalCost = candyCost + cookieCost + appleCost

print("\n=== ЧЕК ===")
print(String(format: "Конфеты: %.2f кг * %.2f руб/кг = %.2f руб", candyWeight, candyPrice, candyCost))
print(String(format: "Печенье: %.2f кг * %.2f руб/кг = %.2f руб", cookieWeight, cookiePrice, cookieCost))
print(String(format: "Яблоки: %.2f кг * %.2f руб/кг = %.2f руб", appleWeight, applePrice, appleCost))
print("----------------------------------------")
print(String(format: "ОБЩАЯ СТОИМОСТЬ: %.2f руб", totalCost))
