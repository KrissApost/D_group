#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    vector <int> v(n);
    while(true){
        int r = k;
        bool f = true;
        for(int i = 0; i < n-1; i++){
            v[i] = r;
            if(s[i] == '<'){
                r++;
            }else{
                r--;
            }
            if(r < 0){
                k++;
                f = false;
                break;
            }
        }
        v[n-1] = r;
        if(f){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
