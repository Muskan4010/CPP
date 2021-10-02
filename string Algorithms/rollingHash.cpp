//rolling hash
#include<iostream>
#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int getHash(string key){
    lli value=0;
    lli p=31;
    lli p_power =1;
    for(char ch : key){
        value=(value+(ch -'a'+1)*p_power)%mod;
        p_power=(p_power *p)%mod;
    }
    return value;
}

int main(){
    bool flag=1;
    while(flag){
        string key;
        cout<<"Enter Key: ";
        cin>>key;
        if(key =="."){
            flag=false;
        }
        else{
            cout<<"Key: "<<key<<"\nHash: "<<getHash(key)<<endl;
        }
    }
}