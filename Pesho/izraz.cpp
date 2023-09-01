#include <bits/stdc++.h>
using namespace std;

int main(){
    long long sum = 0;
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+'){
            s[i] = ' ';
        }
        if(i != s.length()-1 && (s[i] == '-' && s[i+1] =='-')){
            s[i] = ' ';
            s[i+1] = ' ';
        }
    }
    for(int i = 1; i < s.length(); i++){
        if(s[i] == '-' && isdigit(s[i-1])){
            s.insert(i, " ");
        }
    }
//    cout << s << endl;
    string st = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            if(st != ""){
                sum += stoi(st);
 //               cout << st << " " << stoi(st) << endl;
            }
            st = "";
        }else{
            st+=s[i];
        }
    }
    if(st != ""){
        sum += stoi(st);
//        cout << st << " " << stoi(st) << endl;
    }
    cout << sum;
}
