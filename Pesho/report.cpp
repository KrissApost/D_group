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
    int a[n+1];
    a[0] = 0;
    st.push(0);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        while(a[st.top()] >= a[i]){
            st.pop();
        }
        if(st.top() != 0){
            cout << st.top() << " ";
        }else{
            cout << 0 << " ";
        }
        st.push(i);
    }

    return 0;
}
