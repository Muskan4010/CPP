//Given an array arr[] and a number K where K is smaller
//than size of array, the task is to find the Kth smallest
//element in the given array.
//It is given that all array elements are distinct.
//use max heap to get kth smallest
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthmin(int arr[],int n,int k){
    std::priority_queue<int> maxh;
    int tmp;
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    tmp= maxh.top();
    return tmp;
}

int main(){
    cout<< "Enter array size: ";
    int k,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<< "Enter : ";
        cin>>arr[i];
    }
    cout<< "Enter k :";
    cin>>k;
    int min=kthmin(arr,n,k);
    cout<<min;
    return 0;
}
