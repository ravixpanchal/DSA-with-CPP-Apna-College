#include<iostream>
using namespace std;

void hollow_diamond_Pattern(int n){
    //TOP
    for(int i=0;i<n;i++){  //outer
     
        //spaces-1
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
            //spaces-2
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }  
        cout<<endl;
    }

    //Bottom
    for(int i=0;i<n-1;i++){
        //spaces-1
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    hollow_diamond_Pattern(n);
    
    return 0;
}