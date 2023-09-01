#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end(),cmp);
    int k = 0, t = v[0], r = 0, j = 0;
    for(int i = 1; i < n; i++){
        j++;
        if(v[i] != t){
            k += max(0,(j-r)) * t;
            r = max(r,j);
            j = 0;
        }
        t = v[i];
    }
    k += max(0,(j+1-r)) * v[n-1];
    cout << k;

    return 0;
}
