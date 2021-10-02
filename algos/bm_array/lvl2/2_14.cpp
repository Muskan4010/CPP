//maximum product subarray
// Given an array Arr that contains N integers (may be positive, negative or zero).
// Find the product of the maximum product subarray.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    long long maxProduct(int *arr, int n)
    {
        long long choice1, choice2;
        long long max_pos, max_neg, ans;
        max_pos = arr[0];
        max_neg = arr[0];
        ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            choice1 = max_neg * (long long)arr[i];
            choice2 = max_pos * (long long)arr[i];
            max_pos = max((long long)arr[i], max(choice2, choice1));
            max_neg = min((long long)arr[i], min(choice1, choice2));
            ans = max(ans, max_pos);
            cout << arr[i] << " " << choice1 << " " << choice2 << " " << max_neg << " " << max_pos << endl;
        }
        return ans;
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
    int *ptr = &arr[0];
    solution ob;
    long long max = ob.maxProduct(ptr, n);
    cout << max;
    return 0;
}