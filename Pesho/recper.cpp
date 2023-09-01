#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v(10);
vector<vector<int>> ans;
bool arr[10];
vector<int> a(10);
void rec(int k){
    if(k == 0){
        ans.push_back(a);
        return;
    }
    for(int i = 0; i < n; i++){
        if(arr[v[i]]) continue;
        arr[v[i]] = true;
        a[k] = v[i];
        rec(k-1);
        arr[v[i]] = false;
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    rec(n);
    sort(ans.begin(),ans.end());
    for(int i = 0; i < ans.size(); i++){
        for(int j = 1; j <= n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
