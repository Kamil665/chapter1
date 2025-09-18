#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "k = ";
    cin >> k;
    cout << "\n";
    
    // а)
    int x1;
    x1 = 10;
    x1 = -10;
    cout << "а) x = " << x1 << endl;
    
    // б)
    double x2;
    x2 = 17.5;
    x2 = -2 * x2;
    cout << "б) x = " << x2 << endl;
    
    // в)
    int x3;
    x3 = 60;
    x3 = x3 - 1;
    x3 = 0;
    cout << "в) x = " << x3 << endl;
    
    // г)
    int x4;
    x4 = -50;
    x4 = -25;
    x4 = x4 + k;
    cout << "г) x = " << x4 << endl;
}
