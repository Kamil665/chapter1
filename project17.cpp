#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;
const float g = 9.8;

int main() {
    double x1, x2, x3, v0, t, a, m, v, h, R1, R2, alpha, R, b, c, y, m1, m2, r, I, ci, d, x;

    cout << "x1 = ";
    cin >> x1;

    cout << "x2 = ";
    cin >> x2;

    cout << "x3 = ";
    cin >> x3;

    cout << "v0 = ";
    cin >> v0;

    cout << "t = ";
    cin >> t;

    cout << "a = ";
    cin >> a;

    cout << "m = ";
    cin >> m;

    cout << "v = ";
    cin >> v;

    cout << "h = ";
    cin >> h;

    cout << "R1 = ";
    cin >> R1;

    cout << "R2 = ";
    cin >> R2;

    cout << "alpha = ";
    cin >> alpha;

    cout << "R = ";
    cin >> R;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "y = ";
    cin >> y;

    cout << "m1 = ";
    cin >> m1;

    cout << "m2 = ";
    cin >> m2;

    cout << "r = ";
    cin >> r;

    cout << "I = ";
    cin >> I;

    cout << "ci = ";
    cin >> ci;

    cout << "d = ";
    cin >> d;

    cout << "x = ";
    cin >> x;

    cout << "\n";
    cout << "\n";
    cout << "а) sqrt(x1^2 + x2^2) = " << sqrt(pow(x1, 2) + pow(x2, 2)) << endl;
    cout << "\n";
    cout << "б) x1x2 + x1x3 + x2x3 = " << (x1 * x2) + (x1 * x3) + (x2 * x3) << endl;
    cout << "\n";
    cout << "в) v0t + (at^2 / 2) = " << (v0 * t) + ((a * pow(t, 2)) / 2) << endl;
    cout << "\n";
    cout << "г) (mv^2 / 2) + mgh = " << (m * pow(v, 2) / 2) + (m * g * h) << endl;
    cout << "\n";
    cout << "д) (1 / R1) + (1 / R2) = " << (1 / R1) + (1 / R2) << endl;
    cout << "\n";
    cout << "е) mg cos(alpha) = " << (m * g) * (cos(alpha)) << endl;
    cout << "\n";
    cout << "ж) 2 PI R = " << 2 * PI * R << endl;
    cout << "\n";
    cout << "з) b^2 - 4ac = " << (pow(b, 2)) - (4 * a * c) << endl;
    cout << "\n";
    cout << "и) y(m1m2 / r^2) = " << y * ((m1 * m2) / pow(r, 2)) << endl;
    cout << "\n";
    cout << "к) I^2 R = " << pow(I, 2) * R << endl;
    cout << "\n";
    cout << "л) ab sin(ci) = " << (a * b) * sin(ci) << endl;
    cout << "\n";
    cout << "м) sqrt(a^2 + b^2 - 2ab cos ci) = " << sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(ci)) << endl;
    cout << "\n";
    cout << "н) (ad + bc) / ad = " << ((a * d) + (b * c)) / (a * d) << endl;
    cout << "\n";
    cout << "о) sqrt(1 - sin^2 x) = " << sqrt(1 - pow(sin(x), 2)) << endl;
    cout << "\n";
    cout << "п) 1 / (sqrt(ax^2 + bx + c)) = " << 1 / (sqrt((a * pow(x, 2)) + (b * x) + c)) << endl;
    cout << "\n";
    cout << "р) (sqrt(x + 1) + sqrt(x - 1)) / 2sqrt(x) = " << (sqrt(x + 1) + sqrt(x - 1)) / (2 * sqrt(x)) << endl;
    cout << "\n";
    cout << "с) |x| + |x + 1| = " << abs(x) + abs(x + 1) << endl;
    cout << "\n";
    cout << "т) |1 - |x|| = " << abs(1 - abs(x)) << endl;
}
