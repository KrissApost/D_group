#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int br[50001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        a--;
        if(i-a < 0){
            br[i-a+n]++;
        }else{
            br[i-a]++;
        }
    }
    int m = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(m < br[i]){
            m = br[i];
            r = i;
        }
    }
    cout << r+1;

    return 0;
}
