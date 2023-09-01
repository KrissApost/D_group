#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    bool f1 = false, f2 = false, f3 = false, f4=false;
    int k = 0;
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
    string st = "";
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            st+=s[i];
        }else{
            if(k == 2){
                if(st.length() > 1 && st[0] == '0'){
                    st.erase(st.begin()+0);
                }
                h = stoi(st);
            }
            if(k == 1){
                if(st.length() > 1 && st[0] == '0'){
                    st.erase(st.begin()+0);
                }
                m = stoi(st);
            }
            if(k == 0){
                if(st.length() > 1 && st[0] == '0'){
                    st.erase(st.begin()+0);
                }
                sec = stoi(st);
            }
            if(k == -1){
                if(st.length() > 1 && st[0] == '0'){
                    st.erase(st.begin()+0);
                }
                while(st.length() < 3){
                    st+='0';
                }
                m = stoi(st);
            }
            k--;
            st="";
        }
    }
    if(k == 2){
        if(st.length() > 1 && st[0] == '0'){
            st.erase(st.begin()+0);
        }
        h = stoi(st);
    }
    if(k == 1){
        if(st.length() > 1 && st[0] == '0'){
            st.erase(st.begin()+0);
        }
        m = stoi(st);
    }
    if(k == 0){
        if(st.length() > 1 && st[0] == '0'){
            st.erase(st.begin()+0);
        }
        sec = stoi(st);
    }
    if(k == -1){
        while(st.length() < 3){
            st+='0';
        }
        if(st.length() > 1 && st[0] == '0'){
            st.erase(st.begin()+0);
        }
        ms = stoi(st);
    }
    cout << h << " " << m << " " << sec << " " << ms;

    return 0;
}
