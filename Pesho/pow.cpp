#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(b == 0){
        cout << 1;
        return 0;
    }
    if(a % 10 == 0 || a % 10 == 1 || a % 10 == 5 || a % 10 == 6){
        cout << a % 10;
        return 0;
    }
    if(a % 10 == 2){
        if(b % 4 == 1) cout << 2;
        if(b % 4 == 2) cout << 4;
        if(b % 4 == 3) cout << 8;
        if(b % 4 == 0) cout << 6;
        return 0;
    }
    if(a % 10 == 3){
        if(b % 4 == 1) cout << 3;
        if(b % 4 == 2) cout << 9;
        if(b % 4 == 3) cout << 7;
        if(b % 4 == 0) cout << 1;
        return 0;
    }
    if(a % 10 == 4){
        if(b % 2 == 1) cout << 4;
        if(b % 2 == 0) cout << 6;
        return 0;
    }
    if(a % 10 == 7){
        if(b % 4 == 1) cout << 7;
        if(b % 4 == 2) cout << 9;
        if(b % 4 == 3) cout << 3;
        if(b % 4 == 0) cout << 1;
        return 0;
    }
    if(a % 10 == 9){
        if(b % 4 == 1) cout << 9;
        if(b % 4 == 0) cout << 1;
        return 0;
    }

    return 0;
}
