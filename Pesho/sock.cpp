#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector <int> sock(n);
    vector <pair<int, int>> vec;
    for(int i = 0; i < n; i++){
        cin >> sock[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int x = sock[i];
            int y = sock[j];
            vec.push_back({abs(x-y), min(x,y)});
        }
    }
    sort(vec.begin(), vec.end());
    cout << vec[k-1].second << " " << vec[k-1].second+vec[k-1].first << "\n";


    return 0;
}
