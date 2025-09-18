#include <iostream>
#include <cmath>
using namespace std;

int main() {
  setlocale(LC_ALL, "RU");
  
  const double R = 6350.0;
  double height;
  char unit;

  cout << "Введите высоту над Землёй: ";
  cin >> height;

  cout << "Выберите единицы измерения(k - километры, m - метры): ";
  cin >> unit;

  if (unit == 'm') {
    height = height / 1000.0;
  }
  else if (unit != 'k') {
    cout << "Ошибка! Неизвестная единица измерения!" << endl;
    return 1;
  }

  if (height < 0) {
    cout << "Ошибка! Высота не должна быть отрицательной или равной нулю!" << endl;
    return 1;
  }

  double distance = sqrt(pow(R + height, 2) - pow(R, 2));
  cout << "Расстояние до горизонта: " << distance << endl;

  return 0;
}
