#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans = 0;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
            continue;
        }
        if(s[i] == '{'){
            st.push(s[i]);
            continue;
        }
        if(s[i] == '['){
            st.push(s[i]);
            continue;
        }
        if(st.size() && st.top() == '(' && s[i] == ')'){
            st.pop();
            continue;
        }
        if(st.size() && st.top() == '{' && s[i] == '}'){
            st.pop();
            continue;
        }
        if(st.size() && st.top() == '[' && s[i] == ']'){
            st.pop();
            continue;
        }
        ans++;
    }
    int ans2 = 0;
    stack<char> st2;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st2.push(s[i]);
            continue;
        }
        if(s[i] == '{'){
            st2.push(s[i]);
            continue;
        }
        if(s[i] == '['){
            st2.push(s[i]);
            continue;
        }
        if(!st2.size()){
            ans2++;
            continue;
        }
        if(st2.size() && st2.top() == '(' && s[i] == ')'){
            st2.pop();
            continue;
        }
        if(st2.size() && st2.top() == '{' && s[i] == '}'){
            st2.pop();
            continue;
        }
        if(st2.size() && st2.top() == '[' && s[i] == ']'){
            st2.pop();
            continue;
        }
        while(st2.size() && (st2.top() + 1 != s[i] && st2.top() + 2 != s[i])){
            st2.pop();
            ans2++;
        }
        if(!st2.size()){
            ans2++;
            continue;
        }
        st2.pop();
    }
    cout << min(ans + st.size(),ans2 + st2.size()) << endl;

    return 0;
}

