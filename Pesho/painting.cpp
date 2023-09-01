#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[100000] = {};
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    vector<int> z;
    int a, k = 0, c = n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a != 0 && arr[a] == 0){
            k++;
            v.push_back({i,0});
            z.push_back(a);
        }
        if(a == 0) c--;
        arr[a] = i + 1;
    }
    for(int i = 0; i < v.size(); i++){
        v[i].second = arr[z[i]] - 1;
    }
    v.push_back({10000000000,10000000000});
    sort(v.begin(), v.end());
    long long s = v[0].first;
    long long f = v[0].second;
    long long  m = 0;
    for(long long i = 1; i < v.size(); i++){
        if(f < v[i].first){
            s = v[i].first;
            f = v[i].second;
        }else{
            if(f <= v[i].second){
                f = v[i].second;
                m += f - v[i].first + 1;
            }else{
                m += v[i].second - v[i].first + 1;
            }
        }
    }
    cout << k << " " << c + m << endl;
    for(int i = 0; i < v.size() - 1; i++){
        cout << "Move " << i + 1 << ": " << z[i] << " " << v[i].first + 1 << " " << v[i].second + 1 << endl;
    }
    return 0;
}
