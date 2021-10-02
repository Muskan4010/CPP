#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

class Person{
    public:
        float age;
        string name;
    bool operator < (const Person& rhs) const { return age<rhs.age;}
    bool operator > (const Person& rhs) const { return age>rhs.age;}
};

int main()
{
    set<int> Set= {1,2,3,4,5,1,2,3,4,5};
    for(const auto& e: Set)
    {
        cout<< e << "\t";
    }
    cout<<"\n";
    set<Person, std::greater<>> Set2={{30,"Muskan"},{26,"Aditya"},{20,"Abhinav"}};
    for(const auto& e: Set2)
    {
        cout<< e.age << "\t" <<e.name <<endl;
    }
    return 0;
}