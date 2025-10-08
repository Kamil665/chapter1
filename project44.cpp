#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {
        if (l <= 0 || w <= 0) {
            throw invalid_argument("Длина, ширина должны быть больше отрицательного значения и нуля!");
        }
    }

    double perimeter() const {
        return (length + width) * 2;
    }

    double diagonal() const {
        return sqrt(pow(length, 2) + pow(width, 2));
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    double length, width;

    cout << "Введите длину прямоугольника: ";
    cin >> length;

    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    cout << "\n";

    try {
        Rectangle rec(length, width);
        cout << "Периметр прямоугольника: " << rec.perimeter() << endl;
        cout << "Длина диагонали прямоугольника: " << rec.diagonal() << endl;
    }
    catch (const exception& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
