#include <bits/stdc++.h>
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

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s1 = "1", s2 = "1", s;
    for(int i = 0; i < n; i++){
        s = sum(s1,s2);
        s1 = s2;
        s2 = s;
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    cout << s1 << " " << s2;

    return 0;
}
