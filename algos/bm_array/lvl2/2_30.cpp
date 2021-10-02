//Trapping Rain Water
//Given an array arr[] of N non-negative integers representing the height of blocks.
//If width of each block is 1, compute how much water can
//be trapped between the blocks during the rainy season.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int tappingWater(int arr[], int n)
    {
        int area = 0;
        int start = 0, end = n - 1;
        int maxLeft = 0, maxRight = 0;
        while (start < end)
        {
            maxLeft = max(maxLeft, arr[start]);
            maxRight = max(maxRight, arr[end]);
            if (maxLeft < maxRight)
            {
                area = area + maxLeft - arr[start++];
            }
            else
            {
                area = area + maxRight - arr[end--];
            }
        }
        return area;
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
    int water = ob.tappingWater(arr, n);
    cout << water;
    return 0;
}