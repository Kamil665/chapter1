#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int cube;
  cout << "Введите длину ребра куба: ";
  cin >> cube;

  int volume = pow(cube, 3);

  int square = 4 * pow(cube, 2);

  cout << "\n";

  cout << "Объём куба: " << volume << endl;
  cout << "Площадь боковой поверхности куба: " << square << endl;

  return 0;
}
