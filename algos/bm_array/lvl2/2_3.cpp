// Given an array of N integers, and an integer K, find the number
// of pairs of elements in the array whose sum is equal to K.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    std::map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (map.find(k - arr[i]) != map.end())
        {
            count += map[k - arr[i]];
        }
        if (k - arr[i] == arr[i])
        {
            count--;
        }
    }
    return count / 2;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter :";
        cin >> arr[i];
    }
    int count = getPairsCount(arr, n, k);
    cout << count;
    return 0;
}