#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    float a, b, c, x, R, d;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "x = ";
    cin >> x;

    cout << "R = ";
    cin >> R;

    cout << "d = ";
    cin >> d;

    cout << "\n";
    cout << "\n";
    cout << "frac{a}{b cdot c} = " << a / b / c << endl;
    cout << "\n";
    cout << "frac{a cdot b}{c} = " << a * b / c << endl;
    cout << "\n";
    cout << "frac{a}{b} cdot c = " << a / b * c << endl;
    cout << "\n";
    cout << "a + frac{b}{c} = " << a + b / c << endl;
    cout << "\n";
    cout << "frac{a + b}{c} = " << (a + b) / c << endl;
    cout << "\n";
    cout << "a + frac{b}{b} + c = " << a + b / b + c << endl;
    cout << "\n";
    cout << "frac{a + b}{b + c} = " << (a + b) / (b + c) << endl;
    cout << "\n";
    cout << "frac{a}{sin b} = " << a / sin(b) << endl;
    cout << "\n";
    cout << "frac{1}{2} cdot a  cdot b  cdot sin x = " << (1 / 2) * a * b * sin(x) << endl;
    cout << "\n";
    cout << "frac{cdot 2  cdot b  cdot c  cdot cos frac{a}{2}}{b + c} = " << (2 * b * c * cos(a / 2)) / (b + c) << endl;
    cout << "\n";
    cout << "4 cdot R  cdot sin frac{a}{2} cdot sin frac{b}{2} cdot sin frac{c}{2} = " << 4 * R * sin(a / 2) * sin(b / 2) * sin(c / 2) << endl;
    cout << "\n";
    cout << "frac{a cdot x + b}{c cdot x + d} = " << (a * x + b) / (c * x + d) << endl;
    cout << "\n";
    cout << "frac{2 cdot sin a+b}{2 cdot cos frac{a - b}{2}} = " << (2 * sin(a + b)) / (2 * cos((a - b) / 2)) << endl;
    cout << "\n";
    cout << "left| 2 cdot sin -3 | cdot left| frac{x}{2} | = " << abs(2 * sin(-3)) * abs(x / 2) << endl;
}
