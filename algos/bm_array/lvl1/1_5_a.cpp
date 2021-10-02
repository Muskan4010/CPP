//Given an array arr[] and a number K where K is smaller 
//than size of array, the task is to find the Kth smallest 
//element in the given array. 
//It is given that all array elements are distinct.
#include <iostream>
#include <array>
#include <set>
using namespace std;

int kthmin(int arr[],int n,int k){
    int temp;
    if(k>n){
        return -1;
    }
    else{
        set<int> Set;
        for(int i=0;i<n;i++){
            Set.insert(arr[i]);
        }
        set<int>::iterator itr= Set.begin();
        for(int i=1;i<k;i++){
            itr++;
        }
        return *itr;
    }
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
    int min= kthmin(arr,n,k);
    cout<<min;
    return 0;
}
