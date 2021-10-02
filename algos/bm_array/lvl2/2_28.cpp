//Majority Element
//Given an array A of N elements. Find the majority element in the array.
//A majority element in an array A of size N is an element that appears more than N/2 times in the array.

//use moor's voting algorithm
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int majorityElement(int a[], int size)
    {
        int count = 0;
        int element = a[0];
        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                element = a[i];
            }
            if (element == a[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (element == a[i])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            return element;
        }
        else
        {
            return -1;
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
    int res = ob.majorityElement(arr, n);
    cout << res;
    return 0;
}