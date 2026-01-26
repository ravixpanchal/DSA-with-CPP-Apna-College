#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingSort(int arr[],int n){
    int freq[100000];
    int minVal=INT32_MAX;
    int maxVal=INT32_MIN;
    for(int i=0;i<n;i++){
      minVal=min(minVal,arr[i]);  
      maxVal=max(maxVal,arr[i]);  
    }
        //1st step:O(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;

    }
       //2nd step:O(range)
      for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
      } 
      printArr(arr,n);


}




int main (){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    countingSort(arr,n);






    return 0;
}




            // Short tareeka
// #include<iostream>
// using namespace std;

// void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void countingSort(int arr[],int n){
//     int freq[100000];
//     int minVal=INT32_MAX;
//     int maxVal=INT32_MIN;
//     for(int i=0;i<n;i++){
//       minVal=min(minVal,arr[i]);  
//       maxVal=max(maxVal,arr[i]);  
//     }
//         //1st step:O(n)
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;

//     }
//        //2nd step:O(range)
//       for(int i=minVal,j=0;i<=maxVal;i++){
//         while(freq[i]>0){
//             arr[j++]=i;
//             freq[i]--;
//         }
//       } 
//       printArr(arr,n);


// }




// int main (){
//     int arr[]={1,4,1,3,2,4,3,7};
//     int n=sizeof(arr)/sizeof(int);
//     // countingSort(arr,n);
//     sort(arr,arr+8);

//     printArr(arr,8);






//     return 0;
// }

