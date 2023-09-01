#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    bool arr[n+1] = {};
//    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
    int a;
    for(int i = 0; i < k; i++){
        cin >> a;
        arr[a] = true;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i]) continue;
        cout << i << " ";
    }

    return 0;
}

