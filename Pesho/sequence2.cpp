#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int a;
    cin >> a;
    int t = a;
    int m = 0;
    bool f = true, r = false;
    if(t != 0){
        f = false;
    }else{
        r = true;
    }
    for(int i = 0; i < n-1; i++){
        cin >> a;
        if(a - 1 != t){
            if(r){
                m = max(m,t+1);
            }
            if(a != 0){
                f = false;
                r = false;
            }
        }
        t = a;
        if(a == 0){
            r = true;
        }
    }
    if(r){
        m = max(m,t+1);
    }
    if(m > k){
        f = false;
    }
    if(f){
        cout << "Yes ";
    }else{
        cout << "No ";
    }
    cout << m;

    return 0;
}
