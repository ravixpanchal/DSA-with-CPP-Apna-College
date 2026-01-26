#include<iostream>
using namespace std;

void reverseArr(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int firstValue=arr[i];
        int secondValue=arr[n-i-1];

        arr[i]=secondValue;
        arr[n-i-1]=firstValue;
    }
}


int main (){
    int arr[]={1,2,3,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(int);
reverseArr(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;








    return 0;
}