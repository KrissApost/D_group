#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long arr[100000], n, k, s;
long long bs(){
    long long l = 0, r = s, ans = 10000000;
    while(l <= r){
        long long m = (l+r)/2, h = 0, g = 0, o = 0;
        for(int i = 0; i < k - 1; i++){
            g += arr[i];
            if(g + arr[i + 1] > m){
                o++;
                g = 0;
            }
        }
        o++;
        if(o == n){
            ans = min(ans,m);
            r = m - 1;
        }
        if(o < n){
            r = m-1;
        }
        if(o > n){
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
        s += arr[i];
    }
    cout << bs();

    return 0;
}
