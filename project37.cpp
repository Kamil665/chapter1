#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateHypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

bool isValidInput(double a, double b) {
    return (a > 0 && b > 0);
}

void printDetailedInfo(double a, double b, double c, double perimeter) {
    cout << fixed << setprecision(3);
    cout << "\n=== ДЕТАЛЬНАЯ ИНФОРМАЦИЯ ===" << endl;
    cout << "Катет a = " << a << " ед." << endl;
    cout << "Катет b = " << b << " ед." << endl;
    cout << "Гипотенуза с = √(" << a << "^2 + " << b << "^2) = √(" << (a * a) << " + " << (b * b) << ") = √" << (a * a + b * b) << " = " << c << " ед." << endl;
    cout << "Периметр P = a + b + c = " << a << " + " << b << " + " << c << " = " << perimeter << " ед." << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    
    double a, b;
    
    cout << "=== ВЫЧИСЛЕНИЕ ПЕРИМЕТРА ПРЯМОУГОЛЬНОГО ТРЕУГОЛЬНИКА ===" << endl;
    
    cout << "Введите длину первого катета: ";
    cin >> a;
    cout << "Введите длину второго катета: ";
    cin >> b;
    
    if (!isValidInput(a, b)) {
        cerr << "Ошибка! Значения катетов не должны быть отрицательными или равными нулю!" << endl;
    }
    
    double c = calculateHypotenuse(a, b);
    double perimeter = calculatePerimeter(a, b, c);
    
    cout << fixed << setprecision(2);
    cout << "\n=== РЕЗУЛЬТАТЫ ===" << endl;
    cout << "Периметр прямоугольного треугольника: " << perimeter << " ед." << endl;
    cout << "Гипотенуза: " << c << " ед." << endl;
    
    char choice;
    cout << "\nПоказать подробную информацию? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        printDetailedInfo(a, b, c, perimeter);
    }
    else if (choice == 'n' || choice == 'N') {
    }
    else {
     do {
        cout << "\nПоказать подробную информацию? (y/n): ";
        cin >> choice;
         if (choice == 'y' || choice == 'Y') {
        printDetailedInfo(a, b, c, perimeter);
    }
     
     } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
    }
    
    return 0;
}
