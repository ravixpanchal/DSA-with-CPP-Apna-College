#include<iostream>
#include<math.h>
using namespace std;

int print_pow(int n,int r){
    if(r==0){
        return 1;
    }
    return n*pow(n,r-1);
}



int main (){
    int n;
    cout<<print_pow(3,4)<<endl;


    return 0;
}