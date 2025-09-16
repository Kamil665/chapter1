#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // а)
    int x;
    cout << "Введите значение x: ";
    cin >> x;
    int y = (7 * pow(x, 2)) - (3 * x) + 6;
    cout << "а) y = 7x^2 - 3x + 6 = " << y << endl;
    
    cout << "\n";
    
    // б)
    int a;
    cout << "Введите значение a: ";
    cin >> a;
    int x1 = (12 * pow(a, 2)) + (7 * a) - 16;
    cout << "б) x = 12a^2 + 7a - 16 = " << x1 << endl;
}
