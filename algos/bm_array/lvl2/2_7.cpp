// Given an array arr[] of size n, find the first repeating element.
// The element should occurs more than once and the index of its first
// occurrence should be the smallest.
// problem-9 (searching~ narshimha)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstRepeated(int arr[], int n)
    {
        std::unordered_map<int, int> map;
        int res = -n;
        for (int i = 0; i < n; i++)
        {
            if (!map[arr[i]])
            {
                map[arr[i]] = i + 1;
            }
            else if (map[arr[i]] < 0)
            {
                map[arr[i]] = map[arr[i]];
            }
            else
            {
                map[arr[i]] = -map[arr[i]];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (map[arr[i]] < 0 && res < map[arr[i]])
            {
                res = -map[arr[i]];
            }
        }
        if (res < 0)
        {
            res = -1;
        }
        return res;
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    int tmp = ob.firstRepeated(arr, n);
    cout << tmp;
}