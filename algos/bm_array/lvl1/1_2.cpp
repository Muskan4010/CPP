//Given an array A of size N of integers. Your task is to 
//find the minimum and maximum elements in the array.
#include <iostream>
#include <array>
using namespace std;

int maxEle(array<int,6> arr){
    int tmp=arr[0];
    for(int i=0;i<arr.size();i++){
        if(tmp<arr[i]){
            tmp=arr[i];
        }
    }
    return tmp;
}
int minEle(array<int,6> arr){
    int tmp=arr[0];
    for(int i=0;i<arr.size();i++){
        if(tmp>arr[i]){
            tmp=arr[i];
        }
    }
    return tmp;
}
int main(){
    std::array <int ,6> A= {3, 2, 1, 56, 10, 167};
    //std::array <int ,6> A= {23, 345, 234, 21, 56789,1};
    int max= maxEle(A);
    cout<<"MAx Element: \t"<<max<<endl;
    int min=minEle(A);
    cout<<"Min Element: \t"<<min<<endl;
    return 0;
}