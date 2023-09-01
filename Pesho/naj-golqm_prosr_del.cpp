#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int er[10000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 2; i <= 10000000; i++){
        if(er[i] == 0) for(int y = i; y <= 10000000; y+=i) er[y] = i;
    }
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << er[a] << " ";
    }
    return 0;
}
