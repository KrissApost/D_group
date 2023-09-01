#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    int a1,b1;
    char z;
    char f;
    int a2,b2;
    cin >> a1 >> z >> b1 >> f >> a2 >> z >> b2;
    if(f == '+'){
        y = b1 * b2 / __gcd(b1,b2);
        x = a1 * y / b1 + a2 * y / b2;
    }
    if(f == '-'){
        y = b1 * b2 / __gcd(b1,b2);
        x = a1 * y / b1 - a2 * y / b2;
    }
    if(f == '*'){
        x = a1 * a2;
        y = b1 * b2;
    }
    if(f == '/'){
        x = a1 * b2;
        y = b1 * a2;
    }
    if(y / __gcd(x,y) < 0){
        cout << '-';
    }
    cout << x / __gcd(x,y)<< "/" << abs(y / __gcd(x,y));
    return 0;
}
