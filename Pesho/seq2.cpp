#include<bits/stdc++.h>
#define endl '\n';
using namespace std;
int er[1000000];
int br[1000000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 2; i<=1000000; i++){
        if(er[i]!=0)continue;
        for(int j = i; j<=1000000; j+=i){
            er[j] = i;
        }
    }
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
        v[i] = er[v[i]];
    }
    int j = -1,m=0,l,r;
    for(int i = 0; i<n; i++){
        while(j+1<n && br[v[j+1]]==0){
            br[v[j+1]]=1;
            j++;
        }
        if(j-i+1>m){
            m=j-i+1;
            l=i;
            r=j;
        }
        if(i<=j){
            br[v[i]] = 0;
        } else {
            j = i;
        }
    }
    cout<<l+1<<" "<<r+1;
    return 0;
}
