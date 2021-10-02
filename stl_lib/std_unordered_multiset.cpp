//unordered multiset
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    std::unordered_multiset <int> mset = {4,1,2,3,9,4,3,2,9,8,10};
    auto search = mset.find(2);
    if(search!=mset.end()){
        cout<<"Found "<<(*search)<<endl;
    }
    else{
        cout<<"NOT FOUND" ;
    }
    for(const auto &e:mset){
        cout<<e<<" ";
    }
    cout<<mset.count(4)<<endl;
    return 0;
}