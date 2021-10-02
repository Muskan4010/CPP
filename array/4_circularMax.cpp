//maximum circular subarray sum
//maxsum= total sum- sum of non contribution
//wrapsum which takes element after arr[n-1] -> a[0]
//nonwrapsum is calculated with kadane's algorithm
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[],int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int wrapSum;
    int nonwrapSum;
    nonwrapSum= kadanes(arr,n);
    //for wrapsum
    int total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
        arr[i]=-arr[i];
    }
    wrapSum=total-(-kadanes(arr,n));
    int res=max(wrapSum,nonwrapSum);
    cout<<res;

    return 0;
}