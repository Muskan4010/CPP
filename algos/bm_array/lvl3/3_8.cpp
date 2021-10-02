//Smallest Positive Integer that can not be represented as Sum
//Given an array of size N, find the smallest positive integer value
//that cannot be represented as sum of some elements from the array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    long long smallestPositive(vector<long> array, int n)
    {
        int minSum = 1;
        sort(array.begin(), array.end());
        for (int i = 0; i < n; i++)
        {
            if (array[i] <= minSum)
            {
                minSum += array[i];
            }
            else
            {
                return minSum;
            }
        }
        return minSum;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<long> array;
    long long temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        array.push_back(temp);
    }
    solution ob;
    cout << ob.smallestPositive(array, n) << endl;
    return 0;
}