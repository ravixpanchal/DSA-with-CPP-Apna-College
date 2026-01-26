#include<iostream>
#include<string>
using namespace std;

int friendPair(int n){

    //base case
    if(n==1 || n==2){
        return n;
    }

    return friendPair(n-1)+(n-1)*friendPair((n-2));


}

int main (){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<friendPair(n)<<endl;



    return 0;
}