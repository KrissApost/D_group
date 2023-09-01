#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    string ss = "";
    int r;
    while(a > 0){
        r = a % 2;
        a /= 2;
        ss += to_string(r);
    }
    reverse(ss.begin(),ss.end());
    cout << ss;

    return 0;
}
