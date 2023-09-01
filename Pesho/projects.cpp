#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

const int m = 1000000;
pair <int, int> ss[m];
pair <int, int> ee[m];
bool r[m] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int s, e;
    for(int i = 0; i < n; i++){
        cin >> s >> e;
        ss[i] = {s,i};
        ee[i] = {e,i};
    }
    sort(ss,ss+n);
    int indx, q = -1;
    for(int i = 0; i < n; i++){
        s = ss[i].first;
        indx = ss[i].second;
        e = ee[indx].first;
        if(q >= s) r[indx] = 1;
        if(i != n-1 && ss[i+1].first <= e) r[indx] = 1;
        if(q < e) q = e;
    }
    for(int i = 0; i < n; i++)cout << r[i] << endl;

    return 0;
}
