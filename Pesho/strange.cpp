#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,a;
    cin>>s;
    int j=-1,ans=0,br[200]={ },start=0;
    for(int i=0;i<s.size();i++){
        while(j+1<s.size() && br[s[j+1]]==false){
            br[s[j+1]]=true;
            j++;
        }
        if(ans<=j-i+1){
            ans=j-i+1;
            start=i;
            a=s.substr(i,ans);
        }
        br[s[i]]=false;
    }
    cout<<ans<<" "<<start<<endl;
    cout<<a;
    return 0;
}
