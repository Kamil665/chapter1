#include <iostream>
using namespace std;

int main() {
  int square;
  cout << "Введите сторону квадрата: ";
  cin >> square;

  cout << "\n";

  int perimeter = square * 4;
  cout << "Периметр квадрата: " << perimeter << endl;
}
