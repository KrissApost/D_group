#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

string sum(string& a, string& b){
    int p = 0, c;
    string s = "";
    for(int i = 0; i < max(a.size(), b.size())||p!=0; i++){
        c = p;
        if(i < a.size()) c += a[i] - '0';
        if(i < b.size()) c += b[i] - '0';
        s.push_back('0' + c % 10);
        p = c / 10;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<string,int> br;
    string st;
    for(int i = 0; i < n; i++){
        cin >> st;
        br[st]++;
    }
    string s = "0";
    for(auto p: br){
        if(p.second == 1){
            string ss = p.first;
            reverse(ss.begin(), ss.end());
            s = sum(s, ss);
        }
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

