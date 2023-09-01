#include <bits/stdc++.h>
using namespace std;

int del(int a)
{
    int k = a, br = 0;
    for(int i = 1; i * i < a; i++){
        if(a % i == 0){
            br += 2;
        }
    }
    if(sqrt(a) == trunc(sqrt(a))) br++;
    return br;
}
int dellong(long long a)
{
    long long k = a;
    int br = 0;
    for(int i = 1; i * i < a; i++){
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
    int dab = dellong(a*b);
    for(int i = 1; i * i < a; i++)
    {
        if(a % i == 0)
        {
            veca.push_back(i);
            veca.push_back(a/i);
        }
    }
    if(sqrt(a) == trunc(sqrt(a))) veca.push_back(sqrt(a));
    for(int i = 1; i * i < b; i++)
    {
        if(b % i == 0)
        {
            vecb.push_back(i);
            vecb.push_back(b/i);
        }
    }
    if(sqrt(b) == trunc(sqrt(b))) vecb.push_back(sqrt(b));
//    for(int i = 0; i < veca.size(); i++) cout << veca[i] << " ";
//    cout << endl;
//    for(int i = 0; i < vecb.size(); i++) cout << vecb[i] << " ";
//    cout << endl;
//    cout << dab << endl;
    int dela, delb;
    for(int x = 0; x < veca.size(); x++)
    {
        for(int y = 0; y < vecb.size(); y++)
        {
            dela = del(veca[x]);
            delb = del(vecb[y]);
//            cout << veca[x] <<"-" << dela << " --- " << vecb[y] << "-" << delb << endl;
            if(dab % (dela + delb) == 0) k++;
        }
    }
    cout << k;

    return 0;
}

