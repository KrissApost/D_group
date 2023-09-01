#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string ss, st;
    cin >> ss >> k;
    for(int i = 0; i < k-1; i++){
        if(ss.length() > 2){
            ss = to_string(stoi(ss) + ss[0] - '0' + ss[1] - '0' + ss[2] - '0' - 1);
        }
        if(ss.length() == 2){
            ss = to_string(stoi(ss) + ss[0] - '0' + ss[1] - '0' - 1);
        }
        if(ss.length() == 1){
            ss = to_string(stoi(ss) + ss[0]-'0'-1);
        }
        if(st == ss) break;
        st = ss;
    }
    cout << ss;

    return 0;
}
