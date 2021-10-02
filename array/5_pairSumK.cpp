//check if there exist two elements in the array 
//whose sum is equal to k
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]+arr[high]>k){
            high--;
        }
        if(arr[low]+arr[high]<k){
            low++;
        }
        if(arr[low]+arr[high]==k){
            cout<<arr[low++]<<" "<<arr[high--]<<endl;
        }
    }
    return 0;
}