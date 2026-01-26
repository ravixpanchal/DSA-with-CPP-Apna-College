#include<iostream>
using namespace std;

int getIthBit(int num,int i){
    int bitmask=1<<i ;
        if((num & bitmask)==0){
            cout<<"O bit"<<endl;
        }
        else{
            cout<<"1 bit"<<endl;
        }
    }


int main (){
    int num;
    getIthBit(9,0);




    return 0;
}