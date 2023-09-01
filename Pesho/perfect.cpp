#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    stack<int>st;
    vector<int> v;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }else{
            if(!st.empty()){
                v.push_back(i);
                v.push_back(st.top());
                st.pop();
            }
        }
    }
    sort(v.begin(),v.end());
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}
