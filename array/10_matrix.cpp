//taking input and printing
#include <iostream>
using namespace std;

int main(){
    int m[5][5];
    //input
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>m[i][j];
        }
    }
    cout<<"Matrix is\n";
    //output
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Searching 4\n";
    //searching
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]==4){
                cout<<"Element found\n";
            }
        }
    }
    return 0;
}