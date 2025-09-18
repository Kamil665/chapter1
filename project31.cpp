#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double num1, num2;
    cout << "Введите два любых числа: ";
    cin >> num1 >> num2;

    double arifm = (num1 + num2) / 2;
    double geometr = sqrt(num1 * num2);

    cout << "\n";
    
    cout << "Среднее арифметическое: " << arifm << endl;
    cout << "Среднее геометрическое: " << geometr << endl;
}
