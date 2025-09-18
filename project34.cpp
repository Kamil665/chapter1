#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU);
    double a, b;
    do {
    cout << "Введите значение a: ";
    cin >> a;
    
    cout << "Введите значение b: ";
    cin >> b;
    
    if (a == 0) {
        cout << "Ошибка! Значение a не должно быть равной нулю!" << endl;
    }
    
    cout << "\n";
    } while (a == 0);
    
    double x = (-b / a);
    
    cout << "x = " << x << endl;
}
