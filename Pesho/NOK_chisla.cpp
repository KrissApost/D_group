#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long m = 1000000000000;
    for(long long i = 1; i * i < n; i++){
        if(n % i == 0){
            if(n / i + i < m){
                m = n / i + i;
            }
        }

    }
    cout<< m <<endl;
    return 0;
}
