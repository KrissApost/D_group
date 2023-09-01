#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<int,int> br;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        br[x]++;
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        br[x]--;
    }
    vector<int> vec;
    for(auto p: br){
        while(p.second != 0){
            vec.push_back(p.first);
            p.second--;
        }
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}
