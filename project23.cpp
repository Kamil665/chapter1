#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Введите значение a: ";
    cin >> a;
    
    double y = (pow(a, 2) + 10) / (sqrt(pow(a, 2) + 1));
    cout << "y = (a^2 + 10) / (sqrt(a^2 + 1)) = " << y << endl;
    
    return 0;
}
