#include<iostream>
using namespace std;

void trianglePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    trianglePattern(n);



    return 0;
}