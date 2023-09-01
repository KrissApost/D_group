#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int,int>> vec = {{0,1},{-1,2},{-2,3},{-3,4}};
    int a;
    for(int i = 0; i < 4; i++){
        cin >> a;
        vec[a-1].first += i;
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < 4; i++){
        cout << vec[i].second << " ";
    }

    return 0;
}
