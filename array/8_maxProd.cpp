//Maximum Product Subarray
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    long long maxProd(int  *arr,int n){
        int choice1,choice2;
        int max_neg=arr[0];
        int max_pos=arr[0];
        int ans=arr[0];
        for(int i=1;i<n;i++){
            choice1=max_neg*(arr[i]);
            choice2=choice2*(arr[i]);
            max_neg=min(arr[i],min(choice1,choice2));
            max_pos=max(arr[i],max(choice1,choice2));
            ans=max(ans,max_pos);
            cout<<arr[i]<<" "<<choice1<<" "<<choice2<<" "<<max_neg<<" "<<max_pos<<endl;
        }
        long long a=ans;
        return a;
    }
};

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ptr=&arr[0];
    solution ob;
    long long max= ob.maxProd(ptr,n);
    cout<<max;
    return 0;
}