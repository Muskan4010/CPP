#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    print(queue);
    return 0;
}