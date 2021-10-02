//Row with max 1s 
//Given a boolean 2D array of n x m dimensions where each row is sorted.
//Find the 0-based index of the first row that has the maximum number of 1's.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int  max1inrow(vector<vector<int>> arr,int n,int m){
        int j=m-1;
        int res=-1;
        for(int i=0;i<n;i++){
            while(arr[i][j]==1){
                j--;
                res=i;
            }
            if(j<0){
                return i;
            }
        }
        return res;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    solution ob;
    int index=ob.max1inrow(arr,n,m);
    cout<<index;
    return 0;
}