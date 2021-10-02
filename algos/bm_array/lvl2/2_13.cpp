//Factorials of large numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> factorial(int N)
    {
        vector<int> v;
        v.push_back(1);
        int x = 0, num = 0;
        for (int j = 2; j <= N; j++)
        {
            num=0;
            for (int i = v.size()-1; i >= 0; i--)
            {
                int x = (v[i] * j) + num;
                num = x / 10;
                v[i] = x % 10;
            }
            if (num == 0)
            {
                continue;
            }
            while (num != 0)
            {
                v.insert(v.begin(),num%10);
                num=num/10;
            }
        }
        return v;
    }
};

int main()
{
    int n;
    cin >> n;
    solution ob;
    vector<int> ans = ob.factorial(n);
    for (const auto &e : ans)
    {
        cout << e;
    }
    return 0;
}