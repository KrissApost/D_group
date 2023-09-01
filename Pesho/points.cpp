#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long arr[200000], n, m;
vector<pair<int,int>> v;
long long bs(int a, int b){
    long long l = 0, r = n;
    while(l <= r){
        long long s = (l+r)/2;
        if(a > arr[s] && a < arr[s] + v[s].first){
            if(b <= v[s].second){
                return 1;
            }
            return 0;
        }
        if(a == arr[s]){
            if(b <= v[s].second){
                return 1;
            }else{
                if(s > 0 && b <= v[s-1].second){
                    return 1;
                }
                return 0;
            }
        }
        if(a == arr[s] + v[s].first){
            if(b <= v[s].second){
                return 1;
            }else{
                if(s < n - 1 && b <= v[s+1].second){
                    return 1;
                }
                return 0;
            }
        }
        if(a < arr[s]){
            r = s-1;
        }
        if(a > arr[s] + v[s].first){
            l = s+1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a,b});
        if(i > 0) arr[i] = arr[i-1] + v[i-1].first;
    }
    int k = 0;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        k += bs(a,b);
    }
    cout << k;

    return 0;
}
