//Triplet Sum in Array
//Given an array arr of size n and an integer X. Find if there's
//a triplet in the array which sums up to the given integer X.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool tripletSum(int A[], int n, int X)
    {
        int a, b, c;
        sort(A, A + n);
        //b+c=X-a
        int low, high;
        for (int i = 0; i < n; i++)
        {
            a = X - A[i];
            low = i + 1;
            high = n - 1;
            while (low < high)
            {
                if (A[low] + A[high] == a)
                {
                    return true;
                }
                else if (A[low] + A[high] > a)
                {
                    high--;
                }
                else
                {
                    low++;
                }
            }
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
    bool res = ob.tripletSum(arr, n, x);
    cout << res;
    return 0;
}