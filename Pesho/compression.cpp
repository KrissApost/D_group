#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char b;
    int k = 0;
    while(cin >> b){
        if(b == '.') break;
        if(b == '0'){
            k++;
        }else{
            b ='a'+ k;
            cout << b;
            k = 0;
        }
    }

    return 0;
}

