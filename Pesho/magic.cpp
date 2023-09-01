#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'y' || s[i] == 'o' || s[i] == 'u'){
            s[i] = '1';
        }else{
            s[i] = '0';
        }
    }
    int k = 0, j = 0, t = '}';
    for(int i = 0; i < s.size(); i++){
        if(j == 3){
            k++;
            j = 1;
        }
        if(s[i] != t){
            j = 0;
        }
        j++;
        t = s[i];
    }
    if(j == 3){
        k++;
        j = 0;
    }
    cout << k;

    return 0;
}
