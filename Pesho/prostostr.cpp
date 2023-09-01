#include <bits/stdc++.h>
using namespace std;
long long toNumber(const string& s)
{
    long long n = 0;
    for(int i = 0; i < s.length(); i++){
        n+=n*10+(s[i]-'0');
    }
    return n;
}
bool isSimple(long long n){
    if(n == 1)
    {
        return true;
    }
    bool f = true;
    for(int i = 2; i * i < n; i++)
    {
        if(n % i == 0)
        {
            f = false;
            break;
        }
    }
    if(f)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    string s;
    cin >> s;
    cout << toNumber(s);
}
