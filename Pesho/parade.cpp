#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int n, p;
int k = 0;
void rek(int b, int e){
    int m = (b + (e-1)) / 2;
//    cout << b << " " << e << " " << m << endl;
    if(p == m){
        return;
    }
    if(p < m){
        k++;
        return rek(b,m);
    }
    if(p > m){
        k++;
        return rek(m+1,e);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> p;
    p--;
    if(p >= pow(2,n)-1){
        cout << 0;
        return 0;
    }
    rek(0,pow(2,n)-1);
    cout << (char) ('a' + k);

    return 0;
}

