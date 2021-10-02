#include <iostream>
#include <deque>
using namespace std;

void print(const std::deque<int>& dqu){for(int num:dqu) cout<< num<<" ";cout<<endl;}

int main(){
    std::deque<int> dqu={2,3,4};
    dqu.push_front(1);
    dqu.push_back(5);
    print(dqu);
    dqu.pop_front();
    print(dqu);
    dqu.pop_back();
    print(dqu);
    return 0;
}