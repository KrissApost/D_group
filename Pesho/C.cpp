#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
string pro(string& a, int b){
    long long p = 0, c;
    string s;
    for(int i = 0; i < a.size() || p!=0; i++){
        c = p;
        if(i < a.size()) c += (a[i] - '0') * b;
        s.push_back('0' + c % 10);
        p = c / 10;
    }
    return s;
}

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    vector<int> p;
    for(int i = k; i > 1; i--){
        p.push_back(i);
    }
    vector<int> v;
    for(int i = n-k+1; i <= n; i++){
        v.push_back(i);
    }
    for(int i = 0; i < p.size(); i++){
        for(int y = 0; y < v.size(); y++){
            int j = __gcd(v[y],p[i]);
            v[y] /= j;
            p[i] /= j;
            if(p[i] == 1){
                break;
            }
        }
    }
    string c = "1";
    for(int y = 0; y < v.size(); y++){
        c = pro(c,v[y]);
    }
    reverse(c.begin(),c.end());
    cout << c << endl;

    return 0;
}

