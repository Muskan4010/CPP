//Array Subset of another array
//Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m.
//Task is to check whether a2[] is a subset of a1[] or not.
// Both the arrays can be sorted or unsorted.
//It may be assumed that elements in both array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string arraysubset(int arr1[], int arr2[], int n, int m)
    {
        set<int> set;
        for (int i = 0; i < n; i++)
        {
            set.insert(arr1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            if (set.find(arr2[i]) == set.end())
            {
                return "No";
            }
        }
        return "Yes";
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    solution ob;
    string res = ob.arraysubset(arr1, arr2, n, m);
    cout << res;
    return 0;
}