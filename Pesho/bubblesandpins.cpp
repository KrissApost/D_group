#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<char> st;
    int k = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'O'){
            if(st.empty() || st.top() != 'L'){
                st.push('O');
                k++;
            }
            continue;
        }
        if(s[i] == 'L'){
            st.push('L');
            continue;
        }
        if(s[i] == 'T'){
            while(!st.empty() && st.top() == 'O'){
                st.pop();
                k--;
            }
            st.push('T');
            continue;
        }
    }
    cout << st.size() << " " << k;

    return 0;
}
