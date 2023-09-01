#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    vector<pair<int,int>> vec;
    for(int i = 0; i < n; i++){
        cin >> a;
        vec.push_back({a,i});
    }
    sort(vec.begin(), vec.end());
    int k = 0, b = vec[0].first;
    vec[0] = {vec[0].second, 0};
    for(int i = 1; i < n; i++){
        if(b == vec[i].first){
            k++;
        }else{
            k = 0;
        }
        b = vec[i].first;
        vec[i] = {vec[i].second, k};
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++){
        cout << vec[i].second << " ";
    }

    return 0;
}
