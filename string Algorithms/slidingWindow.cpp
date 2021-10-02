// Given text T and Pattern P , find whether P exists in T or not.
// In case it exist , print all the occurences of pattern in text

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<int> SlidingWindow(string text, string pattern)
    {
        int t = text.size();
        int p = pattern.size();
        vector<int> res;
        for (int l = 0, r = p - 1; r < t; l++, r++)
        {
            for (int i = 0; i < p; i++)
            {
                if (text[l + i] != pattern[i])
                {
                    break;
                }
                if (i == p - 1)
                {
                    res.push_back(l);
                }
            }
        }
        return res;
    }
};

int main()
{
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    solution ob;
    auto res = ob.SlidingWindow(text, pattern);
    for (const auto &e : res)
    {
        cout << e << " ";
    }
    return 0;
}