#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, f;
    cin >> s >> f;
    int ss = s.size(), fs = f.size(), k = 0;
    for(int i = 0; i < ss; i++){
        int m = 27, r;
        for(int y = 0; y < fs; y++){
            if(s[i] > f[y]){
                if(m > (f[y]-s[i]+26)){
                    m = f[y]-s[i]+26;
                    r = y;
                }
                continue;
            }
            if(m > (f[y]-s[i])){
                m = f[y]-s[i];
                r = y;
            }
        }
        f[r] = '}';
        cout << i << " " << r << endl;
        k+=m;
    }
    cout << k;

    return 0;
}
