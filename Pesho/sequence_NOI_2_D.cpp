#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    long long s = n*n, o = 2*n-1 , v = n;
    if(k == 1){
        cout << s-n+1;
        return 0;
    }
    k--;
    while(k > 0){
        k-=2;
        o+=2;
        s+=o;
        v++;
    }
    s = s - (o-2*(v-n))/2;
    if(k < 0){
        s = s - 2*(v-n);
    }
    cout << s;

    return 0;
}
