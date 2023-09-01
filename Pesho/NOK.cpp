#include <bits/stdc++.h>
using namespace std;
int NOK(int a, int b) {
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> vec;
    double h = sqrt(n);
    for(int i = 1; i < h; i++)
    {
        if(n % i == 0)
        {
            vec.push_back(i);
            vec.push_back(n/i);
        }
    }
    if(sqrt(n) == trunc(sqrt(n))){
        vec.push_back(sqrt(n));
    }
    sort(vec.begin(), vec.end());
    int m = 1+n;
    for(int i = 0; i < vec.size(); i++){
        for(int y = i; y < vec.size(); y++){
            if(vec[i]*vec[y]/NOK(vec[i], vec[y]) == n){
                if(m > vec[i] + vec[y]){
                    m = vec[i] + vec[y];
                }
            }
        }
    }
    cout << m;

    return 0;
}
