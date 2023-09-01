#include <bits/stdc++.h>
using namespace std;
int n, v;
vector<int> sum;
bool arr[3000001];
int bs(){
    int l = 0, r = sum.size()-1, ans = 2000000;
    while(l <= r){
        int m = (l+r)/2;
        if(v == sum[m]){
            return 0;
        }
        if(v < sum[m]){
            ans = min(ans,abs(sum[m]-v));
            r = m-1;
        }
        if(v > sum[m]){
            ans = min(ans,abs(v-sum[m]));
            l = m + 1;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> v;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for(int i = 0; i < n; i++){
        for(int y = i+1; y < n; y++){
            if(arr[vec[i] + vec[y] + 1000000]){
                continue;
            }
            arr[vec[i] + vec[y] + 1000000] = true;
            sum.push_back(vec[i]+vec[y]);
        }
    }
    sort(sum.begin(),sum.end());
    for(int i = 0; i < sum.size(); i++){
        cout << sum[i] << " ";
    }
    cout << bs();

    return 0;
}
