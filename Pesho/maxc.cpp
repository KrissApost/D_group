#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
bool cmp(int a, int b){
    int da = 10, db = 10;
    while(da <= a) da*=10;
    while(db <= b) db*=10;
    long long ab, ba;
    ab = (long long) a * db + b;
    ba = (long long) b * da + a;
    return ab > ba;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << vec[i];
    }

    return 0;
}
