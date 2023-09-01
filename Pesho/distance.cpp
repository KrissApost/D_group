#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k = -1, m = n;
    for(int i = 0; i <= n; i++){
        if(arr[i] == x && k == -1){
            k = i;
            continue;
        }
        if(arr[i] == y && k == -1){
            k = i;
            continue;
        }
        if(arr[i] == x && arr[k] == y){
            m = min(m,abs(i-k));
            k = i;
            continue;
        }
        if(arr[i] == x && arr[k] == x){
            k = i;
            continue;
        }
        if(arr[i] == y && arr[k] == x){
            m = min(m,abs(i-k));
            k = i;
            continue;
        }
        if(arr[i] == y && arr[k] == y){
            k = i;
            continue;
        }
    }
    cout << m;
    return 0;
}
