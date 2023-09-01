#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> vec(n);
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        vec.push_back({x,1});
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        vec.push_back({x,2});
    }
    sort(vec.begin(),vec.end());
    int s = 0, br = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i].second==1){
            br++;
        }else{
            br--;
        }
        if(i == vec.size() - 1 || vec[i].first!=vec[i+1].first){
            if(br!=0){
                for(int j = 0; j < br; j++){
                    cout << vec[i].first<< " ";
                }
            }
            br = 0;
            s = i + 1;
        }
    }

    return 0;
}
