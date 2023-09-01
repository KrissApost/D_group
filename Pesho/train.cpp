#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < 5; i++){
        stack<int> st;
        st.push(0);
        int k = 0;
        bool f = true;
        for(int y = 0; y < n; y++) cin >> v[y];
        for(int y = 0; y < n; y++){
            if(st.top() == v[y]){
                st.pop();
                continue;
            }
            if(st.top() > v[y]){
                f = false;
                break;
            }
            while(k <= n){
                k++;
                st.push(k);
                if(st.top() == v[y]){
                    st.pop();
                    break;
                }
            }
        }
        if(f){
            cout << 1;
        }else{
            cout << 0;
        }
    }

    return 0;
}
