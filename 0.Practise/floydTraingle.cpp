#include<iostream>
using namespace std;

void floydTriangle(int n){
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }

}

int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    floydTriangle(n);
    
    return 0;
}