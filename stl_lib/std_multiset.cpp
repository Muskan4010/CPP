#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs)const{ return age<rhs.age;};
    bool operator > (const Person& rhs)const{ return age>rhs.age;};
};

int main(){
    std::multiset<Person,std::greater<>> multiset={{24,"Mug"},{10,"Glass"}};
    multiset.insert({20,"Cup"});
    for(const auto& e:multiset){
        cout<< e.age <<" " << e.name <<endl;
    }
    return 0;
}
