#include <bits/stdc++.h>
using namespace std;

int del(int a)
{
    double h = sqrt(a);
    int k = a, br = 0;
    for(int i = 1; i < h; i++){
        if(a % i == 0){
            br += 2;
        }
    }
    if(sqrt(a) == trunc(sqrt(a))) br++;
    return br;
}
int dellong(long long a)
{
    double h = sqrt(a);
    long long k = a;
    int br = 0;
    for(int i = 1; i < h; i++){
        if(a % i == 0){
            br += 2;
        }
    }
    if(sqrt(a) == trunc(sqrt(a))) br++;
    return br;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, k = 0;
    cin >> a >> b;
    vector <int> veca;
    vector <int> vecb;
    unordered_map<long long,bool> mapdel;
    double h = sqrt(a);
    for(int i = 1; i < h; i++)
    {
        if(a % i == 0)
        {
            veca.push_back(i);
            veca.push_back(a/i);
        }
    }
    if(sqrt(a) == trunc(sqrt(a))) veca.push_back(sqrt(a));
    h = sqrt(b);
    for(int i = 1; i < h; i++)
    {
        if(b % i == 0)
        {
            vecb.push_back(i);
            vecb.push_back(b/i);
            for(int j = 0; j < veca.size(); j++){
                mapdel[(long long) veca[j]*i] = true;
                mapdel[(long long) veca[j]*(b/i)] = true;
            }
        }
    }
    if(sqrt(b) == trunc(sqrt(b))){
        vecb.push_back(sqrt(b));
        for(int j = 0; j < veca.size(); j++){
            mapdel[(long long) veca[j]*sqrt(b)] = true;
        }
    }
    int dab = mapdel.size();
    int dela, delb;
    for(int x = 0; x < veca.size(); x++)
    {
        for(int y = 0; y < vecb.size(); y++)
        {
            dela = del(veca[x]);
            delb = del(vecb[y]);
            if(dab % (dela + delb) == 0) k++;
        }
    }
    cout << k;

    return 0;
}
