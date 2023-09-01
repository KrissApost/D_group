#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    if(a < 2){
        return false;
    }
    double h = sqrt(a);
    for(int i = 2; i <= h; i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;
    map<int,int> br;
    int r = a;
    for(int i = 2; i <= a; i++){
        if(a % i == 0){
            while(r % i == 0){
                br[i]++;
                r /= i;
            }
        }
        if(isPrime(r)){
            br[r]++;
            break;
        }
        if(r == 1){
            break;
        }
    }
    vector<pair<int,int>> dels;
    for(auto p: br){
        dels.push_back({p.first,p.second});
    }
    int prs = dels.size();
    vector<int> del;
    int arr[prs] = {}, j;
    while(true){
        int deli = 1;
        for(int i = 0; i < prs; i++){
            deli *= pow(dels[i].first, arr[i]);
        }
        del.push_back(deli);
        for(j = 0; j < prs; j++){
            arr[j]++;
            if(arr[j] <= dels[j].second){
                break;
            }else{
                arr[j] = 0;
            }
        }
        if(j >= prs) break;
    }
    int m = a, x1, x2;
    for(int i = 0; i < del.size(); i++){
        for(int y = 0; y < del.size(); y++){
            if(i == y){
                continue;
            }
            long long nok = (long long) del[i] * del[y] / __gcd(del[i], del[y]);
            if(nok == a && m > abs(del[i] - del[y])){
                m = abs(del[i] - del[y]);
                x1 = min(del[i],del[y]);
                x2 = max(del[i],del[y]);
            }
        }
    }
    if(m != a){
        cout << x1 << " " << x2;
    }else{
        cout << "No solution";
    }

    return 0;
}

