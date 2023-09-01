#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector <long long> er(1000001);
    for(int i = 1; i < 1000001; i++){
        for(int j = i*2; j < 1000001; j+=i){
            er[j]+=i;
        }
    }
    vector<bool> iz(1000001);
    for(int i = 1; i < 1000001; i++){
        if(er[i] >= i){
            iz[i] = 1;
        }
    }
    vector<int> v(1000001);
    for(int i=1;i<=1000000;i++){
        v[i]=v[i-1]+iz[i];
    }
    int q;
    int a,b;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>> a >> b;
        cout<< v[b] - v[a-1] << endl;
    }

    return 0;
}
