#include <bits/stdc++.h>
using namespace std;
int er[10000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, h = 0;
    cin >> n >> k;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int p, q, r;
    cin >> p >> q;
    for(int i = 0; i < n; i++){
        r = (p/vec[i]+1)*vec[i];
        for(int y = r; y <= q; y+=vec[i]){
            er[y-p]++;
        }
    }
    for(int i = p; i <= q; i++){
        if(er[i-p] == k){
            h++;
//            cout << i << " ";
        }
    }
    cout << h;

    return 0;
}


