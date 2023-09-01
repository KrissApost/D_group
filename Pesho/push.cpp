#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    vector <int> vec(2000001);
    int a1, a2,  b = 1000000, e = 1000001;
    for(int i = 0; i < q; i++){
        cin >> a1;
        cin >> a2;
        if(a1 == 1){
            vec[b] = a2;
            b--;
        }else if(a1 == 2){
            vec[e] = a2;
            e++;
        }else{
            cout << vec[b+a2] <<'\n';
        }
    }
    return 0;
}
