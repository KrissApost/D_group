#include<bits/stdc++.h>
using namespace std;
int er[40000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for(int i = 2; i <= n / 2; i++){
        for(int y = i + i; y <= n; y+=i){
            er[y]++;
        }
    }
    int j = 0;
    for(int x = 1; x <= n; x++){
        if((k * (er[x]+2)) < x) continue;
        int l = (k*(er[x]+2))/__gcd((k*(er[x]+2)),x);
        for(int y = x; y <= n; y+=l){
            if((x*y) % k != 0) continue;
            long long h = k * ((er[x]+2)*(er[y]+2)), h2 = x * y;
            if(h == h2){
//                cout << x << " - " << er[x] + 2 << " " << y << " - " << er[y] + 2 << endl;
                j++;
            }
        }
    }
    cout << j;

    return 0;
}
