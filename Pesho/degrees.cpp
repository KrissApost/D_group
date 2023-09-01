#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

string pro(string& a, int b){
    long long p = 0, c;
    string s;
    for(int i = 0; i < a.size() || p!=0; i++){
        c = p;
        if(i < a.size()) c += (a[i] - '0') * b;
        s.push_back('0' + c % 10);
        p = c / 10;
    }
    return s;
}

int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    string s, st = "1";
    cin >> s;
    int k = 1;
    int n = s.size();
    while(n > 0){
        int r = k;
        st ="1";
        while(r > 0){
            st = pro(st,2);
            r--;
        }
//        cout << st << endl;
        k++;
        n -= st.size();
    }
    cout << k-1;

    return 0;
}

