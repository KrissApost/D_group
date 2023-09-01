#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int k = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            k++;
        }else{
            k--;
        }
        if(k < 0){
            cout << "NO";
            return 0;
        }
    }
    if(k == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
