#include <iostream>
#include <cmath>
using namespace std;

class Gipotenusa {
public:
  double a;
  double b;
  double c;
  
  Gipotenusa(double a_, double b_) {
      a = a_;
      b = b_;
      c = sqrt(pow(a_, 2) + pow(b_, 2));
  }
};

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите значение катета a: ";
    cin >> a;
    cout << "Введите значение катета b: ";
    cin >> b;
    
    Gipotenusa gip(a, b);
    cout << "Гипотенуза с: " << gip.c << endl;
    
    return 0;
}
