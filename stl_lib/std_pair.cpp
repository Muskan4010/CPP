#include <iostream>
#include <vector>
using namespace std;

void print(std::pair<int,int> obj){
    cout << obj.first << " " << obj.second << endl;
}

int main(){
    {
        std::pair<int,int> obj(10,20);
        print(obj);
    }
    {
        std::pair<int,int> obj= std::make_pair(10,20);
        print(obj);
    }
    {
        std::vector<std::pair<std::string, int>> list;
        list.push_back(make_pair("Rupa",45));
        list.push_back(std::pair<std::string,int>("Seema",23));
        for(const auto& e:list){
            cout<<e.first<<" "<<e.second;
        }
        return 0;
    }
}