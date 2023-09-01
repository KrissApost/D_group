#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    int t1, t2, t3, t4;
    cin >> m >> n;
    cin >> t1 >> t2 >> t3 >> t4;
    if(t1 > t2) swap(t1,t2);
    if(t1 > t3) swap(t1,t3);
    if(t1 > t4) swap(t1,t4);
    if(t2 > t3) swap(t2,t3);
    if(t2 > t4) swap(t2,t4);
    if(t3 > t4) swap(t3,t4);
    if(n < t1){
        cout << 0;
        return 0;
    }
    if(m >= 4 && n >= t1 + t2 + t3 + t4){
        cout << 1;
        return 0;
    }
    if(m >= 2 && t4 + t1 <= n && t2 + t3 <= n){
        cout << 2;
        return 0;
    }
    if(m > 1 && t2 + t1 <= n){
        cout << 3;
        return 0;
    }
    cout << 4;

    return 0;
}
