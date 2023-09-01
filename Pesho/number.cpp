#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
string go6o(long long n, int p){
    string a;
    while(n != 0){
        if(n % p < 10){
            a.push_back('0' + n % p);
        }else{
            a.push_back('A' + n % p - 10);
        }
        n /= p;
    }
    reverse(a.begin(), a.end());
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<int> vec;
    for(int i = 2; i <= 36; i++){
        string s = go6o(n, i);
        string st = s;
        reverse(s.begin(), s.end());
        if(st == s){
            vec.push_back(i);
        }
    }
    if(vec.size() == 0){
        cout << "none";
        return 0;
    }
    if(vec.size() == 1){
        cout << "unique" << endl;
        cout << vec[0];
        return 0;
    }
    cout << "multiple" << endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}

