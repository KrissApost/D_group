#include <bits/stdc++.h>
using namespace std;
bool isSimple(long long a){
    for(long long i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    if(n < 4){
        cout << n;
        return 0;
    }
    vector <long long> vec;
    long long r = n;
    for(long long i = 2; i <= r / 2; i++){
        if(isSimple(n)){
            vec.push_back(n);
            break;
        }
        while(n % i == 0){
            vec.push_back(i);
            n /= i;
        }
        if(n == 1){
            break;
        }
    }
    for(int i = 0; i < vec.size()-1; i++) cout << vec[i] << "*";
    cout << vec[vec.size()-1];

    return 0;
}
