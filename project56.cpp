#include <iostream>
#include <limits>
using namespace std;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

double calculateDistance(double V1, double V2, double S, double timeHours) {
    return S + (V1 - V2) * timeHours;
}

int main() {
    setlocale(LC_ALL, "RU");
    
    double V1, V2, S;
    const double timeMinutes = 30;
    const double timeHours = timeMinutes / 60.0;
    
    cout << "=== Расчёт расстояния между автомобилями ===\n";
    
    cout << "\nСкорость первого автомобиля (км/ч): ";
    
    if (!(cin >> V1)) {
        cout << "Ошибка! Введите число!" << endl;
        clearInput();
    }
    
    if (V1 <= 0) {
        cout << "Ошибка! Скорость должна быть положительной и больше нуля!" << endl;
    }
    
    cout << "\nСкорость второго автомобиля (км/ч): ";
    
    if (!(cin >> V2)) {
        cout << "Ошибка! Введите число!" << endl;
        clearInput();
    }
    
    if (V2 <= 0 || V2 >= V1) {
        cout << "Ошибка! Скорость должна быть положительной, больше нуля или меньше скорости первого автомобиля!" << endl;
    }
    
    cout << "\nНачальное расстояние (км): ";
    
    if (!(cin >> S)) {
        cout << "Ошибка! Введите число!" << endl;
        clearInput();
    }
    
    if (S < 0) {
        cout << "Ошибка! Расстояние не должно быть меньше нуля!" << endl;
    }
    
    double finalDistance = calculateDistance(V1, V2, S, timeHours);
    
    cout << "\n--- Результат ---" << endl;
    cout << "Через " << timeMinutes << " минут расстояние составит: " << finalDistance << " км" << endl;
    
    cout << "------------------\n";
}
