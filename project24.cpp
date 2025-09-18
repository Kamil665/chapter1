#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а)
    int a;
    cout << "Введите значение a: ";
    cin >> a;
    double x = sqrt(((2 * a) + sin(abs(3 * a))) / 3.56);
    cout << "а) x = sqrt((2a + sin(|3a|)) / 3.56) = " << x << endl;
    
    cout << "\n";
    
    // б)
    int x1;
    cout << "Введите значение x: ";
    cin >> x1;
    float y = sin((3.2 + sqrt(1 + x1)) / abs(5 * x1));
    cout << "б) y = sin((3.2 + sqrt(1 + x)) / |5x|) = " << y << endl;
    
    return 0;
}
