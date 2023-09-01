#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> x(n);
    int y;
    int m = 0;
    int nod;
    vector<int> v;
    cin >> x[0] >> y;
    if(y > m) m = y;
    x[0] -= y;
    nod = x[0];
    for(int i = 1; i < n; i++){
        cin >> x[i] >> y;
        if(y > m) m = y;
        x[i] -= y;
        nod = __gcd(nod,x[i]);
    }
    for(int i = 1; i * i < nod; i++){
        if(nod % i == 0){
            if(i > m){
                v.push_back(i);
            }
            if(nod / i > m){
                v.push_back(nod / i);
            }
        }
    }
    if(sqrt(nod) == trunc(sqrt(nod))){
        if(sqrt(nod) > m){
            v.push_back(sqrt(nod));
        }
    }
    cout << v.size() << endl;
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    return 0;
}
