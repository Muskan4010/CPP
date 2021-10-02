// Longest consecutive subsequence
// Given an array of positive integers. Find the length of the longest sub-sequence such
// that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int findLongestConseqSubseq(int arr[], int n)
    {
        set<int> Hash;
        for (int i = 0; i < n; i++)
        {
            Hash.insert(arr[i]);
        }
        int count = 0, max_count = 0;
        for (const auto &e : Hash)
        {
            if (Hash.find(e - 1) == Hash.end())
            {
                count = 0;
                int currNum = e;
                while (Hash.find(currNum) != Hash.end())
                {
                    count++;
                    currNum++;
                }
                max_count = max(max_count, count);
            }
        }
        return max_count;
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
    int max = ob.findLongestConseqSubseq(arr, n);
    cout << max;
    return 0;
}