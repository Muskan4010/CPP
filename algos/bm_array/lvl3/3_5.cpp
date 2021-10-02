//Sum Pair closest to X
//Given a sorted array arr[] of size N and a number X, find a pair in array whose sum is closest to X.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<int> closestSum(vector<int> arr, int x)
    {
        int n = arr.size();
        int diff = INT_MAX;
        int low = 0, high = n - 1;
        int first = 0, second = 0;
        while (low < high)
        {
            if (abs(arr[high] + arr[low] - x) <= diff)
            {
                diff = abs(arr[high] + arr[low] - x);
                first = arr[low];
                second = arr[high];
            }
            if (arr[low] + arr[high] > x)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        vector<int> v;
        v.push_back(first);
        v.push_back(second);
        return v;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int x;
    cin >> x;
    solution ob;
    auto v = ob.closestSum(arr, x);
    cout << v[0] << " " << v[1] << endl;
    return 0;
}