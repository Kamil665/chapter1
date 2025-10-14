#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculatePerimeter(double base1, double base2, double height) {
    double baseDifference = abs(base1 - base2);
    double leg = sqrt(height * height + (baseDifference / 2) * (baseDifference / 2));
    double perimeter = base1 + base2 + 2 * leg;
    return perimeter;
}

bool isValidInput(double base1, double base2, double height) {
    if (base1 <= 0 || base2 <= 0 || height <= 0) {
        cerr << "Ошибка: значения должны быть больше отрицательного или нуля!" << endl;
        return false;
    }

    if (base1 == base2) {
        cerr << "Ошибка: это не трапеция, а прямоугольник!" << endl;
        return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "RU");

    double base1, base2, height;

    cout << "=== ВЫЧИСЛЕНИЕ ПЕРИМЕТРА РАВНОБЕДРЕННОЙ ТРАПЕЦИИ ===" << endl;
    
    bool ValidInput = false;
    while (!ValidInput) {
        cout << "Введите основание 1: "; cin >> base1;
        cout << "Введите основание 2: "; cin >> base2;
        cout << "Введите высоту: "; cin >> height;

        ValidInput = isValidInput(base1, base2, height);

        if (!ValidInput) {
            cout << "Пожалуйста, введите данные заново!" << endl;
        }
    }

    if (base1 < base2) {
        swap(base1, base2);
    }

    cout << "\n";
    
    double perimeter = calculatePerimeter(base1, base2, height);
    double baseDifference = abs(base1 - base2);
    double leg = sqrt(height * height + (baseDifference / 2) * (baseDifference / 2)); 

    cout << "Боковая сторона: " << leg << endl;

    cout << "Периметр = " << perimeter << endl;
}
