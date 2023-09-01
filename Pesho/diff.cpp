#include<bits/stdc++.h>
using namespace std;

long long digitsToN(long long n)
{
    long long maxDigits = to_string(n).size();

    long long ans = 0;
    long long tenthPower = 1;
    for (int digits = 1; digits < maxDigits; digits++)
    {
        ans += 9*tenthPower*digits;
        tenthPower *= 10;
    }
    ans += (n-tenthPower+1)*maxDigits;
    return ans;
}

long long solve(long long n, long long a)
{
    long long halfDigits = digitsToN(n);
    bool shouldReverse = false;

    if (a <= halfDigits)
    {
        /// вляво
        a = halfDigits-a+1;
        shouldReverse = true;
    }
    else
    {
        /// вдясно
        a -= halfDigits-1;
    }

    long long tenthPower = 1;
    for (int cifri = 1; true; cifri++)
    {
        long long broiChisla = 9*tenthPower;
        long long broiCifri = cifri*broiChisla;

        if (a <= broiCifri)
        {
            long long poredno = (a+cifri-1)/cifri;
            long long number = tenthPower+poredno-1;
            a -= (poredno-1)*cifri;

            string s = to_string(number);
            if (shouldReverse) reverse(s.begin(), s.end());
            return s[a-1]-'0';
            break;
        }

        a -= broiCifri;
        tenthPower *= 10;
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, a, b;
    cin >> n >> a >> b;
    cout << solve(n, a)-solve(n, b) << endl;

    return 0;
}
