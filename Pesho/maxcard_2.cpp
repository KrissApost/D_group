#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<string> v(4);
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }
    string s = v[0] + v[1] + v[2] + v[3];
    for(int i1 = 0; i1 < 4; i1++){
        for(int i2 = 0; i2 < 4; i2++){
            if(i1 == i2) continue;
            for(int i3 = 0; i3 < 4; i3++){
                if(i1 == i3) continue;
                if(i2 == i3) continue;
                for(int i4 = 0; i4 < 4; i4++){
                    if(i1 == i4) continue;
                    if(i2 == i4) continue;
                    if(i3 == i4) continue;
                    if(s < v[i1] + v[i2] + v[i3] + v[i4]){
                        s = v[i1] + v[i2] + v[i3] + v[i4];
                    }
                }
            }
        }
    }
    cout << s;

    return 0;
}

