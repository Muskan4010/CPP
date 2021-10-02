// Given an array arr of integer elements, 
// the task is to find the range and coefficient of range 
// of the given array where: 
// Range: Difference between the maximum value 
// and the minimum value in the distribution. 
// Coefficient of Range: (Max – Min) / (Max + Min).

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pp;

pp minMax(int a[],int n){
    pp mm;
    mm.first=a[0];
    mm.second=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>mm.first){
            mm.first=a[i];
        }
        if(a[i]<mm.second){
            mm.second=a[i];
        }
    }
    return mm;
}

float coeff(int min,int max){
    float mi=min;
    float ma=max;
    float coeff=(ma-mi)/(mi+ma);
    return coeff;
}

int main(){
    cout<< "Enter array size: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<< "Enter : ";
        cin>>arr[i];
    }
    auto mm=minMax(arr,n);
    auto range= mm.first-mm.second;
    cout<<range<<endl;
    auto co=coeff(mm.second,mm.first);
    cout<<co<<endl;
    return 0;
}