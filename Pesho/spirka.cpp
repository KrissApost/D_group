#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector <int> vec(n-1);
    for(int i = 0; i < n-1; i++) cin >> vec[i];
    int k = 1, m = 0, s = 0, ms = 0;
    for(int i = 0; i < n-1; i++){
        if(vec[i] < vec[i+1]){
            k++;
            s+=vec[i];
        }else{
            s += vec[i];
            if(k > m){
                m = k;
                ms = s;
//                cout << "--" << ms << " " << m << endl;
            }
            s = 0;
            k = 1;
        }
    }
//    cout << "k = " << k << endl;
    if(k > m){
        m = k-1;
        ms = s;
//        cout << "--" << ms << " " << m << endl;
    }
    int h = 1;
    for(int i = 2; i <= sqrt(ms); i++){
        if(ms % i == 0){
            h = ms / i;
            break;
        }
    }
    cout << m << "\n" << h;

    return 0;
}

