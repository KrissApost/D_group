#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = 1;
    double h = sqrt(n);
    for(int i = 1; i < h; i++){
        if(n % i==0){
            m = i;
        }
    }
    cout << m + n / m;
    return 0;
}
