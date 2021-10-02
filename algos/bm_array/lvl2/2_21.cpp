//Two Repeated Elements
//You are given an array of N+2 integer elements. All elements of the array
//are in range 1 to N. Also, all elements occur once
//except two numbers which occur twice. Find the two repeating numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<int> repeated(int arr[], int n)
    {
        vector<int> repeat;
        for (int i = 0; i < n + 2; i++)
        {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
            if (arr[abs(arr[i])] > 0)
            {
                repeat.push_back(abs(arr[i]));
            }
        }
        return repeat;
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n + 2];
    for (int i = 0; i < n + 2; i++)
    {
        cin >> arr[i];
    }
    solution ob;
    vector<int> res = ob.repeated(arr, n);
    for (const auto &e : res)
    {
        cout << e << " ";
    }
    return 0;
}