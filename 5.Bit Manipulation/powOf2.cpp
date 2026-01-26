#include<iostream>
using namespace std;

int powOf2(int num){
if((num &(num-1))==0){
    cout<<"Num is power of 2";
}
else{
    cout<<"Num is not power of 2";
}
}


int main (){
    powOf2(16);




    return 0;
}