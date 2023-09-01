#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int n;
string sum(string& a){
    int i = n-1;
    while(a[i] == '1'){
        a[i] = '0';
        i--;
    }
    a[i] = '1';
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k1, k2, s = 0;
    cin >> n >> k1 >> k2;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        s+=v[i];
    }
    map<int,bool> br;
    br[s] = 1;
    string s1;
    for(int i = 0; i < n; i++) s1.push_back('0');
    string s2;
    for(int i = 0; i < n; i++) s2.push_back('1');
    while(s1 != s2){
        int k = 0;
        for(int j = 0; j < n; j++){
            if(s1[j] == '1') k += v[j];
        }
        br[k] = 1;
        s1 = sum(s1);
    }
    k1+=30000;
    k2+=30000;
    bool br2[k2+1] = {};
    for(int i = k1; i <= k2; i++){
        if(!br[i-30000]){
            br2[i] = 1;
//            cout << i << endl;
        }
    }
    int m = 0, k = 0;
    for(int i = 0; i <= k2; i++){
        if(br2[i] == 1){
            k++;
//            cout << i << " ";
        }
        if(k > m){
            m = k;
        }
        if(br2[i] == 0){
            k = 0;
//            cout << endl;
        }
    }
    cout << m;

    return 0;
}
