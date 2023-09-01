#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, r;
    cin >> n >> r;
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long j = 1, k = 0;
    for(int i = 0; i < n; i++){
        int t = k;
        for(int y = j; y < n; y++){
            if(v[y] - v[i] > r){
                k += n - y;
                j = y;
                break;
            }
        }
        if(k == t) break;
    }
    cout << k;

    return 0;
}
