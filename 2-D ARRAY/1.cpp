// Row Wise Sum and column Wise sum
#include<iostream>
using namespace std;
int main () {
    int array[4][3];
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>array[i][j];
        }
    }
   // Row wise
    // for(int i=0; i<4; i++){
    //      int sum=0;
    //     for(int j=0; j<3; j++){
    //         sum=sum+array[i][j];
    //     }
    //     cout<<sum<<endl;
    // }
    

    //Column Wise
    for(int i=0; i<3; i++){
        int sum=0; 
        for(int j=0; j<4; j++){
            sum= sum+array[j][i];
        }
        cout<<sum<<endl;
    }
}