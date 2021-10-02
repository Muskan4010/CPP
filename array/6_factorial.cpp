//factorial of a large number
//https://www.youtube.com/watch?v=2fYZERB2Yng
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int q=2;
    int arr[100000]={1};
    arr[0]=1;
    int num=0,x=0;
    int len=1;
    while(q<=n){
        x=0;
        num=0;
        while(x<len){
            arr[x]=arr[x]* q;
            arr[x]+=num;
            num=arr[x]/10;
            arr[x]=arr[x]%10;
            x++;
        }
        while(num!=0){
            arr[len]=num%10;
            num=num/10;
            len++;
        }
        q++;
    }
    for(int i=len-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}