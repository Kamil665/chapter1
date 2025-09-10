#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, a, b, c, m, n;
    cout << "x = ";
    cin >> x;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "m = ";
    cin >> m;

    cout << "n = ";
    cin >> n;

    cout << "\n";

    cout << "(-1 / x^2) = " << (-1 / pow(x, 2)) << endl;
    cout << "a / (b * c) = " << a / (b * c) << endl;
    cout << "(a / b) * c = " << (a / b) * c << endl;
    cout << "(a + b) / 2 = " << (a + b) / 2 << endl;
    cout << "5,45 * ((a + 2b) / (2 - a)) = " << 5.45 * ((a + (2 * b)) / (2 - a)) << endl;
    cout << "(-b + sqrt(b^2 - 4ac)) / 2a = " << (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a) << endl;
    cout << "(-b + (1 / a)) / (2 / c) = " << (-b + (1 / a)) / (2 / c) << endl;
    cout << "1 / (1 + ((a + b) / 2) = " << 1 / (1 + ((a + b) / 2)) << endl;
    cout << "1 / (1 + (1 / (2 + (1 / (2 + (3 / 5)))))) = " << 1 / (1 + (1 / (2 + (1 / (2 + (3 / 5)))))) << endl;
    cout << "2^m^n = " << pow(pow(2, m), n) << endl;

    return 0;
}
