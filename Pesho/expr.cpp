#include <bits/stdc++.h>
using namespace std;
string ss;

int main() {
    vector<char> r, m;
    r.push_back('2');
    int n;
    cin >> n;
    cin >> ss;
    bool positive = true;
    if (ss[0] == '-') {
        positive = false;
        ss = ss.substr(1,ss.length()-1);
    }
    reverse(ss.begin(),ss.end());
    for(int i = 0; i < ss.length(); i++) m.push_back(ss[i]);
    for(int i = 1; i < n; i++){
        int p = 0;
        for(int y = 0; y < r.size(); y++){
            int k = (r[y] - '0') * 2 + p;
            if(k > 9){
                p = 1;
            }else{
                p = 0;
            }
            r[y] = k % 10 + '0';
        }
        if(p == 1) r.push_back('1');
    }
    int p = 0;
    if (positive) {
        for(int i = 0; i < r.size(); i++){
            if(i >= m.size()) m.push_back('0');
            int k = ((r[i] - '0') - (m[i] - '0')) - p;
            if(k < 0){
                p = 1;
                k += 10;
            } else p = 0;
            r[i] = k + '0';
        }
    } else {
        for(int i = 0; i < r.size(); i++){
            if(i >= m.size()) m.push_back('0');
            int k = ((r[i] - '0') + (m[i] - '0')) + p;
            if(k > 9){
                p = 1;
                k -= 10;
            } else p = 0;
            r[i] = k + '0';
        }
        if(p == 1) r.push_back('1');
    }
    bool g = false;
    for(int i = r.size() - 1; i > -1; i--){
        if(r[i]!='0')g = true;
        if(g)cout << r[i];
    }
    if(!g)cout << 0;
    return 0;
}
