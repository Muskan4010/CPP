//substring hashing
#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
lli dp[1000001];
lli inv[1000001];
using namespace std;

//calculate modulo inverse
lli power(lli a, lli n)
{
    lli result = 1;
    while (n)
    {
        if (n & 1)
        {
            result = (result * a) % mod;
        }
        n >>= 1;
        a = (a * a) % mod;
    }
    cout << "returning inverse modulo\n";
    return result;
}

void init(string test)
{
    lli p = 31;
    lli p_power = 1;
    dp[0] = (test[0] - 'a' + 1) * p;
    //inverse modulo
    inv[0] = 1;
    for (int i = 1; i < test.size(); i++)
    {
        p_power = (p_power * p) % mod;
        inv[i] = power(p_power, mod - 2);
        dp[i] = dp[i - 1] + ((test[i] - 'a' + 1) * p_power) % mod;
    }
    cout << "init ended here \n";
}
lli subStringHash(int L, int R)
{
    int result = dp[R];
    if (L > 0)
    {
        result -= dp[L - 1];
    }
    result = (result * inv[L]) % mod;
    return result;
}

int main()
{
    string text;
    getline(cin, text);
    int L, R;
    init(text);
    cout << "enter L, R: ";
    cin >> L >> R;
    cout << subStringHash(L, R) << endl;
}