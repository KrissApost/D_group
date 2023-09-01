#include <bits/stdc++.h>
using namespace std;
string ch(string s){
    string st = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '.'){
            st+=s[i];
        }else{
            if(st == ""){
                st = "0";
            }
            return st;
        }
    }
    return st;
}
string dr(string s){
    string st = "";
    int r = s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.'){
            r = i;
        }
    }
    for(int i = r+1; i < s.length(); i++){
        if(s[i] != '('){
            st+=s[i];
        }else{
            if(st == ""){
                st = "no";
            }
            return st;
        }
    }
    if(st == ""){
        st = "no";
    }
    return st;
}
string bdr(string s){string st = "";
    int r = s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            r = i;
        }
    }
    for(int i = r+1; i < s.length(); i++){
        if(s[i] != ')'){
            st+=s[i];
        }else{
            if(st == ""){
                st = "0";
            }
            return st;
        }
    }
    if(st == ""){
        st = "0";
    }
    return st;

    return "";
}

int main(){
    string s;
    getline(cin,s);
    cout << ch(s) << " " << dr(s) << " " << bdr(s);

    return 0;
}
