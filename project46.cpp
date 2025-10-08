#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "RU");

  int a, b, c;
  cout << "Длина прямоугольного параллелепипеда: ";
  cin >> a;

  cout << "Ширина прямоугольного параллелепипеда: ";
  cin >> b;

  cout << "Высота прямоугольного параллелепипеда: ";
  cin >> c;

  cout << "\n";

  int V = a * b * c;
  int S = (2 * (a + b)) * c;

  cout << "Объём прямоугольного параллелепипеда = " << V << endl;
  cout << "Площадь боковой поверхности прямоугольного параллелепипеда = " << S << endl;
}
