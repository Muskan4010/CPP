// Dictionary type
#include <iostream>
#include <map>
#include<functional>
#include <vector>
using namespace std;

int main(){
    std::map<string,int, std::greater<string>> Map;
    Map["Muskan"]=2345;
    Map["Aditya"]=9800;
    Map.insert(std::make_pair("Bot",1010));
    for(const auto& e:Map){
        cout<<e.first<<e.second<<endl;;
    }
    cout<<Map["Bot"]<<endl;
    return 0;
}