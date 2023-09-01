#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector <char> vec;
    char a;
    while(cin >> a) vec.push_back(a);
    int i = 0, k, n = vec.size();
    while(n >= 3 && i < n - 1){
        k = 1;
        while(i+k < n && vec[i] == vec[i+k]) k++;
        if(k>2){
            vec.erase(vec.begin() + i, vec.begin() + i + k);
            n = vec.size();
            i = max(0, i - 2);
        }else{
            i += k;
        }
    }
    if(n == 0){
        cout << "EMPTY";
        return 0;
    }
    for(int i = 0; i < n; i++) cout << vec[i];

    return 0;
}
