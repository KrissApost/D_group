#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    char a;
    cin >> a;
    string ss;
    cin >> ss;
    int k = 0;
    for(int i = 1; i < n; i++){
        if((ss[i-1] == a) != (ss[i] == a)){
            k++;
        }
    }
    cout << k;

    return 0;
}
