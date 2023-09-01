#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <char> vec;
    char a;
    while(cin >> a){
        vec.push_back(a);
    }
    int n = vec.size();
    int k = 0, m = 0;
    char r;
    for(int i = 0; i < n; i++){
        if(vec[i] == vec[i-1] || i == 0){
            k++;
        }else{
            if(k > m){
                m = k;
                r = vec[i-1];
            }
            k = 1;
        }
    }
    if(k > m){
        m = k-1;
        r = vec[n-1];
    }
    cout << m << " " << r;

    return 0;
}

