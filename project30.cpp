#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    
    // а)
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    double z = pow(x, 3) - (2.5 * x * y) + (1.78 * pow(x, 2)) - (2.5 * y) + 1;
    cout << "а) z = x^3 - 2.5xy + 1.78x^2 - 2.5y + 1 = " << z << endl;

    cout << "\n";

    // б)
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    double x_x = (3.56 * a) + (pow(b, 3)) - (5.8 * pow(b, 2)) + (3.8 * a) - 1.5;
    cout << "б) x = 3.56a + b^3 - 5.8b^2 + 3.8a - 1.5 = " << x_x << endl;

    return 0;
}
