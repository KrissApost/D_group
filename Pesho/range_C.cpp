#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[100000] = {};
    int n, m;
    cin >> n;
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr2,arr2+n);
    for(int i = 0; i < n; i++){
        arr[arr2[i]] = i + 1;
    }
    int k = 0;
    for(int i = 0; i < 100000; i++){
        if(arr[i] == 0){
            arr[i] = k;
        }else{
            k = arr[i];
        }
    }
    cin >> m;
    int z1, z2;
    for(int i = 0; i < m; i++){
        cin >> z1 >> z2;
        cout << arr[z2] - arr[z1 - 1] << endl;
    }

    return 0;
}
