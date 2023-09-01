#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int arr[100000], n;
int bs(int x){
    int l = 0, r = n, k = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(x == arr[m]){
            k = m;
            r = m-1;
        }
        if(x < arr[m]){
            r = m-1;
        }
        if(x > arr[m]){
            l = m+1;
        }
    }
    return k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int z;
    for(int i = 0; i < q; i++){
        cin >> z;
        cout << bs(z) << endl;
    }

    return 0;
}
