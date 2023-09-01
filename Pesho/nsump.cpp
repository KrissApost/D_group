#include <bits/stdc++.h>
using namespace std;
bool er[10000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 2; i <= 3162; i++){
        if(!er[i]) for(int y = i+i; y <= 10000000; y+=i) if(er[y] == false) er[y] = true;
    }
    int n;
    cin >> n;
    if(!er[n]){
        cout << "1\n" << n;
        return 0;
    }
    for(int i = n - 2; i >= 2; i--){
        if(!er[i] && !er[n - i]){
            cout << "2\n" << i << " " << n-i;
            return 0;
        }
    }
    n -= 3;
    for(int i = n - 2; i >= 2; i--){
        if(!er[i] && !er[n - i]){
            cout << "3\n3 " << i << " " << n-i;
            return 0;
        }
    }

    return 0;
}

