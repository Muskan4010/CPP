#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<int> list1={5,6,7,8};
    forward_list<int> list2={1,2,3,4};
    list1.insert_after(list1.begin(),8);
    //it will insert 8 after 1st element
    for(const auto& e:list1){
        cout<<e<<" ";
    }
    cout<<endl;
    list1.remove_if([](int n){
        return n>7;
    });
    for(const auto& e:list1){
        cout<<e<<" ";
    }
    cout<<endl;
    list1.reverse();
    for(const auto& e:list1){
        cout<<e<<" ";
    }
    cout<<endl;
    list1.splice_after(list1.begin(),list2);
    for(const auto& e:list1){
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<"Size of list1 "<<std::distance(list1.before_begin(),list1.end())<<endl;
    list1.sort();
    list2.sort();
    list1.merge(list2);
    for(const auto& e:list1){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}