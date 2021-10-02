//You are given a string s. You need to reverse the string.
#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    return s;
}

int main(){
    int t;
    cout<<"No of words: ";
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<s <<"\t" <<reverse(s)<<endl;
    }
    return 0;
}