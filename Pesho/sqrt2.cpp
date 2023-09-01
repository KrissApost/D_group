#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long n;
long long bs(){
    long long l = 0, r = 1000000000, ans = 0;
    while(l <= r){
        long long m = (l+r)/2;
        long long f = m * m;
        if(n == f){
            r = m-1;
            ans = m;
            return ans;
        }
        if(n < f){
            r = m-1;
        }
        if(n > f){
            l = m+1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout << bs();

    return 0;
}
