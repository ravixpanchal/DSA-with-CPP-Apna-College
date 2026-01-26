#include<iostream>
using namespace std;
void squarePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
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