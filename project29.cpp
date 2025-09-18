#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14;

int main() {
  setlocale(LC_ALL, "RU");
  int radius;
  cout << "Введите радиус окружности: ";
  cin >> radius;

  double length = 2 * pi * radius;
  double area = pi * pow(radius, 2);

  cout << "\n";

  cout << "Длина окружности: " << length << endl;
  cout << "Площадь круга: " << area << endl;

  return 0;
}
