#include<iostream>
using namespace std;

int m=1;
void squarePattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m<<" ";
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