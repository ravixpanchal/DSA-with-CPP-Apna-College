#include<iostream>
using namespace std;

void clearBits(int num,int i){
    int bitmask=(~0)<<i;
    num=num & bitmask;

    cout<<num<<endl;

}



int main (){
    clearBits(15,2);



    return 0;
}