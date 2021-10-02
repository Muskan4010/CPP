//Minimize the Heights II
//Given an array arr[] denoting heights of N towers and a positive integer K
//you have to modify the height of each tower either by increasing
//or decreasing them by K only once. After modifying, height should
//be a non-negative integer.

//Find out what could be the possible minimum difference of the
//height of shortest and longest towers after you have modified each tower.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int ans = arr[n - 1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        int currMin, currMax;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= k)
            {
                currMin = min(smallest, arr[i] + k);
                currMax = max(largest, arr[i-1] - k);
                ans = min(ans, currMax - currMin);
            }
        }
        return ans;
    }
};
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solution ob;
    int Diff = ob.getMinDiff(arr, n, k);
    cout << Diff;
    return 0;
}