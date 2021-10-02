//Minimum number of jumps
//Given an array of N integers arr[] where each element represents the max
//number of steps that can be made forward from that element. Find
//the minimum number of jumps to reach the end of the array (starting from
//the first element). If an element is 0, then you cannot move through that element.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int minJumps(int arr[], int n)
    {
        int maxReachable = arr[0];
        int steps = arr[0];
        int jumps = 1;
        if (maxReachable == 0)
        {
            return -1;
        }
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                return jumps;
            }
            maxReachable = max(maxReachable, i + arr[i]);
            steps--;
            if (steps == 0)
            {
                jumps++;
                if (maxReachable <= i)
                {
                    return -1;
                }
                steps = maxReachable - i;
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
    int jump = ob.minJumps(arr, n);
    cout << jump;
    return 0;
}