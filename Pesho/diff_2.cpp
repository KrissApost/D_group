#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    char A, B = ' ';
    cin >> n >> a >> b;
    int r = n, II = 0;
    while(r != 0){
        string st = to_string(r);
        for (int i = 0; i < st.length(); i++){
            if(II == a-1) A = st[i];
            if(II == b-1) {
               B = st[i];
               break;
            }
            II++;
        }
        if (B != ' ') break;
        r--;
    }
    if (B != ' ') {
        cout << (A-'0') - (B-'0');
        return 0;
    }
    for(int i = 2; i <= n; i++){
        string st = to_string(i);
        for (int y = 0; y < st.length(); y++){
            if(II == a-1) A = st[y];
            if(II == b-1) {
               B = st[y];
               break;
            }
            II++;
        }
        if (B != ' ') break;
    }
    cout << (A-'0') - (B-'0');
    return 0;
}
