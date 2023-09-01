#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long arr[20], n, k;
long long bs(){
    long long l = 0, r = 1000000000000000, ans = -1;
    while(l <= r){
        long long m = (l+r)/2;
        long long f = 0;
        for(int i = 0; i < k; i++){
            f += m / arr[i];
        }
        if(n == f){
            ans = m;
            r = m-1;
        }
        if(n < f){
            ans = m;
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
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    cout << bs();

    return 0;
}
