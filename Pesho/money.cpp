#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
const int MM = 1000000;
const int MS = 1000000;
int suma[MS];
int arr[20];
int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    sort(arr,arr+k);
    suma[0] = 0;
    for(int i = 1; i <= n; i++) {
        suma[i] = MM;
        for(int j = 1; j <= k; j++) {
            if(suma[i-arr[j]]+1 < suma[i]) {
                suma[i] = suma[i-arr[j]]+1;
            }
        }
    }
    cout << suma[n];
    return 0;
}
