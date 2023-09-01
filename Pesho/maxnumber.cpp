#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int br1[10];
int br2[10];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string ss, st;
    cin >> ss;
    cin >> st;
    for(int i = 0; i < ss.length(); i++){
        br1[ss[i]-'0']++;
    }
    for(int i = 0; i < st.length(); i++){
        br2[st[i]-'0']++;
    }
    vector<int> v;
    for(int i = 0; i < 10; i++){
        while(br1[i] > 0 && br2[i] > 0){
            v.push_back(i);
            br1[i]--;
            br2[i]--;
        }
    }
    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i];
    }
    if(v.size() == 0){
        cout << "No solution";
    }

    return 0;
}
