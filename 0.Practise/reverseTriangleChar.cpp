#include<iostream>
using namespace std;

void inverseCharTriangle(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        //char
        for(int j=0;j<n-i;j++){
            cout<<char(i+65);
        }
        cout<<endl;
    }

}
int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    inverseCharTriangle(n);
    
    return 0;
}