#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long n;
pair<long long,long long> bs(long long k){
    long long l = 0, r = 1;
    while(pow(r,k) < n){
        r++;
    }
    while(l <= r){
        long long m = (l+r)/2;
        long long f = pow(m,k);
//        cout << m << " " << f << endl;
        if(n == f){
            r = m-1;
            return {m,k};
        }
        if(n < f){
            r = m-1;
        }
        if(n > f){
            l = m+1;
        }
    }
    return {-1,k};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a = -1, b = -1, r = n, h = 0;
    while(r != 0){
        r /= 2;
        h++;
    }
    for(int i = h; i > 1; i--){
        if(bs(i).first == -1) continue;
        cout << bs(i).first << " " << bs(i).second << endl;
        a = bs(i).first;
        b = bs(i).second;
    }
    if(a == -1 && b == -1){
        cout << "NO";
        return 0;
    }

    return 0;
}
