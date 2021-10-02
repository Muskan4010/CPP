//Implement two stacks in an array
//Your task is to implement  2 stacks in one array efficiently.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n = 100)
    {
        size = n, arr = new int[n], top1 = -1, top2 = size;
    }
    void push1(int x)
    {
        arr[++top1] = x;
    }
    void push2(int x)
    {
        arr[--top2] = x;
    }
    int pop1()
    {
        int x;
        if (top1 != -1)
        {
            x = arr[top1--];
        }
        else
        {
            x = -1;
        }
        return x;
    }
    int pop2()
    {
        int x;
        if (top2 != size)
        {
            x = arr[top2++];
        }
        else
        {
            x = -1;
        }
        return x;
    }
};
int main()
{
    twoStacks *sq = new twoStacks();
    int x;
    sq->push1(1);
    sq->push1(3);
    sq->push2(2);
    x = sq->pop1();
    cout << x << endl;
    x = sq->pop1();
    cout << x << endl;
    x = sq->pop1();
    cout << x << endl;
    x = sq->pop2();
    cout << x << endl;
    x = sq->pop2();
    cout << x << endl;
    x = sq->pop2();
    cout << x << endl;
}