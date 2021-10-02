//GCDs of given index ranges in an array
//Input : a[] = {2, 3, 60, 90, 50};
//Index Ranges : {1, 3}, {2, 4}, {0, 2}
//Output: GCDs of given ranges are 3, 10, 1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int gcd(int a,int b){
        if(a==0){return b;}
        if(b==0){return a;}
        return gcd(b,a%b);
    }
    int calculateGCD(int arr[],int n,int l,int r){
        int temp=arr[l];
        for(int i=l+1;i<=r;i++){
            temp=gcd(temp,arr[i]);
        }
        return temp;
    }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,r;
    cin>>l>>r;
    solution ob;
    int gcd=ob.calculateGCD(arr,n,l,r);
    cout<<gcd;
    return 0;
}