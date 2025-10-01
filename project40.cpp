#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "=== РЕШЕНИЕ ФУНКЦИИ ===" << endl;
    double a, b;

    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;

    cout << "\n";

    double first = (a + b) / 2;
    double second = sqrt(b) + first;
    double third = b;
    double fourth = pow(a, 2) + 25;
    double fifth = 2 / fourth;
    double sixth = fifth + third;
    double x = sixth / second;

    if (second == 0) {
        cout << "x = Ошибка! Знаменатель равен нулю!" << endl;
    }
    else {
        cout << "x = (2/(a^2 + 25) + b) / (sqrt(b) +((a + b) / 2)) = " << x << endl;
    }

    double first1 = 5.5 * a;
    double second2 = 2 * sin(b);
    double third3 = fabs(a) + second2;
    double y = third3 / first1;

    if (first1 == 0) {
        cout << "y = Ошибка! Знаменатель равен нулю!" << endl;
    }
    else {
        cout << "y = (|a| + 2sinb) / 5.5a = " << y << endl;
    }

    cout << "\n=== ЗАВЕРШЕНИЕ ===" << endl;
}
