#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а)
    float a1 = 5.8;
    float b1 = -7.9;
    b1 = a1;
    a1 = b1;
    cout << "а) a = " << a1 << endl;
    cout << "   b = " << b1 << endl;
    
    cout << "\n";
    
    // б)
    int a2 = 0;
    double b2 = -9.99;
    b2 = a2;
    a2 = b2;
    cout << "б) a = " << a2 << endl;
    cout << "   b = " << b2 << endl;
    
    return 0;
}
