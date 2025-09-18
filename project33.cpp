#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double quantity, area;

    cout << "Введите количество жителей в государстве: ";
    cin >> quantity;

    cout << "Введите площадь территории государства: ";
    cin >> area;

    double p = quantity / area;

    cout << "\n";

    cout << "Плотность населения в государстве: " << p << endl;
}
