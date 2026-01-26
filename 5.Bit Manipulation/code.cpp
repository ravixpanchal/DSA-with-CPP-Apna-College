#include<iostream>
using namespace std;

void oddOrEven(int num){

    //Taking and with 1 is called Bitmask
    
    if((num & 1)==0){
        cout<<"num is even\n";
    }
    else{
        cout<<"num is odd\n";
    }
}





int main (){
    int num;
    cout<<"Enter a num:";
    cin>>num;
    oddOrEven(num);




    return 0;
}