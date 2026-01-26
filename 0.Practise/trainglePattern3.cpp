#include<iostream>
using namespace std;

void tranglePattern(int n){
for(int i=1;i<=n;i++){
    int m=65;
    for(int j=1;j<=i;j++){
        cout<<char(m)<<" ";
        m++;
    }
    cout<<endl;
}
}

int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    tranglePattern(n);
    
    return 0;
}