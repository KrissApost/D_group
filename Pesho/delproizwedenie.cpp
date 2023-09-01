#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a;
    vector <int> vec;
    long long p = 1;
    for(int i = 0; i < n; i++){
        cin >> a;
        p *= a;
    }
    for(long long i = 1; i * i <= p; i++){
        if(i * i == p){
            vec.push_back(i);
            continue;
        }
        if(p % i == 0){
            vec.push_back(i);
            vec.push_back(p/i);
        }
    }
    sort(vec.begin(),vec.end());
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}

