#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a;
    int arr[n];
    int s = 0, p = 0, m = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        s += arr[i];
        if(s > k){
            while(p <= i && s > k){
                s -= arr[p];
                p++;
            }
        }
        if(s > m){
            m = s;
        }
    }
    cout << m;
    return 0;
}

