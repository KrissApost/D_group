#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<char> s;
    for(int i = 0; i < n; i++){
        s.push_back('?');
    }
    vector<pair<int,char>> v(k);
    for(int i = 0; i < k; i++){
        cin >> v[i].first >> v[i].second;
    }
    reverse(v.begin(),v.end());
    int j = 0;
    s[j] = v[j].second;
    for(int i = 0; i < k-1; i++){
        j += v[i].first;
        j %= n;
        if(s[j] != '?' && s[j] != v[i+1].second){
            cout << '!';
            return 0;
        }else{
            s[j] = v[i+1].second;
        }
    }
    for(int i = 0; i < n; i++){
        cout << s[i];
    }

    return 0;
}
