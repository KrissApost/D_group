#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    int a, b;
    char z;
    cin >> a >> z >> b;
    int c = a / b, o = a % b;
    vector<int> v;
    map<int,bool> br;
    int k = 0;
    bool f = false;
    while(o != 0){
        o *= 10;
        if(br[o] != 0){
            f = true;
            k = br[o]+1;
            break;
        }
        br[o] = k-1;
        int l = o / b;
        v.push_back(l);
        o = o % b;
        k++;
    }
    cout << c;
    if(v.size() == 0) return 0;
    cout << '.';
    if(!f){
        k = -1;
    }
    k = 0;
    for(int i = 0; i < v.size(); i++){
        if(i == k) cout << '(';
        cout << v[i];
    }
    if(k != -1){
        cout << ')';
    }

    return 0;
}
