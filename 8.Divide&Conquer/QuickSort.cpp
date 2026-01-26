#include<iostream>
using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int partition(int arr[],int si,int ei){
    int i=si-1;
    int pivot=arr[ei];
    for(int j=si;j<pivot;j++){
        if(arr[j]<=ei){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    i++;
    swap(arr[i],arr[ei]);
    return i;

}

void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }



    //partition function
  int pivotIdx =  partition(arr,si,ei);

  quickSort(arr,si,pivotIdx-1);
  quickSort(arr,pivotIdx+1,ei);

}



int main (){
    int arr[]={6,3,7,5,2,4};
    int n=6;

    quickSort(arr,0,n-1);
    printArr(arr,n);

}