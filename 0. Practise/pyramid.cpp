#include<iostream>
using namespace std;

void pyramid(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
          cout<<" ";
        }

        //digit
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }

        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;

    }
}

int main (){
     int n;
    cout<<"Enter n: ";
    cin>>n;
    pyramid(n);
    
    return 0;
}