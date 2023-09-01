#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], b[n], c[n], q = 0;
    bool map1[20000] = {};
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
        if(c[i] > q) q = c[i];
        map1[c[i]] = true;
    }
    int m = 0;
    for(int j = 1; j <= q; j++){
        if(!map1[j]) continue;
        int arr[30000] = {0};
        for(int i1 = 0; i1 < n; i1++){
            if(c[i1] != j) continue;
            for(int i2 = a[i1]; i2 < b[i1]; i2++) arr[i2]++;
        }
        for(int i = 0; i < 30000; i++) if(arr[i]>m) m = arr[i];
    }
    cout << m;

    return 0;
}
