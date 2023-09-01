#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int k = 0, i4;
    for(int i1 = 1; i1 < n; i1++){
        for(int i2 = i1; i2 < n - i1; i2++){
            for(int i3 = i2; i3 < n - i1 - i2; i3++){
                i4 = n-(i1+i2+i3);
                if(i4 >= i3){
                    k++;
//                    cout << i1 << " " << i2 << " " << i3 << " " << i4 << endl;
                }
            }
        }
    }
    cout << k;

    return 0;
}
