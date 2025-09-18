#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "RU");
  int square;
  cout << "Введите сторону квадрата: ";
  cin >> square;

  cout << "\n";

  int perimeter = square * 4;
  cout << "Периметр квадрата: " << perimeter << endl;
}
