#include<iostream>
using namespace std;

void reverseTriangle(int n){
    for(int i=0;i<n;i++){
       
        //Spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<i+1;

        }
        cout<<endl;
    }
}
int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    reverseTriangle(n);
    
    return 0;
}