#include<iostream>
using namespace std;

int search(int arr[],int si,int ei,int target){
    if(si>ei){
        return -1;
    }

    int mid=si+(ei-si)/2;

    if(arr[mid]==target){
        return mid;
    }

    if(arr[si]<=arr[mid]){
        if(arr[si]<=target && target<=arr[mid]){
            //left
            search(arr,si,mid-1,target);
            
        }
        else{
            search(arr,mid+1,ei,target);
        }
    }
    else{
        if(arr[mid]<=target && target<=arr[ei]){
            search(arr,mid+1,ei,target);
        }
        else{
            search(arr,si,mid-1,target);
        }
    }




}

int main (){
    int arr[]={4,5,6,7,0,1,2};
    cout<<"index:"<<search(arr,0,7,6)<<endl;


    return 0;
}