#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long a){
    if(a < 4){
        return true;
    }
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if(s == "0"){
        cout << -1;
        return 0;
    }
    if(s == "1"){
        cout << -1;
        return 0;
    }
    int n = s.size();
    int m = 1000;
    for(int i = 0; i < pow(2,n)-1; i++){
        string st = "";
        int x = i;
        int k = 0;
        for(int j = 0; j < n; j++){
            if(x%2 == 1){
                k++;
            } else {
                st = st + s[j];
            }
            x /= 2;
        }
        if(st != "" && st != "0" && st != "1" && isPrime(stoll(st))){
            if(k < m){
                m = k;
            }
        }
    }
    if(m == 1000){
        cout << -1;
    }else{
        cout << m;
    }

    return 0;
}
