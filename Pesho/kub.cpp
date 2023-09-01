#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if(c < b) swap(c,b);
    if(a > b) swap(a,b);
    if(b > c) swap(b,c);
    if(a == 1 && b == 1 && c == 1){
        cout << "0 0 0 0 0 0 1";
        return 0;
    }


    if(a == 1 && b == 1 && c != 1){
        cout << "0 0 0 0 " << c - 2 << " 2 0";
        return 0;
    }


    if(a == 1 && b != 1 && c != 1){
        cout << "0 0 ";
        int k2, k3;
        k2 = (b - 2) * (c - 2);
        k3 = 2 * (c + b - 4);
        cout << k2 << " " << k3 << " 4 0 0";
        return 0;
    }


    if(a == 2 && b == 2 && c == 2){
        cout << "0 0 0 8 0 0 0";
        return 0;
    }

    if(a == 2 && b == 2 && c != 2){
        cout << "0 0 ";
        int k2;
        k2 = (c - 2) * 4;
        cout << k2 << " 8 0 0 0";
        return 0;
    }

    if(a == 2 && b != 2 && c != 2){
        cout << "0 ";
        int k1, k2;
        k2 = (c - 2) * 4;
        cout << k2 << " 8 0 0 0";
        return 0;
    }

    if(a >= 3 && b >= 3 && c >= 3){
        int k0, k1, k2, k3, k4, k5, k6;
        k2 = (a + b + c - 6) * 4;
        k3 = 8;
        k1 = 2 * (a * b - 2 * (a + b) + 4) + 2 * (c * b - 2 * (c + b) + 4) + 2 * (a * c - 2 * (a + c) + 4);
        k4 = 0;
        k5 = 0;
        k6 = 0;
        k0 =  a * b * c - k2 - k3 - k1;
        cout << k0 << " " << k1 << " " << k2 << " " << k3 << " " << k4 << " " << k5 << " " << k6;
    }

    return 0;
}

