#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, h;
    cout << "Введите основания: " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (a >= b) {
        cerr << "Ошибка! Значение a не может быть больше или равно b!" << endl;
    }
    else {
    cout << "Введите высоту трапеции: " << endl;
    cout << "h = ";
    cin >> h;
    
    double ah = (b - a) / 2;
    double c = sqrt(pow(ah, 2) + pow(h, 2));
    double d = c;
    double perimeter = a + b + c + d;
    cout << "Периметр = " << perimeter << endl;
    }
}
