#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long arr[100000], n, q;
long long bs(int z){
    long long l = 0, r = n, ans = 0;
    while(l <= r){
        long long m = (l+r)/2;
        if(z == arr[m]){
            r = m-1;
            if(arr[m-1] != arr[m]){
                return m;
            }
        }
        if(z < arr[m]){
            r = m-1;
            if(z > arr[m-1]){
                return m;
            }
        }
        if(z > arr[m]){
            l = m+1;
            if(m == n){
                return m;
            }
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int z;
    for(int i = 0; i < q; i++){
        cin >> z;
        cout << bs(z) << "\n";
    }

    return 0;
}
