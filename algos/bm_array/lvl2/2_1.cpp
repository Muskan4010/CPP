// Given an array, rotate the array by one position 
// in clock-wise direction.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rotate(int arr[],int n){
        //clockwise rotation swap from end
        for(int i=n-1;i>0;i--){
            swap(arr[i],arr[i-1]);
        }
    }
};

int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter :";
        cin>>arr[i];
    }
    Solution ob;
    ob.rotate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}