//Max sum path in two arrays
//Given two sorted arrays A and B of size M and N respectively.
//Each array contains only distinct elements but may have some
//elements in common with the other array. Find the maximum sum of
//a path from the beginning of any array to the end of any of the two arrays.
//We can switch from one array to another array only at the common elements.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int maxSumPath(int a[], int b[], int n, int m)
    {
        int sum_a = 0, sum_b = 0, res = 0;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                sum_a += a[i];
                i++;
            }
            else if (a[i] > b[j])
            {
                sum_b += b[j];
                j++;
            }
            else
            {
                res += max(sum_a, sum_b);
                sum_a = 0;
                sum_b = 0;
                while (a[i] == b[j] && i < n && j < m)
                {
                    res += a[i];
                    i++;
                    j++;
                }
            }
        }
        while (j < m)
        {
            sum_b += b[j];
            j++;
        }
        while (i < n)
        {
            sum_a += a[i];
            i++;
        }
        res += max(sum_a, sum_b);
        return res;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    solution ob;
    int res = ob.maxSumPath(a, b, n, m);
    cout << res;
    return 0;
}