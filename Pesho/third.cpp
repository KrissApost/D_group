#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <char> vec1;
    vector <char> vec2;
    char a;
    while(cin >> a) vec1.push_back(a);
    int n = vec1.size(), k = 0;
    while(n > 2)
    {
        k = 0;
        for(int i = 0; i < n; i++)
        {
            k++;
            if(k == 3)k = 0;
            else vec2.push_back(vec1[i]);
        }
        reverse(vec2.begin(),vec2.end());
        vec1 = vec2;
        vec2.clear();
        n = vec1.size();
    }
    if(vec1[0] > vec1[1]) cout << vec1[1] << vec1[0];
    else cout << vec1[0] << vec1[1];

    return 0;
}

