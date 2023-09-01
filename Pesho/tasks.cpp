#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, h, m, p, q;
    cin >> n >> h >> m >> p >> q;
    while(n != 0){
        m += p;
        n--;
        if(m > 60) n+=q;
        if(m == 60 && n != 0) n+=q;
        if(n == 0) break;
        if(m >= 60){
            m -= 60;
            h++;
        }
    }
    if(m >= 60){
        m -= 60;
        h++;
    }
    cout << h / 24 << " " << h % 24 << " " << m;

    return 0;
}
