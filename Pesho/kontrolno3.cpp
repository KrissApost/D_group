#include <bits/stdc++.h>
using namespace std;
bool cmp(string& s1, string& s2){
    int c1 = 0, c2 = 0;
    for(int i = 0; i < s1.length(); i++){
        c1 += s1[i] - '0';
    }
    for(int i = 0; i < s2.length(); i++){
        c2 += s2[i] - '0';
    }
    if(c1 != c2){
        return c1 > c2;
    }else{
        if(s1.length() != s2.length()){
            return s1.length() > s2.length();
        }else{
            return s1 > s2;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end(), cmp);
    for(int i = vec.size() - 1; i >= 0; i--){
        cout << vec[i] << " ";
    }

    return 0;
}
