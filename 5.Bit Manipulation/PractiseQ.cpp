//(1)clear ith bit
//(2)set ith bit


#include<iostream>
using namespace std;

int ithBit(int num,int i,int value){
    //clear the ith bit
    num =(num & ~(1<<i));

    num = num | (value<<i);  //set the value

    cout<<num<<endl;


    }



int main (){

    ithBit(7,3,1);



    return 0;
}