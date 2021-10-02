// Given an array of size N-1 such that it only contains distinct
// integers in the range of 1 to N. Find the missing element.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        int sum = (n * (n + 1)) / 2;
        for (const auto &e : array)
        {
            sum = sum - e;
        }
        return sum;
    }
};

int main()
{
    cout << "Enter n: ";
    int n,temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n-1; i++)
    {
        cout << "Enter :";
        cin >> temp;
        arr.push_back(temp);
    }
    Solution ob;
    int sum= ob.MissingNumber(arr, n);
    cout<<sum;
    return 0;
}