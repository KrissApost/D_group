#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a,b,c,d,k;
    cin >> a >> b >> c >> d >> k;
    long long s = a;
    for(int i = 0; i < k; i++){
        int t = s;
        s *= b;
        s = max((long long) 0,s - c);
        if(s == 0){
            cout << 0;
            return 0;
        }
        s = min(s,d);
        if(s == t){
            break;
        }
//        cout << s << endl;
    }
    cout << s;

    return 0;
}
