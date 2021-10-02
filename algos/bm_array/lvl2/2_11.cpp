// Given an array of positive and negative numbers. Find if
// there is a subarray (of size at-least one) with 0 sum.
//we can observe that cumulative sum repeats in an array
//only when we add and subract the same thing hence a zero
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool subArrayExist(int arr[], int n)
    {
        unordered_set<int> set;
        int currSum = 0;
        for (int i = 0; i < n; i++)
        {
            currSum += arr[i];
            if (currSum == 0 || set.find(currSum) != set.end())
            {
                return true;
            }
            set.insert(currSum);
        }
        return false;
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
    bool ans = ob.subArrayExist(arr, n);
    cout << ans;
}
