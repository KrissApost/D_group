#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<string> vec(8);
    int k = 0, r = 0;
    for(auto x: s){
        if(x == ':'){
            if(vec[k] != ""){
                k++;
            }else{
                r = k;
            }
        }else{
            vec[k] += x;
        }

    }
    if(vec[k] != "") k++;
    vec.insert(vec.begin()+r,8-k,"0");
    for(int i = 0; i < 8; i++){
        cout << vec[i] << " ";
    }

    return 0;
}
