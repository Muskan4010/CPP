// Given an unsorted array arr[] of size N having both 
// negative and positive integers. The task is place 
// all negative element at the end of array without changing 
// the order of positive element and negative element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        stack<int> s1;
        stack<int> s2;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>0){
                s1.push(arr[i]);
            }
            else{
                s2.push(arr[i]);
            }
        }
        int i=0;
            while(s1.size()!=0){
                arr[i]=s1.top();
                s1.pop();
                i++;
            }
            while(s2.size()!=0){
                arr[i]=s2.top();
                s2.pop();
                i++;
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