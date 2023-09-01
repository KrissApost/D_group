#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

string raz(string& a, string& b){
    int p = 0, c;
    string s = "";
    for(int i = 0; i < a.size(); i++){
        c = (a[i] - '0') - p;
        if(i < b.size()) c -= b[i] - '0';
        if(c < 0){
            c += 10;
            p = 1;
        }else{
            p = 0;
        }
        s.push_back('0' + c);
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string A;
    cin >> A;
    sort(A.begin(),A.end());
    string st = A;
    int k = 0;
    while(A[k] == '0'){
        k++;
    }
//    swap(A[0],A[k]);
    reverse(A.begin(),A.end());
//    cout << st << " " << A << endl;
    st = raz(st,A);
    while(st.back() == '0' && st.size() > 1){
        st.pop_back();
    }
    reverse(st.begin(),st.end());
    cout << st;

    return 0;
}
