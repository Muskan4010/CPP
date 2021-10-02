#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    std::multimap<string,int> Multimap;
    Multimap.insert(pair<string,int>("a",1));
    Multimap.insert(make_pair("a",3));
    Multimap.insert(make_pair("a",1));
    Multimap.insert(make_pair("b",1));
    Multimap.insert(make_pair("b",3));
    for(auto& e:Multimap){
        cout<<e.first<<" "<<e.second<<endl;
    }
    cout<<endl;
    auto range=Multimap.equal_range("a");
    for(auto i=range.first;i!= range.second;i++){
        cout<<i->first <<" "<<i->second<<endl;
    }
    cout<<endl;
    auto range2=Multimap.upper_bound("a");
    cout<<range2->first <<" "<<range2->second<<endl;
    return 0;
}