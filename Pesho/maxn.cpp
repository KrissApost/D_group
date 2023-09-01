#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], m = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > m){
            m = arr[i];
        }
    }
    string s = "/";
    for(int j = 0; j < n; j++){
        if(arr[j] != m){
            continue;
        }
        string st = "";
        for(int i = j; i < j + n; i++){
            if(i < n){
                st += '0' + arr[i];
            }else{
                st += '0' + arr[i-n];
            }
        }
        string ss = "";
        for(int i = j; i > j - n; i--){
            if(i >= 0){
                ss += '0' + arr[i];
            }else{
                ss += '0' + arr[i+n];
            }
        }
        if(s < max(ss,st)){
            s = max(ss,st);
        }
    }
    cout << s;

    return 0;
}
