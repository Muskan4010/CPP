// Given two arrays a[] and b[] of size n and m respectively. The
// task is to find union between these two arrays.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> Set;
    for (int i = 0; i < n; i++)
    {
        Set.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        Set.insert(b[i]);
    }
    int size = Set.size();
    return size;
}

int main()
{
    cout << "Enter size of array: ";
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter: ";
        cin >> a[i];
    }
    cout << "Enter size of array: ";
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cout << "Enter: ";
        cin >> b[i];
    }
    int size = doUnion(a, n, b, m);
    cout << size;
    return 0;
}