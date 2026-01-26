#include<iostream>
using namespace std;

void squarePattern(int n){
    int m=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(m)<<" ";
            m++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    squarePattern(n);





    return 0;
}