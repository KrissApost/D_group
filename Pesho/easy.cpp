#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long m1 = 0, m2 = 0, a;
    cin >> m2;
    if(m1 < m2) m1 = ;
    for(int i = 1; i < n; i++){
        cin >> a;
        if(m1 < a) m1 = a;
        if(m2 > a) m2 = a;
    }
    cout << m2 << " " << m1 << endl;

    return 0;
}
