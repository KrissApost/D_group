#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2){
    float d1 = (float) p1.first / p1.second, d2 = (float) p2.first / p2.second;
//    cout << d1 << " " << d2 << endl;
    if(d1 != d2) return d1 < d2;
    return p1.second < p2.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string ss, st, str;
    int r;
    vector <pair<int,int>> vec;
    while(cin >> ss){
        st = "";
        str = "";
        for(int i = 0; i < ss.length(); i++){
            if(ss[i] != '/'){
                st+=ss[i];
//                cout << i << " " << st << endl;
            }else{
                r = i;
                break;
            }
        }
        for(int i = r+1; i < ss.length(); i++){
            str+=ss[i];
//            cout << i << " " << str << endl;

        }
//        cout << st << " " << str << endl;
        vec.push_back({stoi(st), stoi(str)});
    }
    sort(vec.begin(), vec.end(), cmp);
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i].first << "/" << vec[i].second << " ";
    }

    return 0;
}
