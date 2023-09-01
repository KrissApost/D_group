#include <bits/stdc++.h>
using namespace std;
vector<int> M(int a, int b){
    vector<int> v;
    for(int i = 1; i <= max(a,b); i++){
        if(a % i == b % i){
            v.push_back(i);
        }
    }
    return v;
}

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    vector<vector<int>> v;
    for(int i = n / 2 - 1; i >= 0; i--){
        if(v.size() == 0){
            if(vec[i] != vec[n-1-i]){
                v.push_back(M(vec[i],vec[n-i-1]));
            }else{
                v.push_back({});
            }
            continue;
        }
        if(vec[i] != vec[n-1-i]){
            if(v[v.size()-1].size() == 0){
                v.push_back(M(vec[i],vec[n-i-1]));
                continue;
            }
            vector<int> g;
            for(int j = 0; j < v[v.size()-1].size(); j++){
                if(vec[i] % v[v.size()-1][j] == vec[n-1-i] % v[v.size()-1][j]) g.push_back(v[v.size()-1][j]);
            }
            v.push_back(g);
        }else{
            v.push_back(v[v.size()-1]);
        }
    }
    cout << v[v.size()-1].size() << endl;
    int a;
    for(int i = 0; i < q; i++){
        cin >> a;
        if(a == 2){
            v.pop_back();
        }else{
            int x, y;
            cin >> x >> y;
            if(v.size() == 0){
                if(x != y){
                    v.push_back(M(x,y));
                }else{
                    v.push_back({});
                }
                continue;
            }
            if(x != y){
                if(v[v.size()-1].size() == 0){
                    v.push_back(M(x,y));
                    continue;
                }
                vector<int> g;
                for(int j = 0; j < v[v.size()-1].size(); j++){
                    if(x % v[v.size()-1][j] == y % v[v.size()-1][j]) g.push_back(v[v.size()-1][j]);
                }
                v.push_back(g);
            }else{
                v.push_back(v[v.size()-1]);
            }
        }
        cout << v[v.size()-1].size() << endl;
    }

    return 0;
}
