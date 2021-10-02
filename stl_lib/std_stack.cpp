#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    print(stack);
    return 0;
}