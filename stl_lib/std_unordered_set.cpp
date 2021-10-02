//unordered_set
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    std::unordered_set<int> uset={4,1,2,3,4,2,3};
    auto search=uset.find(2);
    if(search!=uset.end()){
        std::cout<<"found "<<(*search)<<'\n';
    }
    else{
        std::cout<<"NOT FOUND"<<endl;
    }
    for(const auto &e:uset){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}