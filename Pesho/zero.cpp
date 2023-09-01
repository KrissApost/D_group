#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
bool br[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char a;
    int s = 0;
    while(cin >> a){
        if(a == '0'){
            s++;
        }else{
            br[s] = true;
            s = 0;
        }
    }
    br[s] = true;
    int m = 0;
    for(int i = 1; i < 10001; i++){
        if(br[i]){
            m++;
        }
    }
    cout << m;

    return 0;
}
