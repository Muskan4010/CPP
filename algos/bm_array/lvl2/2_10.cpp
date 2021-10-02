// Given an unsorted array Arr of N positive and negative
// numbers. Your task is to create an array of alternate
// positive and negative numbers without changing the
// relative order of positive and negative numbers.
// Note: Array should start with positive number.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void rearrange(int arr[], int n)
    {
        vector<int> neg, pos;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }
        }
        int i = 0, j = 0, k = 0;
        while (i < n)
        {
            if (!pos.empty() && j < pos.size())
            {
                arr[i++] = pos[j++];
            }
            if (!neg.empty() && k < neg.size())
            {
                arr[i++] = neg[k++];
            }
        }
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
    ob.rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}