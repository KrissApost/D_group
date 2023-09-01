#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int br[1000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        br[a]++;
    }
    string st;
    for(int i = 0; i < 1000; i++){
        if(br[i]){
            st = to_string(i) + ' ';
            for(int y = 0; y < br[i]; y++){
                cout << st;
            }
        }
    }

    return 0;
}
