#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    unsigned long long x = 1, y = 1;
    unsigned long long a = 0;
    for(unsigned long long b1 = 2; b1 <= n; b1++){
        unsigned long long y2 = y;
        y = b1 * y / __gcd(b1,y);
        x = x * y / y2 + y / b1;
        unsigned long long nod = __gcd(x,y);
        x = x / nod;
        y = y / nod;
        a += x / y;
        x = x % y;
    }
//    cout << x << "/" << y << endl;
    cout << a << " " << x << " " << y;

    return 0;
}
