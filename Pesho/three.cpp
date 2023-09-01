#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    unordered_map<int,int> br;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        br[a]++;
    }
    for(int i = 0; i < n; i++){
        cin >> a;
        if(br[a] == 1) br[a]++;
    }
    for(int i = 0; i < n; i++){
        cin >> a;
        if(br[a] == 2) br[a]++;
    }
    vector <int> vec;
    for(auto p: br){
        if(p.second == 3){
            vec.push_back(p.first);
        }
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";

    return 0;
}
