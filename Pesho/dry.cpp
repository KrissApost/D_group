#include <bits/stdc++.h>
#define endl '\n';
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, u, v;
    cin >> n >> u >> v;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long pr[n];
    long long m = arr[n-1];
    long long r = n-1;
    for(long long i = n-1; i > 0; i--){
        if(arr[i] > m){
            m = arr[i];
            r = i;
        }
        pr[i-1] = r;
    }
    pr[n-1] = n-1;
    unsigned long long s = 0;
    for(long long i = 0; i < n; i++){
        bool f = false;
        long long r;
        for(long long y = i+1; y < n; y++){
            if(arr[y] >= arr[i]){
                f = true;
                r = y;
                break;
            }
        }
        if(f){
            s = s + arr[i] * (r-i);
            i = r-1;
        }else{
            if(n-1 == i){
                break;
            }
            s = s + arr[pr[i]] * (pr[i] - i);
            i = pr[i]-1;
        }
    }
    cout << s * u * v;

    return 0;
}
