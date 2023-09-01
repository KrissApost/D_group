#include <bits/stdc++.h>
using namespace std;

bool prost(int n) {
   for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
   return true;
}

int main() {
    int n;
    cin >> n;
    int b, e, k = 0;
    for(int i = 0; i < n; i++){
        cin >> b >> e;
        if(b <= 2 && e >= 2) k++;
        for(int y = b/6; y <= e/6; y++){
            int t1 = 6*y+1, t2 = 6*y+5;
//            cout << "--- " << y << " " << t1 << " " << t2 <<endl;
            if(t1 >= b && t1 <= e && prost(t1))k++;
            if(t2 >= b && t2 <= e && prost(t2))k++;
        }
        cout << k << endl;
        k = 0;
    }
    return 0;
}
