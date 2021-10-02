//Count More than n/k Occurences
//Given an array arr[] of size N and an element k. The task is to
//find all elements in array that appear more than n/k times.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int countOccurences(int arr[], int n, int k)
    {
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            if (map.find(arr[i]) == map.end())
            {
                map[arr[i]] = 0;
            }
            map[arr[i]]++;
        }
        int count = 0;
        int check = n / k;
        for (const auto &e : map)
        {
            if (e.second > check)
            {
                count++;
            }
        }
        return count;
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
    int k;
    cin >> k;
    solution ob;
    int count = ob.countOccurences(arr, n, k);
    cout << count;
    return 0;
}