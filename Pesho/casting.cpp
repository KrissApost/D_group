#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> pr(m);
    int studio[n] = {0};
    for(int i = 0; i < m; i++){
        cin >> pr[i].first >> pr[i].second;
    }
    sort(pr.begin(),pr.end(),cmp);
    for(int i = 0; i < m; i++)
    {
        int st = -1, mine = INT_MAX, r;
        for(int y = 0; y < n; y++)
        {
            if(studio[y] < mine)
            {
                mine = studio[y];
                r = y;
            }
            if(studio[y] <= pr[i].first)
            {
                st = y;
                break;
            }
        }
        if(st == -1)
        {
            studio[r]+=pr[i].second;
        }
        studio[st]=pr[i].second+pr[i].first;
    }
    int maxe = studio[0], r = 0;
    for(int i = 1; i < n; i++)
    {
        if(studio[i]>=maxe)
        {
            maxe=studio[i];
            r = i;
        }
    }
    cout << maxe << " " << r + 1;

    return 0;
}
