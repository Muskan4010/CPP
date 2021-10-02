//Given a random set of numbers, 
//Print them in sorted order.
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<"| "<< arr[i]<<"| ";
    }
    cout<<"\n";
}

int minEle(vector<int> arr,int check){
    int tmp=arr[check];
    int i,min;
    for(i=check;i<arr.size();i++){
        if(tmp>=arr[i]){
            tmp=arr[i];
            min=i;
        }
    }
    return min;
}

vector<int> sort(vector<int>arr){
    int j,temp;
    for(int i=0;i<arr.size();i++){
        j=minEle(arr,i);
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        print(arr);
    }
    return arr;
}

int main(){
    int n,temp;
    vector<int> arr;
    cout<<"Number of Elements: ";
    cin>>n;
    arr.reserve(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the Element: ";
        cin>>temp;
        arr.push_back(temp);
    }
    print(arr);
    arr=sort(arr);
    cout<<"\nsorted array \n";
    print(arr);
}