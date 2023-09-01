#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int br=0,s=0;
    vector <int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        if(vec[i]>k){
            cout<<0<<endl;
            return 0;
        }
        s+=vec[i];
        if(i==n-1 || s+vec[i+1]>k){
            br++;
            s=0;
        }
    }
    cout<<br<<endl;
    return 0;
}
