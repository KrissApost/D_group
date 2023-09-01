#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    bool f1 = false, f2 = false, f3 = false, f4=false;
    int k;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ':'){
            k++;
            s[i] = ' ';
        }
        if(s[i] == '.'){
            f4=true;
            s[i] = ' ';
        }
    }
    if(k == 2){
        f1 = true;
        f2 = true;
        f3 = true;
    }
    if(k == 1){
        f2 = true;
        f3 = true;
    }
    if(k == 0){
        f3 = true;
    }
    int h = 0, m = 0, sec = 0, ms = 0;
    int d1, d2, d3, d4
    cout << s << endl;
    stringstream ss;
    ss << s;
    ss >> d1 >> d2 >> d3 >> d4;
    if(f2&&f2&&f3&&f4){
        h
    }
    cout << h << " " << m << " " << sec << " " << ms;

    return 0;
}
