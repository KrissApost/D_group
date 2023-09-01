#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        int ma = 0;
        if(t == 2){
            st.pop();
        }else{
            int x;
            cin >> x;
            if(st.empty()){
                st.push(x);
            }else{
                st.push(max(st.top(),x));
            }
        }
        if(st.empty()){
            cout << -1 << " ";
        }else{
            cout << st.top() << " ";
        }
    }

    return 0;
}
