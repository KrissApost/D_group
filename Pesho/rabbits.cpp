#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, k[n+1], h[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a;
        k[a] = i;
    }
    for(int i = 1; i <= n; i++){
        cin >> a;
        h[a] = i;
    }
//    for(int i = 1; i <= n; i++) cout << i << " - " << k[i] << " ";
//    cout << endl;
//    for(int i = 1; i <= n; i++) cout << i << " - " << h[i] << " ";
    int m = 0;
    for(int i = 1; i <= n; i++){
        if(abs(k[i] - h[i]) > m) m = abs(k[i] - h[i]);
    }
    cout << m;

    return 0;
}
