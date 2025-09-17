#include <iostream>
using namespace std;

int main() {
    double quantity, area;

    cout << "Введите количество жителей в государстве: ";
    cin >> quantity;

    cout << "Введите площадь территории государства: ";
    cin >> area;

    double p = quantity / area;

    cout << "\n";

    cout << "Плотность населения в государстве: " << p << endl;
}
