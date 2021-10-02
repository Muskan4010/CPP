//Find Missing And Repeating
//Given an unsorted array Arr of size N of positive integers. One number 'A'
//from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int *findTwoElements(int *arr, int n)
    {
        int xxory = 0;
        int *ans = new int(2);
        for (int i = 0; i < n; i++)
        {
            xxory = xxory ^ arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            xxory = xxory ^ i;
        }
        int x = 0, y = 0;
        int val = (xxory & -xxory);
        for (int i = 0; i < n; i++)
        {
            if ((val & arr[i]))
            {
                x = x ^ arr[i];
            }
            else
            {
                y = y ^ arr[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if ((val & i))
            {
                x = x ^ i;
            }
            else
            {
                y = y ^ i;
            }
        }
        //check which one is duplicate
        for (int i = 0; i < n; i++)
        {
            if (x == arr[i])
            {
                ans[0] = x;
                ans[1] = y;
                break;
            }
            else if (y == arr[i])
            {
                ans[0] = y;
                ans[1] = x;
                break;
            }
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
    solution ob;
    auto res = ob.findTwoElements(arr, n);
    cout << res[0] << " " << res[1];
    return 0;
}