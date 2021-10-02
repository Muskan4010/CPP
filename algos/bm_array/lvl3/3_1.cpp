//Maximum Index
//Given an array A[] of N positive integers. The task is to find
//the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int maxIndex(int A[], int N)
    {
        int maxIn = INT_MIN;
        int In = INT_MIN;
        int low = 0, high = N - 1;
        while (low <= high)
        {
            if (A[high] >= A[low])
            {
                In = high - low;
                low++;
                high = N - 1;
            }
            else
            {
                high--;
            }
            maxIn = max(maxIn, In);
        }
        return maxIn;
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
    int ans = ob.maxIndex(arr, n);
    cout << ans;
    return 0;
}