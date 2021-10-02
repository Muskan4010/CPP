// Given an array a[] of size N which contains elements from 0 to N-1, you
// need to find all the elements occurring more than once in the given array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{
    vector<int> dup;
    std::unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (const auto &e : map)
    {
        if (e.second > 1)
        {
            dup.push_back(e.first);
        }
    }
    sort(dup.begin(), dup.end());
    if (dup.size() == 0)
    {
        dup.push_back(-1);
    }
    return dup;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v = duplicates(arr, n);
    for (const auto &e : v)
    {
        cout << e << " ";
    }
    return 0;
}