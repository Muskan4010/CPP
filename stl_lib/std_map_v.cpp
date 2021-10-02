// Dictionary type
#include <iostream>
#include <map>
#include<functional>
#include <vector>
using namespace std;

int main(){
    std::map<string,vector<int>> Map;
    Map["Muskan"].push_back(2345);
    Map["Aditya"].push_back(9800);
    Map["Aditya"].push_back(1000);

    for(const auto& e:Map){
        cout<<e.first<<endl;
        for(auto& e2: e.second){
            cout<<e2<<" ";
        }
        cout<<endl;
    }
    return 0;
}