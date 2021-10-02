#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> arr1;
    arr1.reserve(20);
    for(int i=0;i<32;i++)
    {
        arr1.push_back(i);
        cout << arr1.at(i) << " \tsize:\t" << arr1.size()<< "\t capacity:\t " << arr1.capacity() << endl;
    }
    return 0;
}