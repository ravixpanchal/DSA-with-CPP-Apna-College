#include<iostream>
using namespace std;
int main (){
    int arr [3][4];
    int n=3,m=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>arr[i][j];  
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";  
        }
        cout<<endl;
    }


cout<<arr[1][1]<<endl;

    return 0;
}