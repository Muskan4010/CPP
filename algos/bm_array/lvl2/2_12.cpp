//Kadane's Algorithm
//Given an array arr of N integers. Find the
//contiguous sub-array with maximum sum.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubarraySum(int arr[], int n)
    {
        int currSum = 0;
        int negSum = INT_MIN;
        int maxSum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            currSum += arr[i];
            if (currSum < 0)
            {
                //negsum is to handle maximum negative sum possible
                negSum = max(negSum, currSum);
                currSum = 0;
            }
            else
            {
                //even one positive sum is enough to rule out possibilty of max negSum
                negSum = currSum;
            }
            maxSum = max(maxSum, negSum);
        }
        return maxSum;
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
    int maxSum = ob.maxSubarraySum(arr, n);
    cout << maxSum;
    return 0;
}