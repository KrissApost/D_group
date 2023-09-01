#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector <int> veca(n);
    vector <int> vecb(n);
    for(int i = 0; i < n; i++) {
        cin >> veca[i];
        cin >> vecb[i];
    }
    int m = 0, s = 1;
    for(int i = 1; i < n; i++){
        if((veca[i-1] >= veca[i] && vecb[i-1] >= vecb[i]) || (veca[i-1] >= vecb[i] && vecb[i-1] >= veca[i])) {
            s++;
        }else{
            if(s > m) m = s;
            s = 1;
        }
    }
    if(s > m) m = s;
    cout << m;

    return 0;
}

