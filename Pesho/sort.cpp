#include <bits/stdc++.h>
using namespace std;
struct person {
    string first, last;
};
bool cmp(person a, person b){
    if(a.first!=b.first) return a.first < b.first;
    return a.last > b.last;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <person> vec1;
    for(int i = 0; i < n; i++){
        string f,l;
        cin >> f >> l;
        vec1.push_back({f,l});
    }
    sort(vec1.begin(), vec1.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << vec1[i].first << " " << vec1[i].last << "\n";
    }


    return 0;
}
