#include <iostream>
#include <array>
using namespace std;

int main()
{
    //Declare
    //std::array<int, 5>myarray;

    //Initialization
    std::array<int, 5>myarray={1,2,3,4,5};  //initializer list
    //std::array<int, 5>myarray2 {1,2,3,4,5};  //uniform initialization

    /*Assign using initializer list
    std::array<int, 5>myarray;
    myarray={1,2,3,4,5};*/

    cout<<myarray.at(3);
    cout<<myarray.front();
    cout<<myarray.back();

    return 0;
}