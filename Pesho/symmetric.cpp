#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ss;
    cin >> ss;
    string ss1 = ss, st = "";
    int k = 0;
    reverse(ss.begin(), ss.end());
//    cout << ss << endl;
    while(ss!=ss1){
        st+=ss1[0];
        ss1.erase(ss1.begin()+0);
        ss=ss1;
        reverse(ss.begin(), ss.end());
        k++;
    }
    reverse(st.begin(), st.end());
    cout << k << endl << st;

    return 0;
}
