#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s="some text";
    s.resize(4);
    cout<<s;
    string s2="some more text";
    s2.resize(20,'!');
    cout<<s2;
    string s3;
    getline(cin,s3);
    s3.resize(s3.length()+3,'!');
    cout<<s3;
}