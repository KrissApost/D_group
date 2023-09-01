#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    stack<int> st;
    int n;
    cin >> n;
    int a[n+1];
    vector<int> v;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = n; i > 0; i--){
        while(!st.empty() && a[st.top()] <= a[i]){
            st.pop();
        }
        if(!st.empty()){
            v.push_back(a[st.top()]);
        }else{
            v.push_back(-1);
        }
        st.push(i);
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
