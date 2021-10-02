// Given an array with all distinct elements, 
// find the largest three elements. 
// Expected time complexity is O(n) and extra space is O(1). 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printElement(int a[],int n){
    int first,second,third;
    first=second=third=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>first){
            third=second;
            second=first;
            first=a[i];
        }
        if(a[i]<first && a[i]> second){
            third=second;
            second=a[i];
        }
        if(a[i]<first && a[i]<second && a[i]>third){
            third=a[i];
        }
    }
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<third<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printElement(arr,n);
    return 0;
}