#include <iostream>
#include <cmath>
using namespace std;

class a {
public:
    double first(double g) {
        return g;
    }

    double second(double e, double f) {
        return pow(fabs(e - (3 / f)), 3);
    }

    double third(double first, double second) {
        return first + second;
    }

    double fourth(double third) {
        return sqrt(third);
    }
};

class b {
public:
    double one(double h) {
        return (1 + cos(2 * h)) / 2;
    }

    double two(double e) {
        return sin(e);
    }

    double three(double one, double two) {
        return one + two;
    }
};

class c {
public:
    double fi(double e, double f) {
        return (e * f) - 3;
    }

    double se(double g) {
        return 33 * g;
    }

    double th(double fi, double se) {
        return se / fi;
    }
};

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
    
    a A;
    if (f == 0) {
        cout << "a = Ошибка! f = 0!";
    }
    else {
        double val_first = A.first(g);
        double val_second = A.second(e, f);
        double val_third = A.third(val_first, val_second);
        double val_fourth = A.fourth(val_third);
        cout << "a = sqrt(|e - (3 / f)|^3 + g) = " << val_fourth << endl;
    }
    
    b B;
    double val_one = B.one(h);
    double val_two = B.two(e);
    double val_three = B.three(val_one, val_two);
    cout << "b = sin(e) + cos^2(h) = " << val_three << endl;
    
    c C;
    if ((e * f) - 3 == 0) {
        cout << "c = Ошибка! Знаменатель равен нулю!" << endl;
    }
    else {
        double val_fi = C.fi(e, f);
        double val_se = C.se(g);
        double val_th = C.th(val_fi, val_se);
        cout << "c = 33g / (ef - 3) = " << val_th << endl;
    }
    
    return 0;
}
