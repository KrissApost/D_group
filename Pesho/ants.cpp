#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n] = {}, a;
    char c;
    for(int i = 0; i < m; i++){
        cin >> a >> c;
        if(a <= n / 2){
            if(c == 'l'){
                arr[a] = 1;
            }
            if(c == 'r'){
                arr[a] = 3;
            }
            if(c == 'u'){
                arr[a] = 2;
            }
            if(c == 'd'){
                arr[a] = 2;
            }
        }else{
            if(c == 'r'){
                arr[a] = 1;
            }
            if(c == 'l'){
                arr[a] = 3;
            }
            if(c == 'u'){
                arr[a] = 2;
            }
            if(c == 'd'){
                arr[a] = 2;
            }
        }
    }
    long long k = 0;
    for(int i = 0; i <= n / 2; i++){
        if(arr[i] == 0) continue;
        k += arr[i] - 1 + i;
        cout << i << " " << arr[i] << " " << k << endl;
    }
    for(int i = n / 2 + 1; i < n; i++){
        if(arr[i] == 0) continue;
        k += arr[i] - 1 + n - i;
        cout << i << " " << arr[i] << " " << k << endl;
    }
    cout << k;

    return 0;
}

