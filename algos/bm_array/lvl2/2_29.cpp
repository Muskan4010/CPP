//Wave Array
//Given a sorted array arr[] of distinct integers. Sort the array into a
//wave-like array and return it In other words, arrange the
//elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5]
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void convertToWave(vector<int> &arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1] && i % 2 == 0)
            {
                swap(arr[i], arr[i + 1]);
            }
            else if (arr[i] > arr[i + 1] && i % 2 == 1)
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
};
int main()
{
    int n, temp;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    solution ob;
    ob.convertToWave(arr, n);
    for (const auto &e : arr)
    {
        cout << e << " ";
    }
    return 0;
}