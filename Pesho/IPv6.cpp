#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ':' && !(i != s.length()-1 && s[i+1] == ':')){
            s[i] = ' ';
        }
        if(s[i] == ':' && (i != s.length()-1 && s[i+1] == ':')){
            s.insert(i, " ");
            s.insert(i+3, " ");
            i+=3;
        }
    }
    int k = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i]==' '){
            k++;
        }
    }
    k = 8 - k;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ':' && (i != s.length()-1 && s[i+1] == ':')){
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            while(k>0){
                s.insert(i, "0 ");
                k--;
            }
        }
    }

    cout << s;
}
