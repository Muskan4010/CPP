//Minimum element in a sorted and rotated array
//A sorted array A[ ] with distinct elements is rotated at some
//unknown point, the task is to find the minimum element in it.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int findMin(int arr[], int n)
    {
        int min_ele = INT_MAX, i;
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                min_ele = arr[i];
                break;
            }
        }
        min_ele = min(min_ele, arr[0]);
        return min_ele;
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
    int minimum = ob.findMin(arr, n);
    cout << minimum;
    return 0;
}