#include <bits/stdc++.h>
using namespace std;
int ces(char a, int n){
    int k = a - 'a';
    if(k - n < 0){
        return k - n + 26;
    }
    if(k - n >= 26){
        return k - n - 26;
    }
    return k - n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    n = n % 26;
    string s2;
    for(int i = 0; i < s.size(); i++){
        if(!isalpha(s[i])){
            s2.push_back(s[i]);
            continue;
        }
        int c = s[i];
        if(c < 'a'){
            c = c - 'A' + 'a';
            s2.push_back('A' + ces(c,n));
        }else{
            s2.push_back('a' + ces(c,n));
        }
    }
    cout << s2;

    return 0;
}
