#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long s = 0, b, e;
    for(int i = 0; i < n; i++){
        cin >> b >> e;
        int b1, e1;
        if(b % 9 == 0){
            b1 = 9;
        }else{
            b1 = b % 9;
        }
        if(e % 9 == 0){
            e1 = 9;
        }else{
            e1 = e % 9;
        }
        s = (e - b) / 9 * 45;
        if(e1 < b1){
            for(int y = b1; y <= 9; y++){
                s += y;
            }
            for(int y = 1; y <= e1; y++){
                s += y;
            }
            cout << s << endl;
            continue;
        }
        for(int y = b1; y <= e1; y++){
            s += y;
        }
        cout << s << endl;
    }

    return 0;
}

