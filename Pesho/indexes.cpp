#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>> vec;
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x;
        vec.push_back({x,i});
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++){
        cout << vec[i].second << " ";
    }

    return 0;
}
