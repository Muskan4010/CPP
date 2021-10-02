//Given an array of size N containing only 0s, 1s, and 2s; 
//sort the array in ascending order.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int tmp;
        int low=0,high=n-1,mid=0;
        while(mid<=high){
            switch(a[mid]){
                case 0:
                swap(a[low],a[mid]);
                low++;
                mid++;
                break;
                case 1:
                mid++;
                break;
                case 2:
                swap(a[mid],a[high]);
                high--;
                break;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        Solution ob;
        ob.sort012(a, n);
        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;
    return 0;
}