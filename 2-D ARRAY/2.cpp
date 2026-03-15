//Largest Row Sum
#include<iostream>
#include<vector>
using namespace std;
void largestrowsum(int array[][3]){
     vector<int>vec;
     for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
           sum=sum+array[i][j];
        }
        vec.push_back(sum);
    }
    int maxi=vec[0];
    for(int i=0; i<3; i++){
        if(vec[i]>maxi){
            maxi=vec[i];
        }
        
    }
    cout<<maxi;

}
int main() {
    int array[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>array[i][j];
        }
    }
    largestrowsum(array);

}