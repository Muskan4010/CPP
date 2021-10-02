// Find the first non-repeating element in a given array arr of N integers.
// Note: Array consists of only positive and negative integers and not zero.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        unordered_map<int, int> map;
        int res1 = n + 1, res;
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
        for (const auto &e : map)
        {
            cout << e.first << " " << e.second << endl;
        }
        for (int i = 0; i < n; i++)
        {
            if (map[arr[i]] > 0 && res1 > map[arr[i]])
            {
                res = arr[i];
                res1 = map[arr[i]] - 1;
            }
        }
        if (res1 == n)
        {
            res = 0;
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
    solution ob;
    int res = ob.firstNonRepeating(arr, n);
    cout << res;
    return 0;
}