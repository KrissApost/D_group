#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> vec1;
    vector <int> vec2;
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++){
        vec1.push_back(i);
    }
    int n = vec1.size(), k = 0, x = 2;
    while(n >= x){
        for(int i = 0; i < n; i+=x){
            vec2.push_back(vec1[i]);
        }
        if(vec2.size() < x){
            break;
        }
        vec1 = vec2;
        vec2.clear();
        n = vec1.size();
        x++;
    }
    cout << vec1[vec1.size()-1];

    return 0;
}

