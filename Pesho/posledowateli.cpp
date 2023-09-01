#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int k = 0;
    int mi = 100000, ma = 0;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < mi){
            mi = a;
        }
        if(a > ma){
            ma = a;
        }
        if(i == ma - mi){
            k++;
        }
    }
    cout << k;

    return 0;
}
