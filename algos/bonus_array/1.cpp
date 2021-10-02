// Key Pair
// easy
// Given an array Arr of N positive integers and another number X.
// Determine whether or not there exist two elements in Arr whose sum is exactly X.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool keyPair(int arr[], int n, int x)
    {
        unordered_set<int> set;
        for (int i = 0; i < n; i++)
        {
            if (set.find(x - arr[i]) != set.end())
            {
                return true;
            }
            set.insert(arr[i]);
        }
        return false;
    }
};
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solution ob;
    cout << ob.keyPair(arr, n, x);
    return 0;
}