#include <bits/stdc++.h>
using namespace std;
string maxstr(string s1, string s2){
    int r1 = s1.length(), r2 = s2.length();
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '.'){
            r1 = i;
        }
    }
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] == '.'){
            r2 = i;
        }
    }
    if(s1[0] == '-' && s2[0] != '-' ){
        return s2;
    }
    if(s2[0] == '-' && s1[0] != '-' ){
        return s1;
    }
    if(s1[0] != '-' && s2[0] != '-' ){
        if(r1 < r2){
            return s2;
        }
        if(r1 > r2){
            return s1;
        }
        return max(s1,s2);
    }
    if(s1[0] == '-' && s2[0] == '-' ){
        if(r1 > r2){
            return s2;
        }
        if(r1 < r2){
            return s1;
        }
        return min(s1,s2);
    }
}

int main()
{
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(!isdigit(s[i]) && s[i] != '-' && s[i] != '.'){
            s[i] = ' ';
        }
        if(s[i] == '-' && i != s.length()-1 && !isdigit(s[i+1])){
            s[i] = ' ';
        }
        if(s[i] == '.' && i != s.length()-1 && i != 0 && !isdigit(s[i+1]) && !isdigit(s[i-1])){
            s[i] = ' ';
        }
    }
    for(int i = 1; i < s.length(); i++){
        if(s[i] == '-' && isdigit(s[i-1])){
            s.insert(i,1,' ');
        }
    }
//    cout << s << endl;
    stringstream ss;
    ss << s;
    string st;
    ss >> st;
    string sm = st;
    while(ss >> st){
        sm = maxstr(st,sm);
    }
    cout << sm;

    return 0;
}
