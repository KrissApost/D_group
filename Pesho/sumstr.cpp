#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

bool Sraw(string s1, string s2){
    if(s1.length() < s2.length()){
        return true;
    }
    if(s1.length() > s2.length()){
        return false;
    }
    if(s1 <= s2){
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    if(Sraw(s1, s2)){
        swap(s1,s2);
    }
//    cout << s1 << endl;
//    return 0;
    string s = "";
    int k = 0;
    bool f = false;
    int n1, n2;
    int p = s2.length() - 1;
    for(int i = s1.length() - 1; i >= 0; i--){
        n1 = (s1[i] - '0');
        if(p >= 0){
            n2 = (s2[p] - '0');
        }else{
            n2 = 0;
        }
        int n = n1 + n2 + k;
        k = 0;
        if(n > 9){
            n -= 10;
            k = 1;
        }
        s.push_back('0' + n);
        p--;
    }
    if(k == 1){
        s.push_back('1');
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}
