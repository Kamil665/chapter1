#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Введите координаты вершин треугольника:" << endl;
    
    cout << "Вершина 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Вершина 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Вершина 3 (x3 y3): ";
    cin >> x3 >> y3;

    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double perimeter = a + b + c;

    double area = abs(((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2);

    cout << "\n";

    cout << "Длины сторон: " << a << ", " << b << ", " << c << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
}
