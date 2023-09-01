#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int a, b, a1, b1, n;
    cin >> a >> b;
    cin >> a1 >> b1;
    cin >> n;
    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    int ans = 0;
    int x = a1, y = b1;
    bool er[n] = {};
    for(int i = 0; i < n; i++){
        int m = a + b + 2, r;
        for(int j = 0; j < n; j++){
            if(er[j]) continue;
            int k = abs(v[j].first-x) + abs(v[j].second-y);
            if(m > k){
                r = j;
                m = k;
            }
        }
        er[r] = 1;
        ans += abs(v[r].first-x) + abs(v[r].second-y);
        x = v[r].first;
        y = v[r].second;
    }
    ans += abs(a1-x) + abs(b1-y);
    int ans1 = ans;
    ans = 0;
    x = a1, y = b1;
    for(int i = 0; i < n; i++){
        er[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int m = a + b + 2, r;
        for(int j = 0; j < n; j++){
            if(er[j]) continue;
            int k = abs(v[j].first-x) + abs(v[j].second-y);
            if(m >= k){
                r = j;
                m = k;
            }
        }
        er[r] = 1;
        ans += abs(v[r].first-x) + abs(v[r].second-y);
        x = v[r].first;
        y = v[r].second;
    }
    ans += abs(a1-x) + abs(b1-y);

    cout << min(ans, ans1);

    return 0;
}
