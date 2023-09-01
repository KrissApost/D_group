#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string ss;
    cin >> ss;
    int s = 1, ma = 0, mi = 300;
    char c1, c2;
    for(int i = 1; i < ss.length(); i++){
        if((isalpha(ss[i])) && ss[i] == ss[i-1]){
            s++;
        }else{
            if(!isalpha(ss[i-1])) continue;
            if(s > ma){
                ma = s;
                c1 = ss[i-1];
            }
            if(s < mi){
                mi = s;
                c2 = ss[i-1];
            }
            s = 1;
        }
    }
    if(!isalpha(ss[ss.length()-1])){
        cout << ma << " " << c1 << "\n";
        cout << mi << " " << c2;
        return 0;
    }
    if(s > ma){
        ma = s;
        c1 = ss[ss.length()-1];
    }
    if(s < mi){
        mi = s;
        c2 = ss[ss.length()-1];
    }
    cout << ma << " " << c1 << "\n";
    cout << mi << " " << c2;

    return 0;
}
