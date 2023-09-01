#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<int> st;
    int k = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '|')
        {
            if(!st.empty() && st.top() != '|')
            {
                st.push('|');
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    st.push('|');
                }
            }
            continue;
        }
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()){
                cout << "NO";
                return 0;
            }
            if(s[i] == ')')
            {
                if(st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            if(s[i] == '}')
            {
                if(st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            if(s[i] == ']')
            {
                if(st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if(st.empty())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
