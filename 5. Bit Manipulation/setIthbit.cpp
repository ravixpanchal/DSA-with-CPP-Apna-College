#include<iostream>
using namespace std;

int setIthPosition(int num,int i){
    int bitmask=1<<i;
    cout<<(num | bitmask)<<endl;
}

int clearIthBit(int num,int i){
    int bitmask=~(1<<i);
    return num=(num & bitmask);
}



int main (){
    // setIthPosition(6,3);
    cout<<clearIthBit(6,1);



    return 0;
}