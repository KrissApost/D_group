#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
void maxs(string st, int k){
    for(int j = 0; j < k; j++){
        bool f = false;
        for(int i = 0; i < st.size() - 1; i++){
            if(st[i] < st[i+1]){
                st.erase(st.begin() + i);
                f = true;
                break;
            }
        }
        if(!f){
            st.pop_back();
        }
    }
    cout << st;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    maxs(s.substr(0,n),k);
    maxs(s.substr(n,n),k);
    maxs(s.substr(2*n,n),k);

    return 0;
}
