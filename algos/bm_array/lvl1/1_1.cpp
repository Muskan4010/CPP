//Given an array arr[] and size of array is n and one another key x,
//and give you a segment size k.
//The task is to find that the key x present in every segment of size k in arr[].

#include <iostream>
#include <array>
using namespace std;

int findx(std::array <int,12>& arr,int x,int k){
    int size=arr.size();
    int i;
    cout<<"Size="<<size<<endl;
    for(i=0;i<size;i=i+k){
        int j;
        for(j=0;j<k;j++){
            if(arr[i+j]==x){
                break;
            }
        }
        if(j==k){
            return 0;
        }
    }
    if(i==size){
        return 1;
    }
    int j;
    for(j=i-k;j<size;j++){
        if(arr[j]==x){
            break;
        }
    }
    if(j==size){
        return 0;
    }
    return 1;
}


int main(){
    int x,k;
    std::array<int ,12> arr= { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3};
    cout<< "Enter Key: ";
    cin>>x;
    cout<< "Enter Segment Size: ";
    cin>>k;
    int res=findx(arr,x,k);
    if(res==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}