//Given a vector of N positive integers and an integer X. 
//The task is to find the frequency of X in vector.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findFrequency(vector<int> v, int x){
    int flag;
    for(const auto& e:v){
        if(e==x){
            flag++;
        }
    }
    return flag;
}

int main(){
    vector <int> v;
    cout<<"Enter no of elements :";
    int n,temp;
    cin>>n;
    v.reserve(n);
    for(int i=0;i<n;i++){
        cout<<"Enter:";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Serach: ";
    cin>>temp;
    int flag=findFrequency(v,temp);
    cout<<flag;}

 