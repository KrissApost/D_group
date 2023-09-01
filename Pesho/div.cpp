#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

pair<string,long long> del(string& a, long long d){
    long long p = 0, c;
    string s = "";
    bool add0 = false;
    for(int i = 0; i < a.size(); i++){
        p = 10 * p + a[i] - '0';
        c = p / d;
        if (c != 0) add0 = true;
        if (add0) s.push_back(c+'0');
        p = p - d * c;
    }
    reverse(s.begin(),s.end());
    while(s.back() == '0' && s.size() > 1) s.pop_back();
    reverse(s.begin(),s.end());
    return {s,p};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for(long long i = 2; i < 2001; i++){
        if(del(s,i).second == 0){
            cout << i << " " << del(s,i).first << endl;
        }
    }


    return 0;
}

