#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, x, n, y, alpha, beta, b;

     cout << "a = ";
    cin >> a;

    cout << "x = ";
    cin >> x;

    cout << "n = ";
    cin >> n;

    cout << "y = ";
    cin >> y;

    cout << "alpha = ";
    cin >> alpha;

    cout << "beta = ";
    cin >> beta;

    cout << "b = ";
    cin >> b;

    cout << "\n";
    cout << "2x = " << 2 * x << endl;
    cout << "sin x = " << sin(x) << endl;
    cout << "a^2 = " << pow(a, 2) << endl;
    cout << "sqrt(x) = " << sqrt(x) << endl;
    cout << "|n| = " << abs(n) << endl;
    cout << "5 cos y = " << 5 * cos(y) << endl;
    cout << "-7,5a^2 = " << -7.5 * pow(a, 2) << endl;
    cout << "3 sqrt(x) = " << 3 * sqrt(x) << endl;
    cout << "sin(alpha) cos(beta) + cos(alpha) sin(beta) = " << (sin(alpha) * cos(beta)) + (cos(alpha) * sin(beta)) << endl;
    cout << "a sqrt(2b) = " << a * sqrt(2 * b) << endl;
    cout << "3 sin(2 alpha) cos(3 beta) = " << 3 * sin(2 * alpha) * cos(3 * beta) << endl;
    cout << "-5 sqrt(x + sqrt(y)) = " << -5 * sqrt(x + sqrt(y)) << endl;
}
