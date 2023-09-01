#include <bits/stdc++.h>
using namespace std;
const int ROWS = 1000     ;
const int ROW_SIZE = 1000;
vector<int> v[ROWS];
int k;
void read()
{
    int n;
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
    {
        v[i/ROW_SIZE].push_back(i);
    }
}
void del(int idx)
{
    for (int i = 0; i < ROWS; i++)
    {
        if (idx < v[i].size())
        {
            v[i].erase(v[i].begin()+idx);
            break;
        }
        idx -= v[i].size();
    }
}
void print()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
    }
}
int main()
{
    read();
    for (int i = 0; i < k; i++)
    {
        int p;
        cin >> p;
        del(p-1);
    }
    print();
    return 0;
}
