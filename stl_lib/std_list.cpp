#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> list1={5,6,7,8};
    list<int> list2={1,2,3,4};

    for(auto& e:list1){
        cout<<e<<" ";
    }
    cout<<endl;
    for(auto& e:list2){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}