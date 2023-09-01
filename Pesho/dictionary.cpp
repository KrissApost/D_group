#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    map<string,bool> br;
    vector<string> duma(m);
    for(int i = 0; i < m; i++){
        cin >> duma[i];
        br[duma[i]] = 1;
    }
    vector<string> v;
    string raz;
    for(int i = 0; i < s.size(); i++){
        raz.push_back(s[i]);
        if(br[raz]){
            v.push_back(raz);
            raz = "";
        }
    }
    int ans = 0;
    for(int i = 0; i < pow(2,v.size()-1); i++){
        int x = i;
        bool f = true;
        string st = v[0];
        for(int j = 1; j < v.size(); j++){
            if(x % 2 == 1){
                if(!br[st]){
                    f = false;
                    break;
                }
                st = "";
            }
            st+=v[j];
            x /= 2;
        }
        if(f && br[st]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
