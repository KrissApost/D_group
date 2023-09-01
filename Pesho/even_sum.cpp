#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    int s = 0, m = 0;
    for(int i = 0; i < n; i++) {
        if(vec[i] % 2 == 0) {
            s+=vec[i];
        }else {
            if(m < s) {
                m = s;
            }
            s = 0;
        }
    }
    if(m < s) {
        m = s;
    }
    cout << m;

    return 0;
}
