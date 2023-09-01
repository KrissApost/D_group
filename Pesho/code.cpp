#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <char> vec;
    vector <char> vec2;
    char a;
    while(cin >> a) vec.push_back(a);
    int n = vec.size();
    int k = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || vec[i] == vec[i-1]){
            k++;
        }else{
            if(k == 1){
                vec2.push_back(vec[i-1]);
            }else{
                while(k > 0){
                    vec2.push_back('0' + k % 10);
                    k /= 10;
                }
                vec2.push_back(vec[i-1]);
            }
            k = 1;
        }
    }

    if(k == 1){
        vec2.push_back(vec[n-1]);
    }else{
        while(k > 0){
            vec2.push_back('0' + k % 10);
            k /= 10;
        }
        vec2.push_back(vec[n-1]);
    }
    cout << n - vec2.size();

    return 0;
}
