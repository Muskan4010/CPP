// Design a stack with push, pop, and max functions
// which returns the max value in the stack, all of 
// which are run in O(1) time.
// errors are here!!!!!!!!!
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// public class MaxStack{
//     private class Node{
//         private int value;
//         private Node next;
//         private Node oldMax;
//     }
//     private Node stack;
//     private Node max;
//     public MaxStack() {};
//     public void push(int x){
//         Node n= new Node();
//         n.value = x;
//         if(stack==null){
//             stack=n;
//         }
//         else{
//             n.next= stack;
//             stack =n;
//         }
//         if(max == null || n.value> max.value){
//             n.oldMax= max;
//             max=n;
//         }
//     }
//     public int pop(){
//         //null pointer exception
//         if(stack==null){
//             throw new NullPointerException;
//         }
//         Node n= stack;
//         stack = n.next;
//         if(n.oldMax != null){
//             max= n.oldMax;
//         }
//         return n.value;
//     }
//     public int max(){
//         if(max == null) {
//             throw new NullPointerException;
//         }
//         return max.value;
//     }
// };
// int main(){
//     public class MaxStack s;
//     s.push(5);
//     s.push(6);
//     cout<< s.max();
//     return 0;
// }