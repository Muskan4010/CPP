//Palindrome String
//Given a string, determine if it is a palindrome, 
//considering only alphanumeric characters and 
//ignoring cases.
/*
Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool alphanumeric(char c){
        if((c>=0 && c<=9)||(c>'a'&&c<'z')||(c>'A'&& c<'Z')){
            return true;
        }
        return false;
    }
    int isPalindrome(string s){
        int length=0;
        int i=0,j=0;
        while(s[i]!='\0'){
            length++;
            i++;
        }
        int low=0,high=length-1;
        while(low<high){
            if(!alphanumeric(s[low])){
                low++;
            }
            if(!alphanumeric(s[high])){
                high--;
            }
            if(s[low]==s[high] || abs(s[low]-s[high]==32)){
                low++;
                high--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};
