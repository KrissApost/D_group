#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, st;
    cin >> s >> st;
    sort(s.begin(),s.end());
    map<string,bool> br;
    int n = s.size();
    int m = 0;
    do{
        for(int i = 0; i < pow(2,n); i++){
            string ss;
            int x = i;
            for(int j = 0; j < n; j++){
                if(x%2 == 0){
                    ss.push_back(s[j]);
                }
                x /= 2;
            }
            if(br[ss]){
                continue;
            }
            br[ss] = true;
            if(ss.size() < st.size()){
                continue;
            }
            for(int y = 0; y <= ss.size() - st.size(); y++){
                if(st == ss.substr(y,st.size())){
                    m++;
                }
            }
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << m;

    return 0;
}
