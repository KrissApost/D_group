#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s = 0;
    if(a < c && b > d){
        cout << b - a;
        return 0;
    }
    if(a > c && b < d){
        cout << d - c;
        return 0;
    }
    if(b < d){
        s += b - a;
        if(b >= c) s += d - b; else s += d - c;
    }else{
        s += d - c;
        if(d >= a) s += b - d; else s += b - a;
    }
    cout << s;

   return 0;
}

