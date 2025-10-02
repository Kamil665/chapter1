#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    
    double e, f, g, h;
    
    cout << "Введите значения e, f, g, h:" << "\n";
    cout << "e = ";
    cin >> e;
    
    cout << "f = ";
    cin >> f;
    
    cout << "g = ";
    cin >> g;
    
    cout << "h = ";
    cin >> h;
    
    cout << "\n";
    
    double a = (e + (f / 2)) / 3;
    double b = fabs(pow(h, 2) - g);
    double c = sqrt(pow((g - h), 2) - (3 * sin(e)));
    
    cout << "a = (e + (f / 2)) / 3 = " << a << endl;
    cout << "b = |h^2 - g| = " << b << endl;
    cout << "c = sqrt((g - h)^2 - 3sin(e)) = " << c << endl;
}
