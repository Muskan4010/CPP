//Construct a unique matrix n x n for an input n
//Each cell contains an integer from 1 and n (inclusive).
//No integer appears twice in the same row or the same column.
//All 1’s must be at every possible distance from the center 
//of the matrix. The center of a n x n square is cell ((n-1)/2, (n-1)/2) for odd n.
#include <iostream>
using namespace std;
const int MAX=100;
int arr[MAX][MAX];
void fillother(int i,int j,int n){
    int x=2;
    for(int k=i+1;k<n;k++){
        arr[k][j]=x++;
    }
    for(int k=0;k<i;k++){
        arr[k][j]=x++;
    }
}
void constructMatrix(int n){
    int right=n-1;
    int left=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i][right]=1;
            fillother(i,right,n);
            right--;
        }
        else{
            arr[i][left]=1;
            fillother(i,left,n);
            left++;
        }
    }
}

int main(){
    int n=5;
    constructMatrix(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}