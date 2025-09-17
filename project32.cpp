#include <iostream>
using namespace std;

int main() {
    double m, V;
    cout << "Введите массу тела: ";
    cin >> m;

    cout << "Введите объём тела: ";
    cin >> V;

    double p = m / V;

    cout << "Плотность материала тела: " << p << endl;
}
