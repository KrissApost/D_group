#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    if(s == "." || s == ""){
        cout << "0 no 0";
        return 0;
    }
    bool f1 = false, f2 = false, f3 = false;
    int k, r;
    if(s[0] == '.'){
        f2 = true;
        s.erase(s.begin());
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='.'){
            f1 = true;
            s[i] = ' ';
            k = i;
        }
        if(s[i]=='('){
            f3 = true;
            s[i] = ' ';
            r = i;
        }
        if(s[i]==')'){
            s.erase(s.begin()+i);
        }
    }
    if(!f1 && !f2){
        cout << s << " no 0";
        return 0;
    }
    if(f2 && !f3){
        cout << "0 " << s << " 0";
        return 0;
    }
    if(f2 && f3 && r != 0){
        cout << "0 " << s;
        return 0;
    }
    if(f2 && f3){
        cout << "0 no " << s;
        return 0;
    }
    if(f1 && !f3){
        cout << s << " 0";
        return 0;
    }
    if(f1 && f3 && k+1 != r){
        cout << s;
        return 0;
    }
    cout << s.substr(0,k+1) << " no " << s.substr(k,s.length()-k);
    return 0;
}
