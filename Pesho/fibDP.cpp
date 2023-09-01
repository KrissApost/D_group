#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a = 0, b = 1, c;
    for(int i = 0; i < n; i++){
        c = b + a;
        a = b;
        b = c;
    }
    cout << b;

    return 0;
}
