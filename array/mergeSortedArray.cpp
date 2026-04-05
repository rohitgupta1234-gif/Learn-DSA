#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& array1, int n, vector<int>& array2, int m, vector<int>& array3){
     int i=0;
     int j=0;
     int k=0;
     
     while(i<n && j<m){
        if(array1[i]>array2[j]){
            array3[k]=array2[j];
            k++;
            j++;
        }
        else if(array1[i]<array2[j]){
            array3[k]=array1[i];
            k++;
            i++;
        }
     }
     while(i<n){
        array3[k]=array1[i];
        k++;
        i++;
     }
     while(j<m){
       array3[k]=array2[j];
       k++;
       j++;
     }
}
void printarray(vector<int>&array3,int p){
    for(int i=0; i<p; i++){
        cout<<array3[i]<<" ";
    }
}
int main() {
    int n=5,m=3,p=m+n;
    vector<int> array1={1,3,5,7,9};
    vector<int> array2={2,4,6};
    
    vector<int> array3={0};

    merge(array1,n,array2,m,array3);
    printarray(array3,p);

    
}