#include <bits/stdc++.h>
using namespace std;

int main(){
//    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, q;
    cin >> n >> q;
    vector <long long> vec;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            vec.push_back(i);
        }
    }
    int vs = vec.size()-1;
    if(vec[vs] * vec[vs] == n) vs--;
    for(long long i = vs; i >= 0; i--){
        vec.push_back(n/vec[i]);
    }
    long long a;
    for(int i = 0; i < q; i++){
        cin >> a;
        for(int y = 0; y < vec.size(); y++){
            if(vec[y] >= a){
                cout << vec[y] << endl;
                break;
            }
        }
    }

    return 0;
}

