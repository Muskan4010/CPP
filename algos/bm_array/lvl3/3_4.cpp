//Stock buy and sell
//The cost of stock on each day is given in an array A[] of size N. Find all the days
//on which you buy and sell the stock so that in between those days your profit is maximum.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<vector<int>> stockBuySell(vector<int> A, int n)
    {
        int i = 0;
        vector<vector<int>> ans;
        while (i < n - 1)
        {
            vector<int> temp;
            while ((i < n - 1) && (A[i + 1] <= A[i]))
            {
                i++;
            }
            if (i == n - 1)
            {
                break;
            }
            int buy = i++;
            while ((i < n) && (A[i] >= A[i - 1]))
            {
                i++;
            }
            int sell = i - 1;
            temp.push_back(buy);
            temp.push_back(sell);
            ans.push_back(temp);
        }
        return ans;
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
    solution ob;
    auto ans = ob.stockBuySell(arr, n);
    for (const auto &e : ans)
    {
        for (const auto &e2 : e)
        {
            cout << e2 << " ";
        }
        cout << "\n";
    }
    return 0;
}