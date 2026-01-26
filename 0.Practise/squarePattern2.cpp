#include<iostream>
using namespace std;
void squarePattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(65+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    squarePattern(n);
}