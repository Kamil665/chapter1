#include <iostream>
using namespace std;

int main() {
    // а)
    int s1 = 14;
    int k1 = -3;
    int d1 = s1 + 1;
    s1 = d1;
    k1 = 2 * s1;
    cout << "а) s = " << s1 << endl;
    cout << "   k = " << k1 << endl;
    
    cout << "\n";
    
    // б)
    int s2 = 0;
    int k2 = 30;
    int d2 = k2 - 5;
    k2 = 2 * d2;
    s2 = k2 - 100;
    cout << "б) s = " << s2 << endl;
    cout << "   k = " << k2 << endl;
}
