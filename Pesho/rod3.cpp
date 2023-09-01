#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int n, j;
int a[700], arr[700];
int rec(int b, int e){
    if(b + 1 == e) {
        cout << "Begin = " << b << " End = " << e << endl;
        return a[b] + a[e];
    }
    if(b == e) {
       cout << "Begin = " << b << " End = " << e << endl;
       return 0;
    }

    int m = 0, k = b;
    for(int i = b; i < e; i++){
        if (arr[i+1] - arr[i] > m){
            k = i;
            m = arr[i+1] - arr[i];
        }
    }
    cout << "Begin = " << b << " End = " << e << " Index = " << k << " m = " << m << endl;
 //   cin >> j;
    int t = 0;
    if(b > 0) t = arr[b-1];
    return arr[e] - t + rec(k+1,e) + rec(b,k);
}
int main() {
    cin >> n;
    cin >> a[0];
    arr[0] = a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        arr[i] = arr[i-1] + a[i];
    }
    cout << rec(0,n-1);
    return 0;
}
