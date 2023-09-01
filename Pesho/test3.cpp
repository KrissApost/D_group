#include <iostream>
using namespace std;

int main() {
    int i = 33;
    int q = i >> 1;
    cout << q << endl;
    int w = i << 2;
    cout << w << endl;


    char a;
    cin >> a;
    char b = a ^32;
    cout << "Reverse (^32) = " << b << endl;
    b = a |32;
    cout << "Small (|32) = " << b << endl;

    b = (a | 32) ^ 32;
    cout << "Upper (a | 32) ^ 32 = " << b << endl;

    b = a & 223;
    cout << "Upper (a & 223) = " << b << endl;

    return 0;
}
