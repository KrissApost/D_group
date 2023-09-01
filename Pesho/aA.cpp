#include <bits/stdc++.h>
using namespace std;

int main() {
    char c, c2;
    cin >> c;
    if(c >= 'a' && c <= 'z'){
        c2 = c - 32;
        cout << c2;
    }else{
        if(c >= 'A' && c <= 'Z'){
            c2 = c + 32;
            cout << c2;
        }else{
            cout << c;
        }
    }

    return 0;
}

