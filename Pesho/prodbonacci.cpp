#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, n;
    cin >> n >> a >> b;
    vector<int> f = {a,b};
    for(int i = 2; i < n; i++){
        int z = f[f.size()-1] * f[f.size()-2];
        string s = to_string(z);
        for(int i1 = 0; i1 < s.size(); i1++){
            if(s[i1] != '0'){
                s[i1]--;
            }else{
                s[i1] = '9';
            }
        }
        z = stoi(s);
        f.push_back(z%1000);
//        cout << z % 1000 << " " << f.size() << endl;
        for(int y = 0; y < max(0,(int)(f.size() - 3)); y++){
            if(f[y] == f[f.size()-2] && f[y+1] == f[f.size()-1]){
//                cout << "------------" << endl;
//                cout << f[y] << " " << f[y+1] << endl;
//                cout << "------------" << endl;
                int c = f.size() - y - 2, k = n - y;
                int h = k % c - 1;
                if(h == -1) h += c;
//                cout << k << " " << c << " " << h << endl;
                cout << f[y+h];
                return 0;
            }
        }
    }
    cout << f[f.size()-1];

    return 0;
}
