#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    char c;
    stack<char> st;
    st.push('/');
    while(cin >> c){
        int k = 0;
        while(st.top() == c){
            st.pop();
            k++;
        }
        if(k == 0){
            st.push(c);
            continue;
        }
        if(k % 2 == 0){
            st.push(c);
        }
    }
    string s;
    while(st.size() > 1){
        s.push_back(st.top());
        st.pop();
    }
    reverse(s.begin(),s.end());
    cout << s;

    return 0;
}
