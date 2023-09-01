#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
unsigned long long a, k, b, m, x;
long long bs(){
    unsigned long long l = 0, r = x/min(a,b), ans = -1;
    while(l <= r){
        unsigned long long s = (l+r)/2;
        unsigned long long f = a * s + b * s;
        f -= s / k * a;
        f -= s / m * b;
        if(x == f){
            ans = s;
            r = s-1;
        }
        if(x < f){
            ans = s;
            r = s-1;
        }
        if(x > f){
            l = s+1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> k >> b >> m >> x;
    cout << bs();

    return 0;
}
