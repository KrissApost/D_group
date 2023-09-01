#include <bits/stdc++.h>
using namespace std;
vector< long long> primeFactorization(long long n){
    bool er[1000001];
    vector<int> pr;
    int mm = sqrt(n);
    for(int i = 2; i <= mm; i++){
        if(!er[i]) for(int y = i*i; y <= n; y+=i) if(!er[y]) er[y] = true;
    }
    int k = 2;
    pr.push_back(2);
    pr.push_back(3);
    for(int i = 1; i <= n/6; i++){
        if(!er[6*i-1]){
            pr.push_back(6*i-1);
            k++;
        }
        if(!er[6*i+1]){
            pr.push_back(6*i+1);
            k++;
        }
    }
    vector<long long> v;
    int s = n;
    for(int i = 0; i < pr.size(); i++){
        int r = pr[i];
        if(!er[s]){
            v.push_back(s);
            break;
        }
        while(s != 1 && s % r == 0){
            s /= r;
            v.push_back(r);
        }
    }
    return v;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;

    vector<long long> v = primeFactorization(N);
    cout << '[';
    cout << v[0];
    for(int i = 1; i < v.size(); i++){
        cout << ", "<< v[i];
    }
    cout << ']';

    return 0;
}

